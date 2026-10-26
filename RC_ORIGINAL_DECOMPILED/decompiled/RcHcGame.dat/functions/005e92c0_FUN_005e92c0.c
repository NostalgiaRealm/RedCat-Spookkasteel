/*
 * FUN_005e92c0 at 005e92c0
 * undefined FUN_005e92c0(void)
 * Address ranges: 005e92c0-005e93e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e92c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_20;
  void *local_1c;
  undefined4 uStack_14;
  undefined *puStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646b88;
  puStack_c = ExceptionList;
  local_20 = *param_2;
  ExceptionList = &puStack_c;
  FUN_005e6aa0(param_2 + 1);
  local_4 = 0;
  FUN_005eb1c0();
  DAT_0070fae4 = *puVar2;
  if (puVar2[2] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(puVar2[3] - puVar2[2]) >> 2;
  }
  FUN_005e4140(s_LinkCpp__linktable_contains__d_i_006b0fd8,iVar4);
  puVar3 = DAT_0070fb14;
  puVar2 = (undefined4 *)*DAT_0070fb14;
  while (puVar2 != puVar3) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005e9a70(&param_2,puVar2);
    puVar2 = puVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x44) + 4))(&local_20);
  (**(code **)(*(int *)(param_1 + 0x6c) + 4))(&stack0xffffffdc);
  (**(code **)(*(int *)(param_1 + 0x30) + 4))(&stack0xffffffd8);
  (**(code **)(*(int *)(param_1 + 0x80) + 4))(&stack0xffffffd4);
  FUN_005e4140(s__d_link_errors_006b0fc8,DAT_0070fb18);
  if (DAT_0070fb18 == 0) {
    uStack_14 = 0xffffffff;
    FUN_005e6a30();
    ExceptionList = local_1c;
    return;
  }
  puStack_c = &DAT_0070fb10;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&puStack_c,&DAT_00686360);
}

