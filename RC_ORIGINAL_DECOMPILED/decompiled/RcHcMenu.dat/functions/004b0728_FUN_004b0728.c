/*
 * FUN_004b0728 at 004b0728
 * undefined __register FUN_004b0728(int param_1)
 * Address ranges: 004b0728-004b07e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b0728(int param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = (undefined4 *)0x0;
  puStack_1c = (undefined1 *)0x4b073f;
  local_8 = param_1;
  FUN_004041e4(param_1);
  puStack_20 = &LAB_004b080c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = 0;
  uStack_28 = *(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x110);
  pcStack_2c = "Settings\\";
  pcStack_30 = "agent.ini";
  puStack_34 = (undefined1 *)0x4b0776;
  puStack_1c = &stack0xfffffffc;
  FUN_004040f0((int *)&local_14,3);
  puStack_34 = (undefined1 *)0x4b0785;
  local_10 = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_14);
  puStack_38 = &LAB_004b07e7;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  cVar1 = FUN_0045cc88(local_10,local_8,"ContextId");
  if (cVar1 == '\0') {
    (**(code **)(*local_10 + 0xc))(local_10,local_8,"ContextId",0);
  }
  uVar2 = 0;
  local_c = (**(code **)(*local_10 + 8))(local_10,local_8,"ContextId");
  *in_FS_OFFSET = uVar2;
  puStack_38 = &LAB_004b07ee;
  uStack_3c = 0x4b07e6;
  FUN_00403094(local_10);
  return;
}

