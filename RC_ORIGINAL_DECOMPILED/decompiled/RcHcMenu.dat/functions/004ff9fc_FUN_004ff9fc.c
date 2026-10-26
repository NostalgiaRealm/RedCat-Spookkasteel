/*
 * FUN_004ff9fc at 004ff9fc
 * undefined __register FUN_004ff9fc(int param_1)
 * Address ranges: 004ff9fc-004ffa97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fed40 slot 0 for TOAEdit2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fed40 slot 0 for
   TOAEdit2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_004ff9fc(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_14 = &LAB_004ffa98;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x4c))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(local_8 + 0xc) + 0x50))();
      if (cVar2 == '\0') {
        FUN_004966b4(*(int **)(local_8 + 0xc),&local_c);
        puVar1 = local_c;
        iVar3 = FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_004fd950);
        FUN_00432744(iVar3,puVar1);
        goto LAB_004ffa82;
      }
    }
    iVar3 = FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_004fd950);
    FUN_00432744(iVar3,(uint *)0x0);
  }
LAB_004ffa82:
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004ffa9f;
  puStack_14 = (undefined1 *)0x4ffa97;
  FUN_00403db0((int *)&local_c);
  return;
}

