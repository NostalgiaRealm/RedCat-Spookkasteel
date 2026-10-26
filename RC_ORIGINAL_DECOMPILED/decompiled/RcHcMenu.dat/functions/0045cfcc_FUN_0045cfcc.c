/*
 * FUN_0045cfcc at 0045cfcc
 * undefined __register FUN_0045cfcc(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0045cfcc-0045d0a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 16 for TIniFile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45c5a0 slot 16 for
   TIniFile. Original bytes unchanged; names and types still inferred. */

void FUN_0045cfcc(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_18 = 0;
  local_20 = (undefined *)0x0;
  local_1c = 0;
  puStack_34 = &LAB_0045d0e0;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x45d003;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',param_3);
  puStack_40 = &LAB_0045d0be;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x45d022;
  puStack_3c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x38))(local_8,local_c,local_14);
  puStack_48 = (undefined1 *)0x45d02a;
  FUN_00413580(local_10);
  puStack_4c = &LAB_0045d0a1;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_48 = &stack0xfffffffc;
  iVar1 = (**(code **)(*local_14 + 0x14))();
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      (**(code **)(*local_14 + 0xc))(local_14,iVar2,&local_1c,&local_18);
      (**(code **)*local_8)(local_8,local_c,local_1c);
      (**(code **)(*local_14 + 0xc))(local_14,iVar2,&local_20,local_18);
      FUN_004140d0(local_10,local_20,0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_0045d0a8;
  puStack_4c = (undefined1 *)0x45d0a0;
  FUN_0041363c(local_10);
  return;
}

