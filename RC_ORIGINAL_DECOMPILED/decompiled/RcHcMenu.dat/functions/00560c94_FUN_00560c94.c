/*
 * FUN_00560c94 at 00560c94
 * undefined __register FUN_00560c94(int * param_1, undefined4 param_2)
 * Address ranges: 00560c94-00560d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot published:btnOptionsClick for TfrmMainScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot
   published:btnOptionsClick for TfrmMainScreen. Original bytes unchanged; names and types still
   inferred. */

void FUN_00560c94(int *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_14 = (undefined1 *)0x560cb2;
  local_10 = param_2;
  local_8 = param_1;
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  puStack_14 = (undefined1 *)0x560cc3;
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_red24");
  puStack_14 = (undefined1 *)0x560ccf;
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  puStack_14 = (undefined1 *)0x560cd7;
  FUN_005534dc(local_8);
  puStack_14 = (undefined1 *)0x560ce6;
  local_c = FUN_0055b124((int *)&PTR_FUN_0055af50,'\x01',local_8);
  puStack_18 = &LAB_00560d18;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00560d1f;
  puStack_18 = (undefined1 *)0x560d17;
  FUN_00403094(local_c);
  return;
}

