# Davi-Script 27 binary grammar and portable IR

`tools/import_scripts.py` decodes every byte of the five original RedCat
Spookkasteel `.dso` files. It preserves executable instructions, typed literals,
function parameters, locals, object bindings and per-object event handlers. It
resolves every symbol path and checks every branch destination. Generated JSON is
in `data/davi/`; it requires no x86 code, Windows DLL, Direct3D or native pointer.

This supersedes the parser-status statements in the earlier
[`script-vm-investigation.md`](script-vm-investigation.md). That earlier report
remains useful for executable identity and the initial evidence inventory.
Decoding these programs does not by itself demonstrate full campaign parity:
execution also depends on the portable VM and game-object implementations.

## Reproduce

```sh
python3 tools/import_scripts.py --source "/path/to/RedCat Spookkasteel" --output data/davi
python3 -m unittest discover -s tests -p test_import_scripts.py -v
```

The importer uses the Python standard library and reads originals without
executing or modifying them. Runtime JSON can be loaded by the same JavaScript VM
on Linux, Windows, macOS and Android. Files are derived from the owner's installed
game; the importer does not fetch or provide original game assets.

## Verification against supplied files

| Level | Bytes consumed | Records | Script functions | Instance handlers | Instructions | Objects |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| lvl00a | 23,962 | 612 | 18 | 62 | 847 | 133 |
| lvl01a | 25,067 | 830 | 11 | 64 | 614 | 374 |
| lvl02a | 35,871 | 978 | 17 | 113 | 1,251 | 369 |
| lvl03a | 51,879 | 1,484 | 16 | 170 | 1,709 | 737 |
| lvl04a | 23,608 | 683 | 14 | 35 | 713 | 283 |
| Total | 160,387 | 4,587 | 76 | 444 | 5,134 | 1,896 |

Every file exposes the shipped 53 method, 26 event and 32 external-function
signatures. Tests compare their names and explicit parameter counts with the
shipped API inventory. The tests check exact program counts, linked event owners,
typed argument offsets, preserved potion-gate branches, corrupt references,
invalid jumps, unknown instruction tags, truncation and trailing bytes. When the
original installation is available, the tests regenerate and compare the full IR
and reject truncations at record/instruction boundaries in every level.

No scanning for probable names or opcodes is used. Unknown record kinds are
errors. The supported record subset covers all five supplied files; other
Davi-Script titles or versions can contain additional record kinds and are not
claimed compatible.

## Native evidence

The following addresses refer to virtual addresses in the supplied PE32
`RcHcGame.dat`, image base `0x00400000`. The evidence was obtained by static
inspection; the executable was not run.

| Address | Recovered operation |
| --- | --- |
| `0x005eb970`, comparison `0x005eb9f3` | Object loader; requires version 27 |
| `0x005ebb40` through `0x005ebb7f` | Five root collection reads, in serialized order |
| `0x005ed1f0` | Read a uint32-counted symbol collection |
| `0x005e9aa0` | Dispatch symbol constructors by one-byte tag |
| `0x005e98f0` | Common symbol reader: tag, name, type |
| `0x005eec10` | Type reader: one-byte primitive code followed by symbol reference |
| `0x005f5b40` | Read reference depth and tag/index steps |
| `0x005f5bf0` | Resolve steps from outermost to innermost scope |
| `0x005eee30` | Class: common symbol followed by variables and members |
| `0x005ef120` | Function signature: common symbol followed by parameters |
| `0x005efc90` | Script function: signature, locals and instructions |
| `0x005ed3e0` | Event declaration additionally reads handler collection |
| `0x005ee4b0` | Instance handler additionally reads nested handler collection and owner reference |
| `0x005f42b0`, `0x005f31a0` | Parameter/local variable signed stack offset |
| `0x005f2e70` | Named object binding: common symbol only |
| `0x005f0800` | Instruction collection uses signed int16 count |
| `0x005f7030` | Instruction factory, tags 0 through 6 |
| `0x005f6330` | Expression factory, tags 0 through 5 |

## Serialization

All multibyte numbers are little endian. Names and string literals are a uint16
byte length followed by those bytes; no terminator is stored. The importer decodes
strings as Windows-1252. Doubles are IEEE-754 binary64.

A file is:

```text
uint32 version = 27
uint32 compilation Unix timestamp
collection classes
collection globals
collection constants
collection objects
collection functions
end of file
```

