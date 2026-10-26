/*
 * FUN_004731d8 at 004731d8
 * undefined __register FUN_004731d8(int * param_1)
 * Address ranges: 004731d8-0047323e;00473246-00473249
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 72 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 72 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_004731d8(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  if ((param_1[0x17] < 1) && ((char)param_1[0x25] == '\0')) {
    return;
  }
  local_9 = *(undefined1 *)((int)param_1 + 0x8d);
  *(undefined1 *)((int)param_1 + 0x8d) = 5;
  puStack_14 = &LAB_0047323f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x80))();
  *in_FS_OFFSET = uStack_18;
  *(undefined1 *)((int)local_8 + 0x8d) = local_9;
  return;
}

