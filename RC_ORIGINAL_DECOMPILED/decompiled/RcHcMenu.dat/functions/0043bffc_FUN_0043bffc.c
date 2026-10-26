/*
 * FUN_0043bffc at 0043bffc
 * undefined __register FUN_0043bffc(int param_1, int * param_2)
 * Address ranges: 0043bffc-0043c0e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 7 for TDockTree. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 7 for
   TDockTree. Original bytes unchanged; names and types still inferred. */

void FUN_0043bffc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_0043c135;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x43c031;
  local_c = param_1;
  local_8 = param_2;
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x70,4);
  puStack_34 = (undefined1 *)0x43c03d;
  local_14 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX);
  puStack_38 = &LAB_0043c0e4;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  iVar1 = FUN_00437280(*(int *)(local_c + 0x14));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00437294(*(int *)(local_c + 0x14),iVar3);
      if ((*(char *)(iVar2 + 0x47) == '\0') && (*(int *)(iVar2 + 8) != 0)) {
        (**(code **)(*local_14 + 0x34))(local_14,*(undefined4 *)(iVar2 + 8));
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_10 = (**(code **)(*local_14 + 0x14))();
  (**(code **)(*local_8 + 8))(local_8,&local_10,4);
  if (-1 < local_10 + -1) {
    iVar3 = 0;
    iVar1 = local_10;
    do {
      puVar4 = &stack0xfffffffc;
      (**(code **)(*local_14 + 0xc))(local_14,iVar3,&local_18);
      FUN_0043bec8(local_18,extraout_EDX,extraout_ECX_00,(int)puVar4);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0043c0eb;
  puStack_38 = (undefined1 *)0x43c0e3;
  FUN_00403094(local_14);
  return;
}

