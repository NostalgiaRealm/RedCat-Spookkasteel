/*
 * FUN_004fca80 at 004fca80
 * undefined __register FUN_004fca80(int * param_1, int param_2)
 * Address ranges: 004fca80-004fcaec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fb364 slot 46 for TDaviCalculator. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fb364 slot 46 for
   TDaviCalculator. Original bytes unchanged; names and types still inferred. */

void FUN_004fca80(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  byte local_d;
  int local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_14 = 0;
  puStack_1c = &LAB_004fcaed;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == param_1[0x91]) {
    local_d = 0x3d;
    puStack_18 = &stack0xfffffffc;
  }
  else {
    FUN_00432714(param_2,&local_14);
    local_d = FUN_004fcc78(local_8,local_14);
  }
  FUN_004fccdc(local_8,local_d);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004fcaf4;
  puStack_1c = (undefined1 *)0x4fcaec;
  FUN_00403db0(&local_14);
  return;
}

