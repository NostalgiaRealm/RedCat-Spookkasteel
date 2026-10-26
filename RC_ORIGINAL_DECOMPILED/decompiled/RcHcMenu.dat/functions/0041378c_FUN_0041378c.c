/*
 * FUN_0041378c at 0041378c
 * undefined __register FUN_0041378c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0041378c-00413841
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 18 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 18 for
   TStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0041378c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
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
  puStack_28 = &LAB_00413864;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x4137ba;
  local_8 = param_1;
  FUN_00413580(param_1);
  puStack_34 = &LAB_00413842;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xc))(local_8,param_2,&local_10);
  local_c = (**(code **)(*local_8 + 0x18))(local_8,param_2);
  (**(code **)(*local_8 + 0xc))(local_8,param_3,&local_14);
  (**(code **)(*local_8 + 0x20))(local_8,param_2,local_14);
  uVar1 = (**(code **)(*local_8 + 0x18))(local_8,param_3);
  (**(code **)(*local_8 + 0x24))(local_8,param_2,uVar1);
  (**(code **)(*local_8 + 0x20))(local_8,param_3,local_10);
  (**(code **)(*local_8 + 0x24))(local_8,param_3,local_c);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00413849;
  puStack_34 = (undefined1 *)0x413841;
  FUN_0041363c(local_8);
  return;
}

