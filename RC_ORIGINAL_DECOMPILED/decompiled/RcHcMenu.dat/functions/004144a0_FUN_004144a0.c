/*
 * FUN_004144a0 at 004144a0
 * undefined4 __register FUN_004144a0(int param_1, int param_2)
 * Address ranges: 004144a0-004144c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 6 for TStringList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 6 for
   TStringList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004144a0(int param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_00413734(param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + param_2 * 8);
}

