/*
 * FUN_00510a60 at 00510a60
 * undefined __register FUN_00510a60(undefined4 param_1, int param_2, int * param_3)
 * Address ranges: 00510a60-00510aad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 73 for TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 73 for
   TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00510a60(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x510a77;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_18 = &LAB_00510aae;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar1 = FUN_00403224(local_c,(int)&PTR_FUN_0050fc3c);
  FUN_00501074(iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00510ab5;
  puStack_18 = (undefined1 *)0x510aad;
  FUN_00403db0(&local_10);
  return;
}

