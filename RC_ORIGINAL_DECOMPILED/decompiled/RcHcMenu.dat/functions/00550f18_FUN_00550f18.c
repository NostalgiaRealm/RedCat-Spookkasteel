/*
 * FUN_00550f18 at 00550f18
 * undefined __register FUN_00550f18(int * param_1, char param_2)
 * Address ranges: 00550f18-00550f95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x550e44 slot -1 for TMenuIni. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x550e44 slot -1 for
   TMenuIni. Original bytes unchanged; names and types still inferred. */

void FUN_00550f18(int *param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  byte extraout_DL;
  int local_14;
  int local_10;
  
  piVar1 = FUN_00403434(param_1,param_2);
  uVar2 = *(int *)(piVar1[0xb] + 8) - 1;
  if (SBORROW4(*(int *)(piVar1[0xb] + 8),1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      piVar3 = (int *)FUN_00551a30((int)piVar1,local_10);
      FUN_00403094(piVar3);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_00403094((int *)piVar1[0xb]);
  piVar1[0xb] = 0;
  FUN_004a3c40(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

