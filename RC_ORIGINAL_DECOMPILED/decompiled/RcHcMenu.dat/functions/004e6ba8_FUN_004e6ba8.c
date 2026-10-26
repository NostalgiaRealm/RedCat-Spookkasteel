/*
 * FUN_004e6ba8 at 004e6ba8
 * LONG __register FUN_004e6ba8(int param_1)
 * Address ranges: 004e6ba8-004e6bd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 11 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 11 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

LONG FUN_004e6ba8(int param_1)

{
  undefined4 uVar1;
  tagPOINT local_14;
  LONG local_c [2];
  
  uVar1 = FUN_004e6b50(param_1);
  FUN_0041160c(uVar1,0,local_c);
  FUN_004e6abc(local_c,&local_14);
  return local_14.x;
}

