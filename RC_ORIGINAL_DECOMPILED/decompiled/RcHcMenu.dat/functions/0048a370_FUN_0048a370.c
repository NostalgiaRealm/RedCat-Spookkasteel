/*
 * FUN_0048a370 at 0048a370
 * undefined __register FUN_0048a370(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0048a370-0048a3e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4897ec slot 6 for TStringProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4897ec slot 6 for
   TStringProp. Original bytes unchanged; names and types still inferred. */

void FUN_0048a370(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18 [3];
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18[1] = 0;
  local_18[0] = 0;
  puStack_24 = &LAB_0048a3e6;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_18[2] = param_2;
  local_c = param_3;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x6c))(param_1,local_18,*param_1,&DAT_0048a3fc);
  FUN_00459e80(local_18[0],"\'",local_18 + 1);
  FUN_004040f0(local_c,3);
  *in_FS_OFFSET = &DAT_0048a3fc;
  FUN_00403dd4(local_18,2);
  return;
}

