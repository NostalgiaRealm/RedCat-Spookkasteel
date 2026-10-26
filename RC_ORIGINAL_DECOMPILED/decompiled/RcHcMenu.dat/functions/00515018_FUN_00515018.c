/*
 * FUN_00515018 at 00515018
 * undefined __register FUN_00515018(int param_1)
 * Address ranges: 00515018-005150a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51408c slot 1 for TOANumericCombo2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51408c slot 1 for
   TOANumericCombo2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_00515018(int param_1)

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
  puStack_20 = &LAB_005150a8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_00403224(*(int **)(param_1 + 8),(int)&PTR_FUN_0051437c);
    uVar2 = FUN_005017b8(iVar1);
    if ((char)uVar2 == '\0') {
      iVar1 = FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_0051437c);
      FUN_00513594(iVar1);
      FUN_00405414((VARIANTARG *)&local_18.n2);
      FUN_004964d0(*(int **)(local_8 + 0xc),(undefined4 *)&local_18);
    }
    else {
      FUN_004f1368(local_8,*(int **)(local_8 + 0xc));
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005150af;
  puStack_20 = (undefined1 *)0x5150a7;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  return;
}

