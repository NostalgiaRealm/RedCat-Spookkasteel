/*
 * FUN_0044d180 at 0044d180
 * undefined FUN_0044d180(void)
 * Address ranges: 0044d180-0044d253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_0044d180(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined1 **param_10)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00625978;
  local_c = ExceptionList;
  puStack_24 = &param_10;
  uStack_28 = param_10;
  local_4 = 0;
  puStack_48 = (undefined1 *)&local_40;
  local_34 = param_7;
  local_30 = param_8;
  local_2c = param_9;
  local_40 = param_4;
  local_3c = param_5;
  uStack_44 = param_3;
  param_10 = &puStack_48;
  local_38 = param_6;
  ExceptionList = &local_c;
  FUN_00449760(&param_2);
  puVar1 = (undefined4 *)FUN_0044d260(local_1c);
  local_4 = 0xffffffff;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  if ((param_2 != 0) &&
     (iVar2 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar2, iVar2 == 0)) {
    puStack_24 = (undefined4 *)0x0;
    uStack_28 = 0x44d242;
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return param_1;
}

