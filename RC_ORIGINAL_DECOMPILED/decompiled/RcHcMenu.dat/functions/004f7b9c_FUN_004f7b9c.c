/*
 * FUN_004f7b9c at 004f7b9c
 * undefined __register FUN_004f7b9c(int * param_1, int param_2, char param_3)
 * Address ranges: 004f7b9c-004f7bcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 4 for THeaderControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 4 for
   THeaderControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f7b9c(int *param_1,int param_2,char param_3)

{
  FUN_00431ce8(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0x84])) {
    (**(code **)(*param_1 + 0xb4))(param_1,0);
  }
  return;
}

