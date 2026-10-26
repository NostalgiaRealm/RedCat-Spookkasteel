/*
 * FUN_00489b50 at 00489b50
 * int __register FUN_00489b50(undefined4 * param_1)
 * Address ranges: 00489b50-00489b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x489774 slot 2 for TStringPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x489774 slot 2 for
   TStringPropDesc. Original bytes unchanged; names and types still inferred. */

int FUN_00489b50(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_00495828(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_00489774);
  *(undefined4 *)(iVar2 + 0x30) = param_1[0xc];
  return iVar2;
}

