/*
 * FUN_00533f1c at 00533f1c
 * undefined __register FUN_00533f1c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00533f1c-00533f62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00533f1c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_1[0xae] != '\0') {
    FUN_0043262c((int *)param_1[0xaf],0,param_3);
    FUN_004fe610(param_1);
    (**(code **)(*param_1 + 0x74))();
  }
  FUN_004fe848(param_1);
  return;
}

