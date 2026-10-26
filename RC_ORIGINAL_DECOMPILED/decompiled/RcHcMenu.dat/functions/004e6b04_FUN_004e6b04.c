/*
 * FUN_004e6b04 at 004e6b04
 * LONG __register FUN_004e6b04(int param_1)
 * Address ranges: 004e6b04-004e6b31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 8 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 8 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

LONG FUN_004e6b04(int param_1)

{
  undefined4 uVar1;
  tagPOINT tStack_14;
  LONG local_c [2];
  
  uVar1 = FUN_004e6b34(param_1);
  FUN_0041160c(0,uVar1,local_c);
  FUN_004e6abc(local_c,&tStack_14);
  return tStack_14.y;
}

