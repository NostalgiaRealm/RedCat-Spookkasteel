/*
 * FUN_00444a24 at 00444a24
 * undefined __register FUN_00444a24(int param_1, int param_2, char param_3)
 * Address ranges: 00444a24-00444a4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4400d4 slot 4 for TMenu. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4400d4 slot 4 for TMenu.
   Original bytes unchanged; names and types still inferred. */

void FUN_00444a24(int param_1,int param_2,char param_3)

{
  FUN_0041922c(param_1,param_2,param_3);
  if ((param_2 == *(int *)(param_1 + 0x3c)) && (param_3 == '\x01')) {
    FUN_004449e8(param_1,0);
  }
  return;
}

