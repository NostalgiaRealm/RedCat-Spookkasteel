/*
 * FUN_00533858 at 00533858
 * undefined __register FUN_00533858(int param_1, undefined4 * param_2)
 * Address ranges: 00533858-00533949
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 72 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 72 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00533858(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_0040320c((int *)*param_2,(int)&PTR_FUN_00531904);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_00403224((int *)*param_2,(int)&PTR_FUN_00531904);
  if (*(int *)(iVar2 + 0xc) == 0) {
    piVar3 = (int *)FUN_00549b64(*(int *)(param_1 + 0x294));
    uVar1 = FUN_0049206c(piVar3);
    iVar2 = FUN_00403224((int *)*param_2,(int)&PTR_FUN_00531904);
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
  }
  piVar3 = (int *)FUN_00533c14(param_1);
  iVar2 = FUN_005285b8(piVar3);
  uVar1 = FUN_00523748(iVar2);
  iVar2 = FUN_00403224((int *)*param_2,(int)&PTR_FUN_00531904);
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  piVar3 = (int *)FUN_00533c14(param_1);
  iVar2 = FUN_005285b8(piVar3);
  iVar2 = FUN_00523748(iVar2);
  if (iVar2 == -1) {
    iVar2 = FUN_00403224((int *)*param_2,(int)&PTR_FUN_00531904);
    FUN_0053282c(iVar2,(int *)0x0);
  }
  else {
    piVar3 = (int *)FUN_00549b80(*(int *)(param_1 + 0x294));
    iVar2 = FUN_00403224((int *)*param_2,(int)&PTR_FUN_00531904);
    FUN_0053282c(iVar2,piVar3);
  }
  return;
}

