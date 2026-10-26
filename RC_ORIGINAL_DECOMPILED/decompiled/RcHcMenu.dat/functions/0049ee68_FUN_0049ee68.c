/*
 * FUN_0049ee68 at 0049ee68
 * undefined __register FUN_0049ee68(int param_1, int * param_2)
 * Address ranges: 0049ee68-0049eed1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049ee68(int param_1,int *param_2)

{
  FUN_00414804(param_2,param_1 + 4,4);
  FUN_00414804(param_2,param_1 + 8,4);
  FUN_00414804(param_2,param_1 + 0xc,4);
  FUN_00414804(param_2,param_1 + 0x10,4);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),param_2);
  return;
}

