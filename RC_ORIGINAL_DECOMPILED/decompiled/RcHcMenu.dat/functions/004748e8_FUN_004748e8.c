/*
 * FUN_004748e8 at 004748e8
 * undefined __register FUN_004748e8(int * param_1, VARIANTARG * param_2)
 * Address ranges: 004748e8-00474971
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474230 slot 10 for TContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474230 slot 10 for
   TContainerProp. Original bytes unchanged; names and types still inferred. */

void FUN_004748e8(int *param_1,VARIANTARG *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  VARIANTARG *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_00474972;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0(&local_10,3);
  FUN_00459bd4(local_10);
  FUN_004053dc(local_c,0);
  *in_FS_OFFSET = "Not supported";
  FUN_00403dd4(&local_14,2);
  return;
}

