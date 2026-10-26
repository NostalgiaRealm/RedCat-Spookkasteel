/*
 * FUN_00414464 at 00414464
 * undefined __register FUN_00414464(int param_1, int param_2, int * param_3)
 * Address ranges: 00414464-00414495
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 3 for TStringList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 3 for
   TStringList. Original bytes unchanged; names and types still inferred. */

void FUN_00414464(int param_1,int param_2,int *param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_00413734(param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  FUN_00403e04(param_3,*(undefined4 **)(*(int *)(param_1 + 0xc) + param_2 * 8));
  return;
}

