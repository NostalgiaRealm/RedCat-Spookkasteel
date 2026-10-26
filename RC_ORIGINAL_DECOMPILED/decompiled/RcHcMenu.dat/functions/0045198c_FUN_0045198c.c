/*
 * FUN_0045198c at 0045198c
 * undefined __register FUN_0045198c(int param_1)
 * Address ranges: 0045198c-00451a3f;00451a55-00451a7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045198c(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_14;
  uint *local_10;
  char local_9;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_28 = &LAB_00451a7b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x4519b6;
  local_8 = param_1;
  piVar1 = FUN_00451908(param_1);
  if ((*(char *)(local_8 + 0x78) != '\0') && (*(int *)(local_8 + 0x3c) == 0)) {
    puStack_30 = (undefined1 *)0x4519d2;
    FUN_00451e78(local_8);
  }
  puStack_30 = (undefined1 *)0x4519dc;
  FUN_0044fc6c((int)piVar1,(int *)&local_14);
  puStack_30 = (undefined1 *)0x4519e7;
  FUN_0042fb70(local_14,(int *)&local_10);
  puStack_30 = (undefined1 *)0x4519f4;
  FUN_00451b2c(DAT_005737d4,local_10);
  local_9 = '\x01';
  puStack_34 = &LAB_00451a40;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  if (*(short *)(local_8 + 0xda) != 0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(local_8 + 0xd8))(*(undefined4 *)(local_8 + 0xdc),local_8,&local_9);
  }
  if (local_9 != '\0') {
    FUN_004518a4();
  }
  *in_FS_OFFSET = uStack_38;
  if (local_9 != '\0') {
    puStack_30 = (undefined1 *)0x451a60;
    WaitMessage();
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00451a82;
  puStack_28 = (undefined1 *)0x451a7a;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

