/*
 * FUN_00419120 at 00419120
 * undefined __register FUN_00419120(int * param_1, int param_2)
 * Address ranges: 00419120-00419155
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00419120(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,param_2,*(undefined4 *)(param_2 + 8),0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,1);
  FUN_004195e4(param_2,'\0');
  FUN_004190a0((int)param_1,param_2);
  return;
}

