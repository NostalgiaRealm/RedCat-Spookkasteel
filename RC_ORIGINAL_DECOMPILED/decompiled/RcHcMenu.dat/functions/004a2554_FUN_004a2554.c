/*
 * FUN_004a2554 at 004a2554
 * undefined __register FUN_004a2554(int param_1, int param_2)
 * Address ranges: 004a2554-004a25a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a2554(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004123e0(*(int *)(param_1 + 0x4c),param_2);
  if (iVar1 == -1) {
    FUN_004121d8(*(int **)(param_1 + 0x4c),param_2);
    FUN_00433700(param_2,0x4400,0,0);
    FUN_00433700(param_2,0x4401,0,0);
  }
  return;
}

