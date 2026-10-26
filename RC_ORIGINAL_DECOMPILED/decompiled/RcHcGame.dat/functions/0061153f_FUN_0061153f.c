/*
 * FUN_0061153f at 0061153f
 * undefined FUN_0061153f(void)
 * Address ranges: 0061153f-00611576
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061153f(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_c [8];
  
  if (*DAT_00710054 == '?') {
    DAT_00710054 = DAT_00710054 + 1;
    uVar1 = FUN_00611630(local_c);
  }
  else {
    uVar1 = FUN_00611577(local_c);
  }
  FUN_00614df0(uVar1);
  return param_1;
}

