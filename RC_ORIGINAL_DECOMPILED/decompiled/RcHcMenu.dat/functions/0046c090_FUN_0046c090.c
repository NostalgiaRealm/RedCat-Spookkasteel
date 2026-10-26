/*
 * FUN_0046c090 at 0046c090
 * undefined __register FUN_0046c090(undefined4 param_1, int param_2)
 * Address ranges: 0046c090-0046c0d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464574 slot 13 for TBinaryField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464574 slot 13 for
   TBinaryField. Original bytes unchanged; names and types still inferred. */

void FUN_0046c090(undefined4 param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_0046c0d4;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (param_2 == 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_0057222c,(int *)&local_8);
    FUN_00466d84(local_8,0);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0046c0db;
  puStack_10 = (undefined1 *)0x46c0d3;
  FUN_00403db0((int *)&local_8);
  return;
}

