/*
 * FUN_004a8b00 at 004a8b00
 * undefined1 __register FUN_004a8b00(int param_1)
 * Address ranges: 004a8b00-004a8b35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a8798 slot 43 for TWinControlWrapper. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a8798 slot 43 for
   TWinControlWrapper. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_004a8b00(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 local_9;
  
  local_9 = 0;
  iVar1 = FUN_004a8f84(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004a8f84(param_1);
    local_9 = FUN_00403270(piVar2,extraout_EDX,extraout_ECX);
  }
  return local_9;
}

