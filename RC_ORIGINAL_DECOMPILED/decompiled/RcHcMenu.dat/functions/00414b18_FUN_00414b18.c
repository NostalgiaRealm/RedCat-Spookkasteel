/*
 * FUN_00414b18 at 00414b18
 * undefined4 __register FUN_00414b18(int param_1, int param_2, short param_3)
 * Address ranges: 00414b18-00414b3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410ee4 slot 3 for TCustomMemoryStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410ee4 slot 3 for
   TCustomMemoryStream. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00414b18(int param_1,int param_2,short param_3)

{
  if (param_3 == 0) {
    *(int *)(param_1 + 0xc) = param_2;
  }
  else if (param_3 == 1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  }
  else if (param_3 == 2) {
    *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_1 + 8);
  }
  return *(undefined4 *)(param_1 + 0xc);
}

