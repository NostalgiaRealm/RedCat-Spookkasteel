/*
 * FUN_00532924 at 00532924
 * undefined __register FUN_00532924(int param_1, int * param_2)
 * Address ranges: 00532924-005329d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x531904 slot 1 for TAppObjComboItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x531904 slot 1 for
   TAppObjComboItem. Original bytes unchanged; names and types still inferred. */

void FUN_00532924(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0050234c(*(int **)(param_1 + 4));
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00403d94("Assertion failure");
  }
  if (param_2 == (int *)0x0) {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00531904);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00531904);
  FUN_00493768(*(int **)(param_1 + 0xc),*(int **)(iVar2 + 0xc));
  iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00531904);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  FUN_00501164(param_1,(int)param_2);
  return;
}

