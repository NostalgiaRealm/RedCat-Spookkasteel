/*
 * FUN_0050ce44 at 0050ce44
 * undefined __register FUN_0050ce44(int param_1)
 * Address ranges: 0050ce44-0050ced3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50be90 slot 1 for TOADateCombo2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50be90 slot 1 for
   TOADateCombo2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_0050ce44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  _union_2683 local_18;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_18._12_4_ = 0;
  local_18._8_4_ = 0;
  local_18.decVal.Hi32 = 0;
  local_18._0_4_ = 0;
  puStack_20 = &LAB_0050ced4;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_00403224(*(int **)(param_1 + 8),(int)&PTR_FUN_0050c17c);
    uVar2 = FUN_005017b8(iVar1);
    if ((char)uVar2 == '\0') {
      iVar1 = FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_0050c17c);
      FUN_0050b390(iVar1);
      FUN_0040542c((VARIANTARG *)&local_18.n2);
      FUN_004964d0(*(int **)(local_8 + 0xc),(undefined4 *)&local_18);
    }
    else {
      FUN_004f1368(local_8,*(int **)(local_8 + 0xc));
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0050cedb;
  puStack_20 = (undefined1 *)0x50ced3;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  return;
}

