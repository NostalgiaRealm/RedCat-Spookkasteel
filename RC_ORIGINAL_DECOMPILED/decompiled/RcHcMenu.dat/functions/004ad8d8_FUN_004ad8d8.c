/*
 * FUN_004ad8d8 at 004ad8d8
 * undefined __register FUN_004ad8d8(int param_1, int param_2)
 * Address ranges: 004ad8d8-004ad917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ad8d8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004123e0(*(int *)(param_1 + 0x48),param_2);
  if (iVar1 == -1) {
    FUN_004121d8(*(int **)(param_1 + 0x48),param_2);
    FUN_00433700(param_2,0x5401,0,0);
  }
  return;
}

