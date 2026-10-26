/*
 * FUN_00503e7c at 00503e7c
 * undefined4 __register FUN_00503e7c(int param_1, int * param_2)
 * Address ranges: 00503e7c-00503f0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503898 slot 2 for TDaviComboBoxItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503898 slot 2 for
   TDaviComboBoxItem. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00503e7c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined3 uVar3;
  undefined1 uVar4;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00503898);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00503898);
  uVar4 = *(char *)(iVar2 + 8) == *(char *)(param_1 + 8);
  if ((bool)uVar4) {
    iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00503898);
    FUN_00404140(*(uint **)(param_1 + 0xc),*(uint **)(iVar2 + 0xc));
    if ((bool)uVar4) {
      iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00503898);
      if (*(int *)(iVar2 + 0x10) == *(int *)(param_1 + 0x10)) {
        uVar3 = (undefined3)((uint)*(int *)(iVar2 + 0x10) >> 8);
        uVar4 = 1;
        goto LAB_00503f04;
      }
    }
  }
  uVar4 = 0;
  uVar3 = 0;
LAB_00503f04:
  return CONCAT31(uVar3,uVar4);
}

