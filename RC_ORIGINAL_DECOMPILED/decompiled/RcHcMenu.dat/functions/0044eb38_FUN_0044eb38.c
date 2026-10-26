/*
 * FUN_0044eb38 at 0044eb38
 * undefined __register FUN_0044eb38(int param_1)
 * Address ranges: 0044eb38-0044eb6f;0044eb87-0044eb8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x447d68 slot 13 for TDataModule. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x447d68 slot 13 for
   TDataModule. Original bytes unchanged; names and types still inferred. */

void FUN_0044eb38(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x42) != 0) {
    puStack_1c = &LAB_0044eb70;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}