A symbol collection is `uint32 count`, followed by `count` records. Function
collections include builtins, external functions and script functions in one
shared index space. Class member collections similarly include both methods and
events. The supplied files have empty root globals and constants collections.
Constants used in executable code are stored in literal expressions.

Every record begins:

```text
uint8 tag
string name
uint8 typeCode
reference typeClass
```

Type codes are 0 void, 1 double, 2 int, 3 string and 4 object. Primitive types have
a null `typeClass`; object types reference their class declaration. The remaining
fields are:

| Tag | Kind | Fields after common symbol |
| --- | --- | --- |
| `0x32` | Base variable | None |
| `0x35` | Parameter | int32 stack offset |
| `0x36` | Named object | None |
| `0x37` | Local | int32 stack offset |
| `0x3b` | Script function | parameters collection; locals collection; instruction collection |
| `0x3c` | Native object method | parameters collection |
| `0x3d` | Event declaration | parameters; locals; instructions; handlers collection |
| `0x3e` | Instance handler | parameters; locals; instructions; handlers collection; owner reference |
| `0x3f` | Runtime builtin | parameters collection |
| `0x41` | Native external | parameters collection |
| `0x42` | Class | variables collection; members collection |

Class events in these files contain empty instruction collections and one or more
instance handlers when implemented. The handler owner identifies its original
named level object. Event declarations and methods include `@self` as the last
parameter. Parameter slots are native byte offsets: a double occupies eight bytes;
int, string and object occupy four. For example `AddDefaultCommand` offsets are
`-16`, `-12`, `-8`, `-4`, including `@self`.

## References and IDs

A reference is a depth byte. `0xff` means null. Otherwise the importer accepts
one through five `(uint8 tag, uint16 index)` pairs. These pairs are encoded from
innermost symbol to outermost scope. Indices address the original containing
collection, including other record kinds in that collection.

For example:

```text
02 3c 09 00 42 00 00
```

references member 9 in class 0: `SwitchOn`. Its stable JSON ID is
`42:0/3c:9`. A parameter of global script function 45 is `3b:45/35:0`.
An event handler is `42:0/3d:53/3e:0`. IDs derive from the original symbol table,
not names guessed from strings.

Each JSON reference retains its serialized `path` and adds `id`, `name` and `kind`.
Each symbol has an `id`, `tag`, `kind`, `index`, `name`, `type`, `offset` and
`endOffset`, plus its record-specific fields. A handler has an `owner` reference.
Resolution requires the complete encoded tag/index path to exist; stale or
out-of-range references are fatal.

## Instruction and expression IR

An instruction collection is `int16 count` followed by that many instructions.
Instructions retain source-file offsets. Jump destinations are zero-based
instruction indices. `-2` is the native function return sentinel.

| Opcode | Serialized operands | IR fields / behavior |
| --- | --- | --- |
| 0 | int32 target | `target`; jump or return |
| 1 | int32 target; uint8 condition; expression | `target`, `whenTruthy`, `a`; conditional jump |
| 2 | target; condition; expression A; expression B; uint8 operator | `a`, `b`, `operator`; compare **B operator A** |
| 3 | destination expression; source expression | `destination`, `source`; move value |
| 4 | destination; source; operator; rhs expression | `destination`, `source`, `operator`, `rhs`; destination = **rhs operator source** |
| 5 | destination; source; uint8 unary/cast operator | `destination`, `source`, `operator` |
| 6 | destination; source; uint8 binary operator | `destination`, `source`, `operator`; compound assignment |

Expression tags and operands:

| Tag | Serialized operands | JSON fields / role |
| --- | --- | --- |
| 0 | uint8 type; typed value | `type`, `value`; literal |
| 1 | uint8 type | `type`; typed operand-stack push/pop |
| 2 | reference | `ref`; variable/object reference |
| 3 | none | discarded result |
| 4 | reference; uint8 call flag | `ref`, `callFlag`; function/method call |
| 5 | int16 register index | `index`; temporary register |

Literal int/object values use int32, doubles use binary64, and strings use the
length-prefixed string format. Literal void has no payload. Register indices must
be nonnegative. Calls consume argument values previously pushed by move
instructions; the native byte offsets and signature identify the argument order.

The supplied campaign uses instruction opcodes 0, 2, 3, 4 and 6, with 5,134 total
instructions. Instructions 1 and 5 are decoded from the native factory grammar
but do not occur in these five campaign files. Decoding preserves serialized
operand order; the VM must implement the native evaluation order described above.
