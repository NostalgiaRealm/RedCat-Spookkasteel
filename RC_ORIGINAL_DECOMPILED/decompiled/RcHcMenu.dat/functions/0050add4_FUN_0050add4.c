/*
 * FUN_0050add4 at 0050add4
 * undefined __register FUN_0050add4(int param_1, undefined4 * param_2)
 * Address ranges: 0050add4-0050ae34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x509cac slot 72 for TDaviCustomDateCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x509cac slot 72 for
   TDaviCustomDateCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_0050add4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  
  uVar1 = FUN_0040320c((int *)*param_2,(int)&PTR_FUN_00509aec);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_0050a2d8(param_1);
  uVar1 = *(undefined4 *)(iVar2 + 0x274);
  uVar3 = *(undefined4 *)(iVar2 + 0x270);
  iVar2 = FUN_00403224((int *)*param_2,(int)&PTR_FUN_00509aec);
  FUN_00509ec8(iVar2,extraout_EDX,extraout_ECX,uVar3,uVar1);
  return;
}

