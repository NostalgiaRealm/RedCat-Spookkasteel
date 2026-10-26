/*
 * FUN_0051323c at 0051323c
 * undefined4 __register FUN_0051323c(int param_1, int * param_2)
 * Address ranges: 0051323c-005132cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x512d68 slot 2 for TDaviNumericComboItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x512d68 slot 2 for
   TDaviNumericComboItem. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0051323c(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 uVar4;
  
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_00512d68);
  if ((char)uVar2 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_00512d68);
  if (*(double *)(iVar3 + 0x10) == *(double *)(param_1 + 0x10)) {
    iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_00512d68);
    if (*(int *)(iVar3 + 0x18) == *(int *)(param_1 + 0x18)) {
      iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_00512d68);
      uVar4 = (undefined3)((uint)iVar3 >> 8);
      if (*(char *)(iVar3 + 8) == *(char *)(param_1 + 8)) {
        uVar1 = 1;
        goto LAB_005132c2;
      }
    }
  }
  uVar1 = 0;
  uVar4 = 0;
LAB_005132c2:
  return CONCAT31(uVar4,uVar1);
}

