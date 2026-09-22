/** Portable evaluator for the original Davi-Script object format 27.
 * Instruction/operand ordering is recovered from RcHcGame.dat; see
 * docs/davi-vm-opcodes.md. This module contains no browser or native ABI code.
 */
export class DaviRuntimeError extends Error {
  constructor(message, context = {}) {
    super(message); this.name = 'DaviRuntimeError'; Object.assign(this, context);
  }
}
const TYPE_NAMES = ['void', 'double', 'int', 'string', 'object'];
const typeCode = type => typeof type === 'number' ? type : type?.code ?? 0;
const defaultValue = type => typeCode(type) === 3 ? '' : typeCode(type) === 4 ? null : 0;
const typed = (type, value) => ({ type: typeCode(type), value });
const objectName = object => typeof object === 'string' ? object : object?.daviName ?? object?.name;
const key = record => record.id ?? `${record.tag.toString(16)}:${record.index}`;

function coerce(type, value) {
  const code = typeCode(type);
  if (code === 0) return undefined;
  if (code === 1) {
    if (typeof value !== 'number' || !Number.isFinite(value)) throw new DaviRuntimeError('Expected a finite double');
    return value;
  }
  if (code === 2) {
    if (typeof value === 'boolean') return Number(value);
    if (typeof value !== 'number' || !Number.isFinite(value)) throw new DaviRuntimeError('Expected an integer');
    return Math.trunc(value) | 0;
  }
  if (code === 3) {
    if (typeof value !== 'string') throw new DaviRuntimeError('Expected a string');
    return value;
  }
  if (code === 4) return value === 0 ? null : value;
  throw new DaviRuntimeError(`Unknown value type ${code}`);
}

/** Native BINOP dispatch (0x005f8740), including signed 32-bit arithmetic. */
export function daviBinary(operator, left, right) {
  if (left.type !== right.type) throw new DaviRuntimeError(`Binary type mismatch: ${left.type}, ${right.type}`);
  const a = left.value, b = right.value, integer = left.type === 2;
  const number = value => typed(integer ? 2 : 1, integer ? Math.trunc(value) | 0 : value);
  const boolean = value => typed(2, Number(value));
  if (operator >= 5 && operator <= 10) {
    if (operator === 5) return boolean(a >= b);
    if (operator === 6) return boolean(a <= b);
    if (operator === 7) return boolean(a > b);
    if (operator === 8) return boolean(a < b);
    if (operator === 9) return boolean(a === b);
    return boolean(a !== b);
  }
  if (left.type === 3 && operator === 1) return typed(3, a + b);
  if (![1, 2].includes(left.type)) throw new DaviRuntimeError(`Unsupported binary operation ${operator} for ${TYPE_NAMES[left.type]}`);
  if (operator === 1) return number(a + b);
  if (operator === 2) return integer ? typed(2, Math.imul(a, b)) : number(a * b);
  if (operator === 3) return number(a - b);
  if ([4, 14, 15].includes(operator) && b === 0) throw new DaviRuntimeError('Division by zero');
  if (operator === 4) return number(a / b);
  if (operator === 11 && integer) return boolean(a !== 0 || b !== 0);
  if (operator === 12 && integer) return boolean(a !== 0 && b !== 0);
  if (operator === 14) return number(a % b);
  if (operator === 15) return typed(2, Math.trunc(a / b) | 0);
  if (operator === 16) return number(a ** b);
  throw new DaviRuntimeError(`Unknown binary operator ${operator}`);
}

