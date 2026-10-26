/*
 * FUN_00444970 at 00444970
 * undefined __register FUN_00444970(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00444970-00444986
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4400d4 slot 12 for TMenu. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4400d4 slot 12 for TMenu.
   Original bytes unchanged; names and types still inferred. */

void FUN_00444970(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1,param_2,param_3);
  }
  return;
}

