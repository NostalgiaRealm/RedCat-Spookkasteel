/*
 * FUN_004739fc at 004739fc
 * undefined __register FUN_004739fc(int * param_1, int param_2)
 * Address ranges: 004739fc-00473a3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004739fc(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00473b1c(param_1);
    (**(code **)(*param_1 + 0xfc))();
    (**(code **)(*param_1 + 0x1d0))(param_1,param_2);
    (**(code **)(*param_1 + 0x244))(param_1,3);
    (**(code **)(*param_1 + 0xd8))();
  }
  return;
}

