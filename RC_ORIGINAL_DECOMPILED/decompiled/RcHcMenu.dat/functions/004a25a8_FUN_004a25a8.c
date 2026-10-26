/*
 * FUN_004a25a8 at 004a25a8
 * undefined __register FUN_004a25a8(int param_1, int param_2)
 * Address ranges: 004a25a8-004a25ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a25a8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004123e0(*(int *)(param_1 + 0x4c),param_2);
  if (iVar1 != -1) {
    FUN_00412224(*(int **)(param_1 + 0x4c),iVar1);
    FUN_00433700(param_2,0x4402,0,0);
  }
  return;
}

