/*
 * FUN_004e8d0c at 004e8d0c
 * undefined __register FUN_004e8d0c(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 004e8d0c-004e8d7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 6 for TCurrencyProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 6 for
   TCurrencyProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e8d0c(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = 0;
  puStack_20 = &LAB_004e8d7d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x70))();
  FUN_0040aa08(4,2,&local_14);
  FUN_004040f0(local_c,3);
  *in_FS_OFFSET = &DAT_004e8d94;
  FUN_00403db0(&local_14);
  return;
}

