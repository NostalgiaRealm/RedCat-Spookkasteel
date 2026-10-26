/*
 * FUN_004ad918 at 004ad918
 * undefined __register FUN_004ad918(int param_1, int param_2)
 * Address ranges: 004ad918-004ad95d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ad918(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004123e0(*(int *)(param_1 + 0x48),param_2);
  if (iVar1 != -1) {
    FUN_00412224(*(int **)(param_1 + 0x48),iVar1);
    FUN_00433700(param_2,0x5404,0,0);
  }
  return;
}

