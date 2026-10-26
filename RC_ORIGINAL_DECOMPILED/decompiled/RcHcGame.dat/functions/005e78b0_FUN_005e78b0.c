/*
 * FUN_005e78b0 at 005e78b0
 * undefined FUN_005e78b0(void)
 * Address ranges: 005e78b0-005e79ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005e78b0(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined1 local_5c [80];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646a30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_4;
  *param_1 = &PTR_FUN_006515b4;
  local_4 = 1;
  FUN_005ff4d6(&DAT_006a1624);
  puVar1 = (undefined4 *)FUN_00600d9a(local_5c);
  param_1[2] = *puVar1;
  param_1[3] = puVar1[1];
  param_1[4] = puVar1[2];
  param_1[5] = puVar1[3];
  if (DAT_0070fc08 == 0) {
    DAT_0070fc08 = param_1[4];
    FUN_0060a57b(&LAB_005e79b0);
    param_1[5] = 0;
  }
  FUN_005ff58f();
  if (param_1[5] != 0) {
    FUN_0060b25d(param_1[4]);
    param_1[5] = 0;
  }
  if (param_2 == 0) {
    param_1[4] = DAT_0070fc08;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[4] = param_2;
  param_1[5] = param_3 & 0xff;
  ExceptionList = local_c;
  return param_1;
}

