/*
 * FUN_00473eb0 at 00473eb0
 * undefined __register FUN_00473eb0(int param_1)
 * Address ranges: 00473eb0-00473ef2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 13 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 13 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473eb0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00473ef3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00406a48((undefined4 *)PTR_PTR_00572574,(int *)&local_8);
  FUN_00466d84(local_8,param_1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00473efa;
  puStack_14 = (undefined1 *)0x473ef2;
  FUN_00403db0((int *)&local_8);
  return;
}

