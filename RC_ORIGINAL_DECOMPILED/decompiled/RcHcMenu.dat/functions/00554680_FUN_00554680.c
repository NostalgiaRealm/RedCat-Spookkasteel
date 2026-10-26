/*
 * FUN_00554680 at 00554680
 * undefined __register FUN_00554680(int param_1, undefined4 param_2)
 * Address ranges: 00554680-005546da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5541f0 slot published:txtPlayerNameChange for TfrmPlayerName. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5541f0 slot
   published:txtPlayerNameChange for TfrmPlayerName. Original bytes unchanged; names and types still
   inferred. */

void FUN_00554680(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_005546db;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00432714(*(int *)(param_1 + 0x30c),&local_10);
  (**(code **)(**(int **)(local_8 + 0x2f4) + 0x5c))(*(int **)(local_8 + 0x2f4),local_10 != 0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005546e2;
  puStack_18 = (undefined1 *)0x5546da;
  FUN_00403db0(&local_10);
  return;
}

