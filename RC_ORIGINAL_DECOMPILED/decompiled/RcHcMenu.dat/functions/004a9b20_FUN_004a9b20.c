/*
 * FUN_004a9b20 at 004a9b20
 * undefined __register FUN_004a9b20(int param_1, int param_2)
 * Address ranges: 004a9b20-004a9b3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9b20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0042362c(*(int *)(param_1 + 0x24),param_2);
  if (iVar1 == -1) {
    FUN_004235d8(*(int **)(param_1 + 0x24),param_2);
  }
  return;
}

