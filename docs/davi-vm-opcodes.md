# Davi-Script 27 execution semantics

Executable address references are version-specific; see [reference build notes](native-reference-builds.md) before relying on native addresses.

The portable interpreter executes the sequential IR emitted by `tools/import_scripts.py`. Instruction order, jump destinations, variable identities and event ownership come from the original `.dso` files. They are not reconstructed from nearby string literals. The original game executable was inspected as data with `objdump`; no original native machine code is run by this implementation.

## Evidence and encoding

Addresses below are virtual addresses in the supplied x86 PE `RcHcGame.dat`, image base `0x00400000`, SHA-256 `d2f651c80ccf9acc17463365e3f6f8ff2b6052cd77b7b93c59a3df8be7f4bd74`.

- `0x005f0800`: instruction collection reader; signed little-endian 16-bit count, followed by instruction records.
- `0x005f7030`: instruction factory; peeks a byte to select one of seven readers. Each selected reader consumes its opcode once.
- `0x005f6330`: operand factory; six operand variants.
- `0x005f1330`: execution loop increments the program counter before executing the instruction. Jumps replace it with an absolute zero-based instruction index; `-2` returns.
- `0x005f02c0`, `0x005f7810`, `0x005f7ad0`: unconditional, truth-value and comparison branches respectively.
- `0x005f6c10`, `0x005f8680`, `0x005fbf30`, `0x005fcbb0`: move, binary operation, unary/cast, and compound assignment evaluators.
- `0x005ec3a0`, `0x005ec740`: typed stack push and pop. Integers/strings/object pointers occupy four native bytes; doubles occupy eight. The portable evaluator stores tagged JS values instead of machine pointers.
- `0x005f6670`, `0x005f67c0`: temporary-register read/write. Register 0 is the return value, copied out by `0x005efe50`.

All integers are little-endian. The opcode and type/operator fields are single bytes. Symbol references are the scoped reference chains resolved by the importer.

| Opcode | Serialized operands | Evaluation |
| --- | --- | --- |
| 0 | i32 target | Jump; `-2` returns |
| 1 | i32 target, u8 polarity, a | Jump when truth of a matches polarity |
| 2 | i32 target, u8 polarity, a, b, u8 operator | Evaluate a then b; compare `b operator a`; jump when result matches polarity |
| 3 | destination, source | Evaluate source, assign destination |
| 4 | destination, source, u8 operator, rhs | Evaluate source then rhs; assign `rhs operator source` |
| 5 | destination, source, u8 operator | Assign unary/cast result |
| 6 | destination, source, u8 operator | Evaluate source, then read destination; assign `destination operator source` |

The reversed serialized binary operands matter for subtraction, division and the tower mirror count comparison. They also preserve evaluation order when both operands pop the stack or call native functions.

| Operand tag | Additional bytes | Meaning |
| --- | --- | --- |
| 0 | u8 type, typed literal | Constant: type 1 f64, type 2 i32, type 3 u16 byte-length plus bytes, type 4 i32 |
| 1 | u8 type | Reading pops a typed argument; assigning pushes a typed value |
| 2 | symbol reference | Object binding, parameter or variable |
| 3 | none | Sink: discard the assigned expression result |
| 4 | callable reference, u8 flag | Call using previously pushed formal arguments, including implicit `@self` |
| 5 | i16 index | Temporary register |

Every actual campaign call has flag 1. Native methods use the explicit `@self` argument; external functions and script functions omit it. Formal declarations preserve argument order. All five objects use only instructions 0, 2, 3, 4, 6; they use literals, the typed stack, references, calls and sink operands. Their operators are equality, AND, OR, addition and less-than. No campaign code requires a platform ABI or executing generated code.

## Operators

Native binary dispatcher `0x005f8740` and its disassembler `0x005f7f50` establish: 1 addition, 2 multiplication, 3 subtraction, 4 division, 5 >=, 6 <=, 7 >, 8 <, 9 equality, 10 inequality, 11 logical OR, 12 logical AND, 14 remainder, 15 integer division, 16 exponentiation. Integer arithmetic uses signed 32-bit results and truncating division. Logical and comparison results are integer 0/1. The portable interpreter rejects unsupported types/operators and division by zero rather than silently continuing.

Unary/cast dispatcher `0x005fc230` establishes negation, logical NOT, numeric/string casts and several math operators. Implemented mappings are recorded directly in `daviUnary`. Unmapped operators fail explicitly. These additional unary/math operations are not present in the supplied campaign, and their full language-wide edge-case parity is not claimed. In particular, JS floating-point formatting and native x87 intermediate precision can differ outside the actual campaign cases.

## Runtime boundaries and verification

`DaviVM` is platform-neutral JavaScript. `callNative(name,args)`, `callMethod(object,name,args)` and `resolveObject(name)` are its host boundary. `dispatch(object,event,args)` runs only the handlers bound to that object and event in the DSO. Native calls are synchronous; motions and cutscene timing are scheduled by the game host, which calls back into the VM when a motion marker occurs.

Each invocation has separate parameters, locals, registers and argument stack. Global variables persist between callbacks. Snapshots include a script SHA-256 identity, initialization state and typed globals; restores validate identity and types before replacing any state. Step, stack and call-depth limits fail explicitly. Diagnostic traces record function/event/native boundaries, and exceptions include the source/function/instruction.

`node --test tests/davi-vm.test.mjs` validates exact original cutscene call order, both door reset routines, the five-pillar puzzle conjunction, the last-mirror gate and persistent counter, witch-death beam timelines, frozen enemies and volume arguments. It also invokes all 444 original event handlers and every script function, exercises over 300 literal motion-event inputs, and tests invalid instructions, missing native implementations, runaway jumps and stack underflow. These are interpreter and host-call validations, not a claim that the reconstructed renderer, collision or boss AI matches the original game in every detail.
