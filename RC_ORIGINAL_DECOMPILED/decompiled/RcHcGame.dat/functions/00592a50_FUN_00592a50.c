/*
 * FUN_00592a50 at 00592a50
 * undefined FUN_00592a50(void)
 * Address ranges: 00592a50-00592b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_00592a50(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006438d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  local_4 = 0;
  FUN_0060b1db(param_1 + 0x69,0x10,0x14,&LAB_00592b30,FUN_00542570);
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xbe) = local_11;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)((int)param_1 + 0x309) = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *param_1 = &PTR_FUN_0064ff64;
  puVar2 = param_1 + 5;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

