/*
 * FUN_005437bc at 005437bc
 * undefined __register FUN_005437bc(int param_1)
 * Address ranges: 005437bc-0054384b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5432a8 slot 1 for TOALookupComboBoxInterface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5432a8 slot 1 for
   TOALookupComboBoxInterface. Original bytes unchanged; names and types still inferred. */

void FUN_005437bc(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
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
  puStack_20 = &LAB_0054384c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = FUN_00403224(*(int **)(param_1 + 8),(int)&PTR_FUN_00543598);
    cVar1 = FUN_00543134(iVar2);
    if (cVar1 == '\0') {
      iVar2 = FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_00543598);
      piVar3 = (int *)FUN_00541708(iVar2);
      FUN_00496550(piVar3,(VARIANT *)&local_18.n2);
      FUN_004964d0(*(int **)(local_8 + 0xc),(undefined4 *)&local_18);
    }
    else {
      FUN_004f1368(local_8,*(int **)(local_8 + 0xc));
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00543853;
  puStack_20 = (undefined1 *)0x54384b;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  return;
}

