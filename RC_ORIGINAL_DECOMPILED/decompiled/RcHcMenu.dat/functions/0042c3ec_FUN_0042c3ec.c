/*
 * FUN_0042c3ec at 0042c3ec
 * undefined __register FUN_0042c3ec(int * param_1, int param_2, int param_3)
 * Address ranges: 0042c3ec-0042c4b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 24 for TListBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 24 for
   TListBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042c3ec(int *param_1,int param_2,int param_3)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0042c4d5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x42c417;
  local_8 = param_1;
  FUN_00413580(param_1);
  *(undefined1 *)(local_8[3] + 0x230) = 1;
  puStack_30 = &LAB_0042c4b8;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (param_3 != param_2) {
    puStack_2c = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc))(local_8,param_2,&local_10);
    local_c = FUN_00403270((int *)local_8[3],param_2,extraout_ECX);
    FUN_00403270((int *)local_8[3],param_2,0);
    (**(code **)(*local_8 + 0x44))(local_8,param_2);
    (**(code **)(*local_8 + 0x54))(local_8,param_3,local_10);
    FUN_00403270((int *)local_8[3],param_3,local_c);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0042c4bf;
  *(undefined1 *)(local_8[3] + 0x230) = 0;
  puStack_30 = (undefined1 *)0x42c4b7;
  FUN_0041363c(local_8);
  return;
}

