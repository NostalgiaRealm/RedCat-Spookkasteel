/*
 * FUN_00522124 at 00522124
 * undefined __register FUN_00522124(int param_1, undefined4 * param_2)
 * Address ranges: 00522124-00522150
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51bed8 slot 54 for TDaviCustomGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51bed8 slot 54 for
   TDaviCustomGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_00522124(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x274);
  *(undefined4 *)(iVar1 + 0x214) = *param_2;
  *(undefined4 *)(iVar1 + 0x218) = param_2[1];
  return;
}

