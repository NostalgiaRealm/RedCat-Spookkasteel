/*
 * FUN_00510958 at 00510958
 * undefined __register FUN_00510958(int param_1, undefined4 * param_2)
 * Address ranges: 00510958-005109e9;00510a09-00510a0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 72 for TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 72 for
   TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00510958(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST1;
  longlong lVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x510977;
  uVar1 = FUN_0040320c((int *)*param_2,(int)&PTR_FUN_0050fc3c);
  if ((char)uVar1 == '\0') {
    puStack_1c = (undefined1 *)0x51098f;
    FUN_00403d94("Assertion failure");
  }
  puStack_20 = &LAB_005109ea;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  iVar2 = FUN_00510e14(param_1);
  FUN_004fcb4c(iVar2);
  FUN_00510b80(param_1);
  FUN_004b1824();
  lVar3 = (longlong)ROUND(in_ST1 * (float10)10000.0);
  iVar2 = FUN_00403224((int *)*param_2,(int)&PTR_FUN_0050fc3c);
  FUN_00510144(iVar2,extraout_EDX,extraout_ECX,(int)lVar3,(int)((ulonglong)lVar3 >> 0x20));
  *in_FS_OFFSET = uStack_24;
  return;
}

