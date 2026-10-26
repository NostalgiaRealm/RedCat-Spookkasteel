/*
 * FUN_00550210 at 00550210
 * undefined __register FUN_00550210(int param_1)
 * Address ranges: 00550210-0055025f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x550198 slot 0 for TSaveGameHeader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x550198 slot 0 for
   TSaveGameHeader. Original bytes unchanged; names and types still inferred. */

void FUN_00550210(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = 0;
  puStack_14 = &LAB_00550260;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  FUN_00403fd4(&local_c,(byte *)(param_1 + 8));
  FUN_004a3e4c(local_8,0x550274,local_c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00550267;
  puStack_14 = (undefined1 *)0x55025f;
  FUN_00403db0(&local_c);
  return;
}

