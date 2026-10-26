/*
 * FUN_004145e4 at 004145e4
 * undefined __register FUN_004145e4(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 004145e4-00414638
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 8 for TStringList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410ca8 slot 8 for
   TStringList. Original bytes unchanged; names and types still inferred. */

void FUN_004145e4(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_00413734(param_1,(undefined4 *)PTR_PTR_005722ac,0);
  }
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_00413734(param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_00403e04((int *)(param_1[3] + param_2 * 8),param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}

