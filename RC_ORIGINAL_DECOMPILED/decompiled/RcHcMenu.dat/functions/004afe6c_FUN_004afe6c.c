/*
 * FUN_004afe6c at 004afe6c
 * undefined __register FUN_004afe6c(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 004afe6c-004afea6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4af7a4 slot 34 for TCustomTransparentControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4af7a4 slot 34 for
   TCustomTransparentControl. Original bytes unchanged; names and types still inferred. */

void FUN_004afe6c(int *param_1,int param_2,undefined4 param_3)

{
  FUN_00435184(param_1,param_2,param_3);
  if (((char)param_1[0x7e] != '\0') && (param_2 != 0)) {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

