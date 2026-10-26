/*
 * FUN_0061336a at 0061336a
 * undefined FUN_0061336a(void)
 * Address ranges: 0061336a-006133a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061336a(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_c [8];
  
  if (*DAT_00710054 == '@') {
    DAT_00710054 = DAT_00710054 + 1;
    uVar1 = FUN_00614e3c(param_2);
  }
  else {
    uVar1 = FUN_006133a8(local_c,param_2);
  }
  FUN_00614df0(uVar1);
  return param_1;
}

