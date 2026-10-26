/*
 * FUN_10005b70 at 10005b70
 * undefined FUN_10005b70(void)
 * Address ranges: 10005b70-10005c11;10005c35-10005c47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005b70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10034188;
  puStack_10 = &LAB_10027cac;
  local_14 = ExceptionList;
  DAT_1014e350 = 0;
  ExceptionList = &local_14;
  (*DAT_1014e35c)(s____BSP_Compile_Version___i_10036dc4,0xf);
  (*DAT_1014e35c)(s____Build_Date_Time__Dec_22_1999__10036d98);
  local_8 = 0;
  iVar1 = FUN_100026a0(param_1,param_2);
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return 1;
  }
  if (DAT_1014e350 != 0) {
    ExceptionList = local_14;
    return 2;
  }
  ExceptionList = local_14;
  return 0;
}

