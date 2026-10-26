/*
 * FUN_004b1df4 at 004b1df4
 * undefined __register FUN_004b1df4(int * param_1, int param_2)
 * Address ranges: 004b1df4-004b1e42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 14 for TDateProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 14 for
   TDateProp. Original bytes unchanged; names and types still inferred. */

void FUN_004b1df4(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 local_20;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4b1e08;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_14 = &LAB_004b1e43;
  puStack_18 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0040c53c(local_c);
  (**(code **)(*local_8 + 0x70))();
  local_20 = SUB84((double)in_ST0,0);
  *in_FS_OFFSET = local_20;
  puStack_18 = &LAB_004b1e4a;
  FUN_00403db0(&local_c);
  return;
}

