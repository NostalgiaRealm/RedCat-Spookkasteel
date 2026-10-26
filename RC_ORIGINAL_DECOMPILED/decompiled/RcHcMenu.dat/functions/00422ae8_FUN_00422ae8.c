/*
 * FUN_00422ae8 at 00422ae8
 * undefined __register FUN_00422ae8(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 00422ae8-00422b76;00422b8e-00422b9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 20 for TIcon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 20 for TIcon.
   Original bytes unchanged; names and types still inferred. */

void FUN_00422ae8(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_e [2];
  ushort local_c;
  int *local_8;
  
  puStack_20 = (undefined1 *)0x422b01;
  local_8 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',param_3);
  puStack_24 = &LAB_00422b77;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar1 = FUN_004147cc(param_2);
  iVar2 = FUN_004147b0(param_2);
  (**(code **)*local_8)(local_8,iVar1 - iVar2);
  iVar1 = FUN_004147cc(local_8);
  FUN_00414804(param_2,local_8[1],iVar1);
  FUN_00414804(local_8,local_e,6);
  if (1 < local_c) {
    FUN_0041d250();
  }
  FUN_00422ba0((int)param_1,0,local_8);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x422b97;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

