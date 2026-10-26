/*
 * FUN_005354f8 at 005354f8
 * undefined __register FUN_005354f8(int param_1)
 * Address ranges: 005354f8-00535596
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x534610 slot 0 for TOAFKComboBox2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x534610 slot 0 for
   TOAFKComboBox2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_005354f8(int param_1)

{
  char cVar1;
  int *piVar2;
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
  puStack_20 = &LAB_00535597;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x4c))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(local_8 + 0xc) + 0x50))();
      if (cVar1 == '\0') {
        FUN_00496550(*(int **)(local_8 + 0xc),(VARIANT *)&local_18.n2);
        piVar2 = (int *)FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_0052ec34);
        (**(code **)(*piVar2 + 0x144))(piVar2,&local_18);
        goto LAB_00535581;
      }
    }
    piVar2 = (int *)FUN_00403224(*(int **)(local_8 + 8),(int)&PTR_FUN_0052ec34);
    (**(code **)(*piVar2 + 0x138))();
  }
LAB_00535581:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0053559e;
  puStack_20 = (undefined1 *)0x535596;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  return;
}

