/*
 * FUN_0053e29c at 0053e29c
 * undefined __register FUN_0053e29c(int * param_1, char param_2)
 * Address ranges: 0053e29c-0053e2ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53dec4 slot -1 for TAppObjMatrixBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53dec4 slot -1 for
   TAppObjMatrixBox. Original bytes unchanged; names and types still inferred. */

void FUN_0053e29c(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x53e2a7;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0053e2f0;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0xf8]);
  local_8[0xf8] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0053e2f7;
  puStack_14 = (undefined1 *)0x53e2ef;
  FUN_004f8274(local_8,local_9 & 0xfc);
  return;
}

