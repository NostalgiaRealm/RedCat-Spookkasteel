/*
 * FUN_00487ce8 at 00487ce8
 * undefined __register FUN_00487ce8(int * param_1)
 * Address ranges: 00487ce8-00487d46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 12 for TDBDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 12 for
   TDBDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00487ce8(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = &stack0xfffffffc;
  puStack_14 = &LAB_00487d47;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00482860(param_1[0x8b]);
  FUN_00482ef8(param_1[0x8b]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00487d4e;
  puStack_14 = (undefined1 *)0x487d46;
  (**(code **)(*param_1 + 0x268))(param_1,10,0);
  return;
}

