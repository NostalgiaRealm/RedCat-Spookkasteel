/*
 * FUN_004e6d74 at 004e6d74
 * undefined __register FUN_004e6d74(void)
 * Address ranges: 004e6d74-004e6db2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 22 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 22 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004e6d74(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_004e6db3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00406a48((undefined4 *)PTR_PTR_00572044,(int *)&local_8);
  FUN_004e6bd4(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004e6dba;
  puStack_14 = (undefined1 *)0x4e6db2;
  FUN_00403db0((int *)&local_8);
  return;
}

