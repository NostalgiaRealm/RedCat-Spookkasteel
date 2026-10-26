/*
 * FUN_005f3980 at 005f3980
 * undefined FUN_005f3980(void)
 * Address ranges: 005f3980-005f3a64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005f3980(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647ea3;
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
  param_1[1] = 0x38;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0xfff0bdc0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xe) = (undefined1)param_5;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = &PTR_FUN_00651004;
  local_4 = 1;
  *param_1 = &PTR_FUN_006510c0;
  FUN_005e9b00(param_2,param_3,param_4,param_5);
  FUN_005e6ff0(param_2,param_1 + 0xb);
  FUN_005f9100(param_2);
  ExceptionList = local_c;
  return param_1;
}

