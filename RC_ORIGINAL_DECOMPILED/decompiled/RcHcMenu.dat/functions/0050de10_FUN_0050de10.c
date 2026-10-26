/*
 * FUN_0050de10 at 0050de10
 * undefined __register FUN_0050de10(int * param_1, int * param_2)
 * Address ranges: 0050de10-0050de57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50d6ec slot 36 for TDaviCheckBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50d6ec slot 36 for
   TDaviCheckBox. Original bytes unchanged; names and types still inferred. */

void FUN_0050de10(int *param_1,int *param_2)

{
  FUN_0042bacc(param_1,param_2);
  param_2[1] = param_2[1] | 0xb;
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && ((char)param_1[0x84] != '\0')) {
    param_2[2] = param_2[2] | 0x20;
    param_2[1] = param_2[1] & 0xfdffffff;
  }
  return;
}

