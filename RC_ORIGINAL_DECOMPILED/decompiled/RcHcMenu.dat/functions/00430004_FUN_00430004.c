/*
 * FUN_00430004 at 00430004
 * undefined __register FUN_00430004(int * param_1, undefined4 param_2, undefined4 param_3, char param_4, undefined4 param_5)
 * Address ranges: 00430004-00430035
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00430004(int *param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 param_5
                 )

{
  if (param_4 == '\0') {
    FUN_00403270((int *)param_1[0xe],param_2,param_3);
    param_2 = 0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_5);
  return;
}

