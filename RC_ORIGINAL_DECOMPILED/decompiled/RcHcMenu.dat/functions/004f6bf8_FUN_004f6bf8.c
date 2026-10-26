/*
 * FUN_004f6bf8 at 004f6bf8
 * undefined __register FUN_004f6bf8(int param_1, int param_2)
 * Address ranges: 004f6bf8-004f6c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6bf8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x20)) {
    *(int *)(param_1 + 0x20) = param_2;
    FUN_00412c80(param_1,'\0');
  }
  return;
}

