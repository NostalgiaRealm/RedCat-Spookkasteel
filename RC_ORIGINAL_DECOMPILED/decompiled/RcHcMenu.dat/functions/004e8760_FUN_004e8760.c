/*
 * FUN_004e8760 at 004e8760
 * int __register FUN_004e8760(undefined4 * param_1)
 * Address ranges: 004e8760-004e87de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e81c0 slot 2 for TCurrencyPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e81c0 slot 2 for
   TCurrencyPropDesc. Original bytes unchanged; names and types still inferred. */

int FUN_004e8760(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0048b528(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_004e81c0);
  *(undefined4 *)(iVar2 + 0x48) = param_1[0x12];
  *(undefined1 *)(iVar2 + 0x4c) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(iVar2 + 0x4d) = *(undefined1 *)((int)param_1 + 0x4d);
  FUN_00403e04((int *)(iVar2 + 0x50),(undefined4 *)param_1[0x14]);
  *(undefined1 *)(iVar2 + 0x54) = *(undefined1 *)(param_1 + 0x15);
  *(undefined4 *)(iVar2 + 0x58) = param_1[0x16];
  *(undefined4 *)(iVar2 + 0x5c) = param_1[0x17];
  return iVar2;
}

