/*
 * FUN_00560d40 at 00560d40
 * undefined __register FUN_00560d40(int * param_1, undefined4 param_2)
 * Address ranges: 00560d40-00560dd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot published:btnPlayerClick for TfrmMainScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot
   published:btnPlayerClick for TfrmMainScreen. Original bytes unchanged; names and types still
   inferred. */

void FUN_00560d40(int *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_4c = &stack0xfffffffc;
  local_14 = 0;
  puStack_50 = &LAB_00560e57;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_58 = (undefined1 *)0x560d71;
  local_10 = param_2;
  local_8 = param_1;
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  puStack_58 = (undefined1 *)0x560d82;
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn13");
  puStack_58 = (undefined1 *)0x560d8e;
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  puStack_58 = (undefined1 *)0x560d96;
  FUN_005534dc(local_8);
  puStack_58 = (undefined1 *)0x560da5;
  local_c = FUN_005552a0((int *)&PTR_FUN_00555088,'\x01',local_8);
  puStack_5c = &LAB_00560dd7;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puStack_58 = &stack0xfffffffc;
  (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_00560dde;
  puStack_5c = (undefined1 *)0x560dd6;
  FUN_00403094(local_c);
  return;
}

