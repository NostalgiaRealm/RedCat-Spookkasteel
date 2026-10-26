/*
 * FUN_00414c58 at 00414c58
 * uint __register FUN_00414c58(int * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 00414c58-00414ca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410f54 slot 2 for TMemoryStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410f54 slot 2 for
   TMemoryStream. Original bytes unchanged; names and types still inferred. */

uint FUN_00414c58(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if (((param_1[3] < 0) || ((int)param_3 < 0)) || (iVar1 = param_1[3] + param_3, iVar1 < 1)) {
    param_3 = 0;
  }
  else {
    if (param_1[2] < iVar1) {
      if (param_1[4] < iVar1) {
        FUN_00414b80(param_1,iVar1);
      }
      param_1[2] = iVar1;
    }
    FUN_00402944(param_2,(undefined4 *)(param_1[1] + param_1[3]),param_3);
    param_1[3] = iVar1;
  }
  return param_3;
}

