/*
 * FUN_004a90f4 at 004a90f4
 * undefined __register FUN_004a90f4(int param_1)
 * Address ranges: 004a90f4-004a9119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a8798 slot 45 for TWinControlWrapper. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a8798 slot 45 for
   TWinControlWrapper. Original bytes unchanged; names and types still inferred. */

void FUN_004a90f4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_004a8f84(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004a8f84(param_1);
    (**(code **)(*piVar2 + 0xb0))();
  }
  return;
}

