/*
 * FUN_00432160 at 00432160
 * undefined __register FUN_00432160(int param_1, undefined4 * param_2)
 * Address ranges: 00432160-00432175
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x424f58 slot 16 for TCustomLabel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x424f58 slot 16 for
   TCustomLabel. Original bytes unchanged; names and types still inferred. */

void FUN_00432160(int param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = *(undefined4 *)(param_1 + 0x38);
  param_2[3] = *(undefined4 *)(param_1 + 0x3c);
  return;
}

