/*
 * FUN_004a3f98 at 004a3f98
 * undefined __register FUN_004a3f98(int param_1, int * param_2)
 * Address ranges: 004a3f98-004a3fbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a3f98(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))();
  (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),uVar1);
  return;
}

