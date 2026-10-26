/*
 * FUN_004b6e60 at 004b6e60
 * undefined __register FUN_004b6e60(void)
 * Address ranges: 004b6e60-004b6e70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b6e60(void)

{
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined4 in_FPUDataPointer;
  undefined4 in_FPUInstructionPointer;
  
  DAT_005744c8 = in_FPUControlWord;
  DAT_005744cc = in_FPUStatusWord;
  DAT_005744d0 = in_FPUTagWord;
  DAT_005744dc = in_FPUDataPointer;
  DAT_005744d4 = in_FPUInstructionPointer;
  DAT_005744da = in_FPULastInstructionOpcode;
  return;
}

