/*
 * FUN_004b6e74 at 004b6e74
 * undefined __register FUN_004b6e74(undefined2 * param_1)
 * Address ranges: 004b6e74-004b6e76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b6e74(undefined2 *param_1)

{
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined4 in_FPUDataPointer;
  undefined4 in_FPUInstructionPointer;
  
  *param_1 = in_FPUControlWord;
  param_1[2] = in_FPUStatusWord;
  param_1[4] = in_FPUTagWord;
  *(undefined4 *)(param_1 + 10) = in_FPUDataPointer;
  *(undefined4 *)(param_1 + 6) = in_FPUInstructionPointer;
  param_1[9] = in_FPULastInstructionOpcode;
  return;
}

