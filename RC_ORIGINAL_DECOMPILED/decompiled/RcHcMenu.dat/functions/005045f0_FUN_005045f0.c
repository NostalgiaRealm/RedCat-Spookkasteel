/*
 * FUN_005045f0 at 005045f0
 * undefined __register FUN_005045f0(int param_1, undefined4 * param_2)
 * Address ranges: 005045f0-00504676
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 72 for TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 72 for
   TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred. */

void FUN_005045f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0040320c((int *)*param_2,(int)&PTR_FUN_00503898);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_0050423c(param_1);
  if (*(int *)(iVar2 + 0x204) == -1) {
    iVar2 = FUN_00403224((int *)*param_2,(int)&PTR_FUN_00503898);
    FUN_00503c58(iVar2,(uint *)0x0);
  }
  else {
    iVar2 = FUN_0050423c(param_1);
    iVar2 = *(int *)(iVar2 + 0x204);
    iVar3 = FUN_00403224((int *)*param_2,(int)&PTR_FUN_00503898);
    FUN_00503cf0(iVar3,iVar2);
  }
  return;
}

