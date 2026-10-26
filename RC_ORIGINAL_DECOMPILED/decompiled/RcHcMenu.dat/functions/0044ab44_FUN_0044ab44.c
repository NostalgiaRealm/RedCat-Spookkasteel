/*
 * FUN_0044ab44 at 0044ab44
 * undefined __register FUN_0044ab44(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0044ab44-0044ab78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 24 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 24 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044ab44(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  
  if ((param_2 != (int *)param_1[9]) && (param_1 != param_2)) {
    if ((int *)param_1[9] == (int *)0x0) {
      FUN_00435d9c(param_1);
      param_3 = extraout_ECX;
    }
    FUN_004325e0(param_1,param_2,param_3);
    if (param_1[9] == 0) {
      FUN_00435f34(param_1);
    }
  }
  return;
}

