/*
 * FUN_100070a0 at 100070a0
 * undefined FUN_100070a0(void)
 * Address ranges: 100070a0-10007174
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100070a0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_10 = 0;
  iVar1 = FUN_10014700(0,&local_14,4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_1000b360(iVar1);
  if (iVar1 == 0) {
    FUN_10014990();
    (*DAT_1014e358)(s_SaveGFXEntData__SaveEntityData_f_10037558);
    return 0;
  }
  iVar1 = FUN_10014860(8);
  if (iVar1 == 0) {
    FUN_10014990();
    return 0;
  }
  local_4 = local_10;
  local_c = 0x10;
  local_8 = 1;
  iVar1 = FUN_10004d50(&local_c,local_14,param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_SaveEntData__There_was_an_error_s_10037520);
    return 0;
  }
  FUN_10014990();
  return 1;
}

