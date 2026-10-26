/*
 * FUN_0055ac28 at 0055ac28
 * undefined __register FUN_0055ac28(int * param_1, undefined4 param_2)
 * Address ranges: 0055ac28-0055ace2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x559960 slot published:btnDefaultClick for TfrmKeyConfig. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x559960 slot
   published:btnDefaultClick for TfrmKeyConfig. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055ac28(int *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined *)0x0;
  puStack_20 = &LAB_0055ad0d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x55ac5c;
  local_10 = param_2;
  local_8 = param_1;
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  puStack_28 = (undefined1 *)0x55ac6d;
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn20");
  puStack_28 = (undefined1 *)0x55ac75;
  FUN_0055aac8(local_8);
  puStack_28 = (undefined1 *)0x55ac84;
  FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_18);
  puStack_28 = (undefined1 *)0x55ac8f;
  FUN_00409f84(local_18,(int *)&local_14);
  puStack_28 = (undefined1 *)0x55ac9c;
  FUN_00404038((int *)&local_14,(undefined4 *)"Settings\\static.ini");
  puStack_28 = (undefined1 *)0x55acab;
  local_c = FUN_0045c5fc((int *)&PTR_FUN_004a4db4,'\x01',local_14);
  puStack_2c = &LAB_0055ace3;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0056b534(local_8[0xd6],local_c);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0055acea;
  puStack_2c = (undefined1 *)0x55ace2;
  FUN_00403094(local_c);
  return;
}

