/*
 * FUN_00470540 at 00470540
 * undefined __register FUN_00470540(int * param_1, int * param_2)
 * Address ranges: 00470540-00470564
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46627c slot 3 for TParam. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46627c slot 3 for TParam.
   Original bytes unchanged; names and types still inferred. */

void FUN_00470540(int *param_1,int *param_2)

{
  if (param_1[0xb] == 0) {
    FUN_00412cbc(param_1,param_2);
    return;
  }
  FUN_00403e04(param_2,(undefined4 *)param_1[0xb]);
  return;
}

