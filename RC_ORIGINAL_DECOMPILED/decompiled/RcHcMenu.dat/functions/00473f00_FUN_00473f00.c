/*
 * FUN_00473f00 at 00473f00
 * undefined __register FUN_00473f00(int param_1)
 * Address ranges: 00473f00-00473f45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 14 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 14 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473f00(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00473f46;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00406a48((undefined4 *)PTR_PTR_00572074,(int *)&local_8);
  FUN_00466d84(local_8,param_1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00473f4d;
  puStack_18 = (undefined1 *)0x473f45;
  FUN_00403db0((int *)&local_8);
  return;
}

