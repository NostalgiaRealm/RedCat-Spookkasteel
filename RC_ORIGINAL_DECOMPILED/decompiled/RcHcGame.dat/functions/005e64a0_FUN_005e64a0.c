/*
 * FUN_005e64a0 at 005e64a0
 * undefined FUN_005e64a0(void)
 * Address ranges: 005e64a0-005e654e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005e64a0(int *param_1,undefined4 param_2,char param_3,int param_4)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006468aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_4 != 0) {
    ExceptionList = &local_c;
    *param_1 = (int)&DAT_00650a3c;
    param_1[0xb] = 0;
    param_1[2] = (int)&PTR_FUN_00651634;
    local_4 = 0;
  }
  param_1[1] = 0;
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &PTR_FUN_006515f4;
  iVar1 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar1 + 0x28 + (int)param_1) = param_2;
  *(undefined4 *)((int)param_1 + iVar1 + 0x2c) = 0;
  *(undefined1 *)((int)param_1 + iVar1 + 0x30) = 0x20;
  FUN_005feaf9();
  if (*(int *)((int)param_1 + iVar1 + 0x28) == 0) {
    FUN_005fe7e4(*(uint *)((int)param_1 + iVar1 + 4) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_005feac4();
  }
  ExceptionList = local_c;
  return param_1;
}

