/*
 * FUN_00533994 at 00533994
 * undefined __register FUN_00533994(int param_1)
 * Address ranges: 00533994-00533a18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 74 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 74 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00533994(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = FUN_0040320c(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00531904);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  piVar2 = (int *)FUN_00533c14(param_1);
  piVar2 = (int *)FUN_005285b8(piVar2);
  FUN_00523d00(piVar2,0xffffffff);
  if (*(char *)(*(int *)(param_1 + 0x234) + 8) == '\0') {
    piVar2 = (int *)FUN_00533c14(param_1);
    piVar2 = (int *)FUN_005285b8(piVar2);
    iVar3 = FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00531904);
    FUN_00523d00(piVar2,*(uint *)(iVar3 + 0x10));
  }
  return;
}

