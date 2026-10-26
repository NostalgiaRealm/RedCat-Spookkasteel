/*
 * FUN_005bb950 at 005bb950
 * undefined FUN_005bb950(void)
 * Address ranges: 005bb950-005bb995
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bb950(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005bc4b0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005bc3a0(param_1,1);
  *(undefined4 *)(param_1 + 0x3904c) = 1;
  FUN_005bb6b0(param_1);
  FUN_005bb660(param_1);
  return 1;
}

