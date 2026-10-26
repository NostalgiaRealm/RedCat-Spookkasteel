/*
 * FUN_00429ae8 at 00429ae8
 * undefined __register FUN_00429ae8(int * param_1)
 * Address ranges: 00429ae8-00429b00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 40 for TCustomEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 40 for
   TCustomEdit. Original bytes unchanged; names and types still inferred. */

void FUN_00429ae8(int *param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0042959c(param_1);
  *(undefined1 *)((int)param_1 + 0x1fd) = uVar1;
  FUN_00435c00(param_1);
  return;
}

