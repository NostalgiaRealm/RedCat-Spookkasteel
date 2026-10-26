/*
 * FUN_0045cb30 at 0045cb30
 * undefined __register FUN_0045cb30(int * param_1, undefined4 param_2, undefined1 * param_3)
 * Address ranges: 0045cb30-0045cb7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45c4e0 slot 11 for TCustomIniFile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45c4e0 slot 11 for
   TCustomIniFile. Original bytes unchanged; names and types still inferred. */

void FUN_0045cb30(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0045cb7f;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_0040bd30(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_0045cb86;
  iStack_20 = 0x45cb7e;
  FUN_00403db0(&local_8);
  return;
}

