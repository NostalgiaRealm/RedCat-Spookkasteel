/*
 * FUN_0045c768 at 0045c768
 * undefined __register FUN_0045c768(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 0045c768-0045c7b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45c4e0 slot 3 for TCustomIniFile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45c4e0 slot 3 for
   TCustomIniFile. Original bytes unchanged; names and types still inferred. */

void FUN_0045c768(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0045c7b4;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_00409bd8(param_4,&local_8);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_0045c7bb;
  iStack_20 = 0x45c7b3;
  FUN_00403db0(&local_8);
  return;
}

