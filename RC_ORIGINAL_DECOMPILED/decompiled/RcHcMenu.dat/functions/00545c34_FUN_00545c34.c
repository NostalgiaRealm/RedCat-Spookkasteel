/*
 * FUN_00545c34 at 00545c34
 * byte __register FUN_00545c34(int param_1)
 * Address ranges: 00545c34-00545c56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 25 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 25 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

byte FUN_00545c34(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004ee2d0(*(int **)(param_1 + 0x84));
  return (byte)uVar1 ^ 1;
}

