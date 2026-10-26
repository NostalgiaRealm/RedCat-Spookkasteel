/*
 * FUN_004f5e68 at 004f5e68
 * undefined __register FUN_004f5e68(int param_1, int param_2)
 * Address ranges: 004f5e68-004f5e82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f304c slot 45 for TPageControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f304c slot 45 for
   TPageControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f5e68(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x240),param_2);
  (**(code **)(*piVar1 + 0x4c))();
  return;
}

