/*
 * FUN_00402810 at 00402810
 * undefined FUN_00402810(void)
 * Address ranges: 00402810-00402892
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00402810(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_18 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061fa48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040a720(param_2);
  param_1[0xb] = param_2;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 1;
  local_4 = 0;
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x48))(local_18);
  param_1[0x10] = *puVar2;
  param_1[0x11] = puVar2[1];
  uVar1 = puVar2[2];
  *param_1 = &PTR_FUN_0064a394;
  param_1[0x12] = uVar1;
  ExceptionList = pvStack_10;
  return param_1;
}

