/*
 * FUN_005ac8b0 at 005ac8b0
 * undefined FUN_005ac8b0(void)
 * Address ranges: 005ac8b0-005ac9c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005ac8b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_111;
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645cd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  *(undefined1 *)(param_1 + 5) = local_111;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 9) = local_111;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0xd) = local_111;
  FUN_004040a0();
  *(undefined1 *)(param_1 + 0x14) = local_111;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *param_1 = &PTR_FUN_0065010c;
  FUN_005ac5c0(param_2,param_3,param_5);
  puVar2 = local_10c;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_0069081c,(double)param_4);
  FUN_005acdb0();
  FUN_005ad000();
  FUN_005ac5a0();
  ExceptionList = local_c;
  return param_1;
}

