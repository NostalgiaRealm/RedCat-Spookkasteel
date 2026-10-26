/*
 * FUN_00449c38 at 00449c38
 * undefined __register FUN_00449c38(int * param_1, int * param_2)
 * Address ranges: 00449c38-00449c85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4460ec slot 36 for TScrollBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4460ec slot 36 for
   TScrollBox. Original bytes unchanged; names and types still inferred. */

void FUN_00449c38(int *param_1,int *param_2)

{
  FUN_0044946c(param_1,param_2);
  param_2[1] = param_2[1] | *(uint *)(&DAT_0056fa5c + (uint)*(byte *)(param_1 + 0x82) * 4);
  if (((*PTR_DAT_005722c4 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x82] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  return;
}

