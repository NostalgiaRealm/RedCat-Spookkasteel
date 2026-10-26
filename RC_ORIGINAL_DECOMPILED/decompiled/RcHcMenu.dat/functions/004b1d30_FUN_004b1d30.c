/*
 * FUN_004b1d30 at 004b1d30
 * int __register FUN_004b1d30(undefined4 * param_1)
 * Address ranges: 004b1d30-004b1d90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b1968 slot 2 for TDatePropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b1968 slot 2 for
   TDatePropDesc. Original bytes unchanged; names and types still inferred. */

int FUN_004b1d30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_00495828(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_004b1968);
  FUN_00403e04((int *)(iVar2 + 0x30),(undefined4 *)param_1[0xc]);
  *(undefined4 *)(iVar2 + 0x38) = param_1[0xe];
  *(undefined4 *)(iVar2 + 0x3c) = param_1[0xf];
  *(undefined4 *)(iVar2 + 0x40) = param_1[0x10];
  *(undefined4 *)(iVar2 + 0x44) = param_1[0x11];
  return iVar2;
}

