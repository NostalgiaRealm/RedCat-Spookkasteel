/*
 * FUN_0042c244 at 0042c244
 * undefined __register FUN_0042c244(int * param_1, WPARAM param_2, WPARAM param_3)
 * Address ranges: 0042c244-0042c34f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 18 for TListBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 18 for
   TListBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042c244(int *param_1,WPARAM param_2,WPARAM param_3)

{
  undefined4 uVar1;
  WPARAM WVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_0042c372;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x42c272;
  local_8 = param_1;
  FUN_00413580(param_1);
  puStack_34 = &LAB_0042c350;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xc))(local_8,param_2,&local_10);
  local_c = FUN_00403270((int *)local_8[3],param_2,extraout_ECX);
  (**(code **)(*local_8 + 0xc))(local_8,param_3,&local_14);
  (**(code **)(*local_8 + 0x20))(local_8,param_2,local_14);
  uVar1 = FUN_00403270((int *)local_8[3],param_3,extraout_ECX_00);
  FUN_00403270((int *)local_8[3],param_2,uVar1);
  (**(code **)(*local_8 + 0x20))(local_8,param_3,local_10);
  FUN_00403270((int *)local_8[3],param_3,local_c);
  WVar2 = FUN_0042c73c((int *)local_8[3]);
  if (param_2 == WVar2) {
    FUN_0042c778((int *)local_8[3],param_3);
  }
  else {
    WVar2 = FUN_0042c73c((int *)local_8[3]);
    if (param_3 == WVar2) {
      FUN_0042c778((int *)local_8[3],param_2);
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0042c357;
  puStack_34 = (undefined1 *)0x42c34f;
  FUN_0041363c(local_8);
  return;
}

