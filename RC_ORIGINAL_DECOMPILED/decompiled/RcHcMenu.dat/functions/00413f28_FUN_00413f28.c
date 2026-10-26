/*
 * FUN_00413f28 at 00413f28
 * undefined __register FUN_00413f28(int * param_1, int * param_2)
 * Address ranges: 00413f28-00413f74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 26 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 26 for
   TStrings. Original bytes unchanged; names and types still inferred. */

void FUN_00413f28(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00413f75;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  iVar1 = FUN_00404030(local_8);
  FUN_0041483c(param_2,local_8,iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00413f7c;
  puStack_18 = (undefined1 *)0x413f74;
  FUN_00403db0(&local_8);
  return;
}

