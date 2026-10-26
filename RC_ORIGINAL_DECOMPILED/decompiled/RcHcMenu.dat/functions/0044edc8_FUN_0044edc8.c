/*
 * FUN_0044edc8 at 0044edc8
 * undefined __register FUN_0044edc8(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0044edc8-0044edd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x447d68 slot 5 for TDataModule. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x447d68 slot 5 for
   TDataModule. Original bytes unchanged; names and types still inferred. */

void FUN_0044edc8(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)param_3 >> 8),DAT_005734d1) ^ 1;
  *(char *)(param_1 + 0x12) = (char)uVar1;
  FUN_0041936c(param_1,param_2,uVar1);
  return;
}

