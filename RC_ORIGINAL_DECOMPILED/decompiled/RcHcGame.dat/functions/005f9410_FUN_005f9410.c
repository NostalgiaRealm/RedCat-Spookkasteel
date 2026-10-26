/*
 * FUN_005f9410 at 005f9410
 * undefined FUN_005f9410(void)
 * Address ranges: 005f9410-005f94c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005f9410(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00648843;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = (undefined1)param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00651004;
  uStack_3 = 0;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != *(int *)(param_2 + 0xc)) {
    do {
      local_1c = &PTR_LAB_00651388;
      local_18 = *(undefined4 *)(iVar1 + 4);
      local_14 = *(undefined4 *)(iVar1 + 8);
      local_10 = *(undefined1 *)(iVar1 + 0xc);
      local_4 = 1;
      FUN_005f95a0(param_1[3],1,&local_1c);
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != *(int *)(param_2 + 0xc));
  }
  ExceptionList = local_c;
  return param_1;
}

