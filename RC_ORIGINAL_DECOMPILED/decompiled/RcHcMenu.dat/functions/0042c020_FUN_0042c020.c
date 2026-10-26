/*
 * FUN_0042c020 at 0042c020
 * undefined __register FUN_0042c020(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0042c020-0042c07d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 6 for TListBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 6 for
   TListBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042c020(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_1c = &LAB_0042c07e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = FUN_00403270(*(int **)(param_1 + 0xc),param_2,param_3);
  if (iVar1 == -1) {
    FUN_00406a48((undefined4 *)PTR_PTR_005724ac,(int *)&local_8);
    FUN_004136fc(param_1,local_8,param_2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042c085;
  puStack_1c = (undefined1 *)0x42c07d;
  FUN_00403db0((int *)&local_8);
  return;
}