/** Native UNOP/CAST dispatch (0x005fc230). Unmapped operators fail explicitly. */
export function daviUnary(operator, operand) {
  const value = operand.value;
  if (operator === 0 && [1, 2].includes(operand.type)) return typed(operand.type, operand.type === 2 ? -value | 0 : -value);
  if (operator === 1 && operand.type === 2) return typed(2, Number(value === 0));
  if (operator === 2 && operand.type === 2) return typed(1, value);
  if (operator === 3 && operand.type === 2) return typed(3, String(value));
  if (operator === 4 && operand.type === 1) return typed(3, Number(value.toPrecision(6)).toString());
  if (operator === 5 && operand.type === 1) return typed(2, Math.trunc(value) | 0);
  if (operator === 6 && operand.type === 3) return typed(2, Number.parseInt(value, 10) | 0);
  if (operator === 7 && operand.type === 3) return typed(1, Number.parseFloat(value) || 0);
  if (operator === 8 && operand.type === 1) return typed(2, Math.trunc(value + .5) | 0);
  if (operator === 9 && operand.type === 1) return typed(1, Math.sin(value));
  if (operator === 10 && operand.type === 1) return typed(1, Math.cos(value));
  if (operator === 11 && operand.type === 1) return typed(1, Math.tan(value));
  if (operator === 17 && operand.type === 1) return typed(1, Math.atan(value));
  if (operator === 18 && operand.type === 1) return typed(1, Math.log10(value));
  if (operator === 19 && operand.type === 1) return typed(1, Math.exp(value));
  if (operator === 20 && operand.type === 1) return typed(1, Math.log(value));
  throw new DaviRuntimeError(`Unsupported unary operator ${operator} for ${TYPE_NAMES[operand.type]}`);
}

