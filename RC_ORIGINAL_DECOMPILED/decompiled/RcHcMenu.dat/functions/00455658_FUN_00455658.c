/*
 * FUN_00455658 at 00455658
 * undefined __register FUN_00455658(int param_1, int param_2)
 * Address ranges: 00455658-00455665
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455658(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = param_2;
    FUN_004555bc(param_1);
  }
  return;
}

