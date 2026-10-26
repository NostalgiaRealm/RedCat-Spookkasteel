/*
 * FUN_0053875c at 0053875c
 * undefined __register FUN_0053875c(int * param_1, char param_2)
 * Address ranges: 0053875c-005387a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x537000 slot -1 for TOAGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x537000 slot -1 for
   TOAGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_0053875c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x538767;
  local_8 = FUN_00403434(param_1,param_2);
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8[0xb5] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005387a9;
  uStack_14 = 0x5387a1;
  FUN_00528500(local_8,extraout_DL & 0xfc);
  return;
}

