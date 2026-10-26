/*
 * FUN_0043ac64 at 0043ac64
 * undefined4 __register FUN_0043ac64(int param_1, int * param_2, undefined4 * param_3)
 * Address ranges: 0043ac64-0043ac73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 1 for TDockTree. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 1 for
   TDockTree. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0043ac64(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043b318(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}