export class DaviVM {
  constructor(program, host, options = {}) {
    if (program.version !== 27) throw new DaviRuntimeError(`Unsupported Davi-Script version ${program.version}`);
    this.program = program; this.host = host;
    this.options = { maxSteps: 50000, maxDepth: 64, maxStack: 4096, traceLimit: 200, ...options };
    this.records = new Map(); this.functions = new Map(); this.events = new Map(); this.globals = new Map();
    this.trace = []; this.lastError = null; this.frames = []; this.steps = 0; this.initialized = false;
    const index = record => {
      const id = key(record);
      if (this.records.has(id)) throw new DaviRuntimeError(`Duplicate record ${id}`);
      this.records.set(id, record);
      for (const group of ['variables', 'members', 'parameters', 'locals', 'handlers']) for (const item of record[group] ?? []) index(item);
    };
    for (const group of ['classes', 'globals', 'constants', 'objects', 'functions']) for (const record of program[group] ?? []) index(record);
    for (const record of program.functions ?? []) this.functions.set(record.name.toLowerCase(), record);
    for (const record of [...program.globals ?? [], ...program.constants ?? []]) this.globals.set(key(record), typed(record.type, record.value ?? defaultValue(record.type)));
    for (const cls of program.classes ?? []) for (const event of cls.members ?? []) {
      for (const handler of event.handlers ?? []) {
        const owner = this.resolveReference(handler.owner);
        const id = this.eventKey(owner.name, event.name);
        if (!this.events.has(id)) this.events.set(id, []);
        this.events.get(id).push(handler);
      }
    }
  }
  eventKey(name, event) { return `${String(name).toLowerCase()}\0${String(event).toLowerCase()}`; }
  hasHandler(object, event) { return this.events.has(this.eventKey(objectName(object), event)); }
  recordTrace(entry) {
    if (this.options.traceLimit <= 0) return;
    this.trace.push(entry);
    if (this.trace.length > this.options.traceLimit) this.trace.shift();
  }
  resolveReference(reference) {
    const id = reference?.id ?? reference?.path?.toReversed().map(part => `${part.tag.toString(16)}:${part.index}`).join('/');
    const record = this.records.get(id);
    if (!record) throw new DaviRuntimeError(`Unresolved script reference ${id ?? 'null'}`);
    return record;
  }
  initialize() {
    if (this.initialized) return;
    this.call('@init'); this.initialized = true;
  }
  call(name, args = []) {
    const fn = this.functions.get(String(name).toLowerCase());
    if (!fn) throw new DaviRuntimeError(`Unknown script function ${name}`);
    return this.guard(() => this.invoke(fn, args));
  }
  dispatch(object, event, args = []) {
    const name = objectName(object);
    const handlers = this.events.get(this.eventKey(name, event)) ?? [];
    if (!handlers.length) return 0;
    const token = typeof object === 'string' ? this.host.resolveObject(object) : object;
    return this.guard(() => {
      this.recordTrace({ kind: 'event', object: name, name: event, args });
      for (const handler of handlers) this.invoke(handler, args, token);
      return handlers.length;
    });
  }
  guard(action) {
    if (!this.frames.length) { this.steps = 0; this.lastError = null; }
    try { return action(); }
    catch (error) {
      const frame = this.frames.at(-1);
      const fault = error instanceof DaviRuntimeError ? error : new DaviRuntimeError(error.message, { cause: error });
      fault.functionName ??= frame?.fn.name;
      fault.instruction ??= frame?.pc;
      fault.source ??= this.program.source;
      this.lastError = { message: fault.message, functionName: fault.functionName, instruction: fault.instruction, source: fault.source };
      throw fault;
    }
  }
  invoke(fn, args, self = undefined) {
    if (this.frames.length >= this.options.maxDepth) throw new DaviRuntimeError('Script call depth exceeded');
    const parameters = fn.parameters ?? [];
    const explicit = parameters.filter(p => p.name !== '@self');
    if (args.length !== explicit.length) throw new DaviRuntimeError(`${fn.name} expects ${explicit.length} arguments, received ${args.length}`);
    const values = new Map(); let argIndex = 0;
    for (const p of parameters) values.set(key(p), typed(p.type, coerce(p.type, p.name === '@self' ? self : args[argIndex++])));
    for (const local of fn.locals ?? []) values.set(key(local), typed(local.type, defaultValue(local.type)));
    if (fn.kind === 'external' || fn.kind === 'method' || fn.kind === 'builtin') return this.native(fn, args, self);
    const frame = { fn, pc: 0, values, registers: new Map(), stack: [] };
    this.frames.push(frame); this.recordTrace({ kind: 'function', name: fn.name, args });
    try {
      const instructions = fn.instructions ?? [];
      while (frame.pc < instructions.length && frame.pc !== -2) {
        if (++this.steps > this.options.maxSteps) throw new DaviRuntimeError('Script instruction budget exceeded');
        if (!Number.isInteger(frame.pc) || frame.pc < 0) throw new DaviRuntimeError(`Invalid instruction target ${frame.pc}`);
        const instruction = instructions[frame.pc];
        let target = frame.pc + 1;
        switch (instruction.opcode) {
          case 0: target = instruction.target; break;
          case 1: {
            const condition = this.read(instruction.a, frame);
            if (Boolean(condition.value) === Boolean(instruction.whenTruthy)) target = instruction.target;
            break;
          }
          case 2: {
            const right = this.read(instruction.a, frame), left = this.read(instruction.b, frame);
            if (Boolean(daviBinary(instruction.operator, left, right).value) === Boolean(instruction.whenTruthy)) target = instruction.target;
            break;
          }
          case 3: this.write(instruction.destination, this.read(instruction.source, frame), frame); break;
          case 4: {
            const right = this.read(instruction.source, frame), left = this.read(instruction.rhs, frame);
            this.write(instruction.destination, daviBinary(instruction.operator, left, right), frame); break;
          }
          case 5: this.write(instruction.destination, daviUnary(instruction.operator, this.read(instruction.source, frame)), frame); break;
          case 6: {
            const source = this.read(instruction.source, frame), destination = this.read(instruction.destination, frame);
            this.write(instruction.destination, daviBinary(instruction.operator, destination, source), frame); break;
          }
          default: throw new DaviRuntimeError(`Unknown instruction opcode ${instruction.opcode}`);
        }
        if (target !== -2 && (!Number.isInteger(target) || target < 0 || target > instructions.length)) throw new DaviRuntimeError(`Invalid instruction target ${target}`);
        frame.pc = target;
      }
      if (frame.stack.length) throw new DaviRuntimeError(`Unbalanced argument stack (${frame.stack.length} values)`);
      return typeCode(fn.type) === 0 ? undefined : coerce(fn.type, frame.registers.get(0)?.value ?? defaultValue(fn.type));
    } catch (error) {
      error.functionName ??= fn.name; error.instruction ??= frame.pc; throw error;
    } finally { this.frames.pop(); }
  }
  read(expression, frame) {
    if (!expression) throw new DaviRuntimeError('Missing expression');
    if (expression.tag === 0) return typed(expression.type, coerce(expression.type, expression.value));
    if (expression.tag === 1) {
      const value = frame.stack.pop();
      if (!value) throw new DaviRuntimeError('Script argument stack underflow');
      if (value.type !== expression.type) throw new DaviRuntimeError(`Stack type mismatch: expected ${expression.type}, received ${value.type}`);
      return value;
    }
    if (expression.tag === 5) {
      const value = frame.registers.get(expression.index);
      if (!value) throw new DaviRuntimeError(`Uninitialized register R${expression.index}`);
      return value;
    }
    if (expression.tag === 2) {
      const record = this.resolveReference(expression.ref), id = key(record);
      if (record.kind === 'object') return typed(4, this.host.resolveObject(record.name));
      const value = frame.values.get(id) ?? this.globals.get(id);
      if (!value) throw new DaviRuntimeError(`Uninitialized variable ${record.name}`);
      return value;
    }
    if (expression.tag === 4) {
      const fn = this.resolveReference(expression.ref), parameters = fn.parameters ?? [], values = new Array(parameters.length);
      for (let i = parameters.length - 1; i >= 0; i--) values[i] = this.read({ tag: 1, type: typeCode(parameters[i].type) }, frame).value;
      const args = [], selfIndex = parameters.findIndex(p => p.name === '@self');
      for (let i = 0; i < values.length; i++) if (i !== selfIndex) args.push(values[i]);
      const self = selfIndex < 0 ? undefined : values[selfIndex];
      let value;
      if (fn.kind === 'event') { this.dispatch(self, fn.name, args); value = undefined; }
      else value = this.invoke(fn, args, self);
      return typed(fn.type, value);
    }
    throw new DaviRuntimeError(`Operand ${expression.tag} cannot be read`);
  }
  write(expression, value, frame) {
    if (expression.tag === 3) return;
    if (expression.tag === 1) {
      if (frame.stack.length >= this.options.maxStack) throw new DaviRuntimeError('Script argument stack limit exceeded');
      frame.stack.push(typed(expression.type, coerce(expression.type, value.value))); return;
    }
    if (expression.tag === 5) { frame.registers.set(expression.index, value); return; }
    if (expression.tag === 2) {
      const record = this.resolveReference(expression.ref), id = key(record), coerced = typed(record.type, coerce(record.type, value.value));
      if (frame.values.has(id)) { frame.values.set(id, coerced); return; }
      if (this.globals.has(id)) { this.globals.set(id, coerced); return; }
      throw new DaviRuntimeError(`Variable ${record.name} cannot be assigned`);
    }
    throw new DaviRuntimeError(`Operand ${expression.tag} cannot be assigned`);
  }
  native(fn, args, self) {
    if (fn.kind === 'method' && self == null) throw new DaviRuntimeError(`Null object calling ${fn.name}`);
    const entry = { kind: fn.kind, name: fn.name, args, ...(self !== undefined ? { object: objectName(self) } : {}) };
    this.recordTrace(entry);
    const value = fn.kind === 'method' ? this.host.callMethod(self, fn.name, args) : this.host.callNative(fn.name, args);
    if (value?.then) throw new DaviRuntimeError(`Native call ${fn.name} returned a Promise; script native calls must be synchronous`);
    return coerce(fn.type, value);
  }
  snapshot() {
    return { version: 1, script: this.program.sha256, initialized: this.initialized, globals: Object.fromEntries([...this.globals].map(([id, v]) => [id, { type: v.type, value: v.type === 4 ? objectName(v.value) ?? null : v.value }])) };
  }
  restore(snapshot) {
    if (this.frames.length) throw new DaviRuntimeError('Cannot restore while a script is executing');
    if (snapshot?.version !== 1 || snapshot.script !== this.program.sha256) throw new DaviRuntimeError('Save data belongs to a different script');
    const restored = new Map();
    for (const [id, current] of this.globals) {
      const value = snapshot.globals?.[id];
      if (!value || value.type !== current.type) throw new DaviRuntimeError(`Invalid saved variable ${id}`);
      restored.set(id, typed(value.type, coerce(value.type, value.type === 4 && value.value != null ? this.host.resolveObject(value.value) : value.value)));
    }
    this.globals = restored; this.initialized = Boolean(snapshot.initialized);
  }
}
