/*
 * FUN_005f2b30 at 005f2b30
 * undefined FUN_005f2b30(void)
 * Address ranges: 005f2b30-005f2bfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005f2b30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647d03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 3) = (undefined1)param_5;
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar3 = s__none_006b1160;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s__none_006b1160,~uVar2 - 1);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0x3a;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x11) = (undefined1)param_5;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = &PTR_FUN_00651004;
  local_4 = 1;
  *param_1 = &PTR_FUN_00650fac;
  FUN_005e9b00(param_2,param_3,param_4,param_5);
  FUN_005f9100(param_2);
  ExceptionList = local_c;
  return param_1;
}

