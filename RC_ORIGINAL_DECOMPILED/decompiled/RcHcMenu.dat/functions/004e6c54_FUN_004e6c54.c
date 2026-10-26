/*
 * FUN_004e6c54 at 004e6c54
 * undefined __register FUN_004e6c54(void)
 * Address ranges: 004e6c54-004e6c91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 16 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 16 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004e6c54(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_004e6c92;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00406a48((undefined4 *)PTR_PTR_00572044,(int *)&local_8);
  FUN_004e6bd4(local_8);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_004e6c99;
  puStack_10 = (undefined1 *)0x4e6c91;
  FUN_00403db0((int *)&local_8);
  return;
}

