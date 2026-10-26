/*
 * FUN_0051007c at 0051007c
 * undefined4 __register FUN_0051007c(int param_1, int * param_2)
 * Address ranges: 0051007c-005100f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50fc3c slot 2 for TDaviCurrencyComboItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50fc3c slot 2 for
   TDaviCurrencyComboItem. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0051007c(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 uVar4;
  
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_0050fc3c);
  if ((char)uVar2 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_0050fc3c);
  if ((float10)*(longlong *)(param_1 + 0x10) == (float10)*(longlong *)(iVar3 + 0x10)) {
    iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_0050fc3c);
    uVar4 = (undefined3)((uint)iVar3 >> 8);
    if (*(char *)(iVar3 + 8) == *(char *)(param_1 + 8)) {
      uVar1 = 1;
      goto LAB_005100eb;
    }
  }
  uVar1 = 0;
  uVar4 = 0;
LAB_005100eb:
  return CONCAT31(uVar4,uVar1);
}

