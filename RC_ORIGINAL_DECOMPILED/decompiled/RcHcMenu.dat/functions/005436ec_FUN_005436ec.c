/*
 * FUN_005436ec at 005436ec
 * undefined __register FUN_005436ec(int param_1)
 * Address ranges: 005436ec-005437ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5432a8 slot 0 for TOALookupComboBoxInterface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5432a8 slot 0 for
   TOALookupComboBoxInterface. Original bytes unchanged; names and types still inferred. */

void FUN_005436ec(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_14 = &LAB_005437af;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x4c))();
    if (cVar2 == '\0') {
      iVar3 = FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_00543598);
      FUN_00541e48(iVar3,(uint *)0x0);
      piVar4 = (int *)FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_00543598);
      (**(code **)(*piVar4 + 0xc4))();
    }
    else {
      FUN_00496b88(*(int **)(local_8 + 0xc),(int *)&local_c);
      puVar1 = local_c;
      iVar3 = FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_00543598);
      FUN_00541e48(iVar3,puVar1);
      piVar4 = (int *)FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_00543598);
      (**(code **)(*piVar4 + 0xc4))();
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005437b6;
  puStack_14 = (undefined1 *)0x5437ae;
  FUN_00403db0((int *)&local_c);
  return;
}

