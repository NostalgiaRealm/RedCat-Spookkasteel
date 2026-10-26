/*
 * FUN_00414ba8 at 00414ba8
 * undefined __register FUN_00414ba8(int * param_1, int param_2)
 * Address ranges: 00414ba8-00414bd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410f54 slot 0 for TMemoryStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410f54 slot 0 for
   TMemoryStream. Original bytes unchanged; names and types still inferred. */

void FUN_00414ba8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[3];
  FUN_00414b80(param_1,param_2);
  param_1[2] = param_2;
  if (param_2 < iVar1) {
    (**(code **)(*param_1 + 0xc))(param_1,0,2);
  }
  return;
}

