/*
 * FUN_004175d4 at 004175d4
 * undefined __register FUN_004175d4(int param_1, int param_2)
 * Address ranges: 004175d4-0041760a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004175d4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004147b0(*(int **)(param_1 + 4));
  if ((iVar1 <= param_2) && (param_2 <= *(int *)(param_1 + 0x10) + iVar1)) {
    *(int *)(param_1 + 0x10) = param_2 - iVar1;
    return;
  }
  FUN_004176f8(param_1);
  FUN_004147c0(*(int **)(param_1 + 4),param_2);
  return;
}

