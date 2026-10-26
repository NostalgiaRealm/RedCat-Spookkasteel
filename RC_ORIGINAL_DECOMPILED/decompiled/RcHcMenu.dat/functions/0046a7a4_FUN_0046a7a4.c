/*
 * FUN_0046a7a4 at 0046a7a4
 * undefined __register FUN_0046a7a4(undefined4 param_1, int param_2)
 * Address ranges: 0046a7a4-0046a7e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 13 for TWideStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4631fc slot 13 for
   TWideStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a7a4(undefined4 param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_0046a7e8;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (param_2 < 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_0057222c,(int *)&local_8);
    FUN_00466d84(local_8,0);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0046a7ef;
  puStack_10 = (undefined1 *)0x46a7e7;
  FUN_00403db0((int *)&local_8);
  return;
}

