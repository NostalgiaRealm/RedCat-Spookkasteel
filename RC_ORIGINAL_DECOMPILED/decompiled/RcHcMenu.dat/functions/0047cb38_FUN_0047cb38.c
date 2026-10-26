/*
 * FUN_0047cb38 at 0047cb38
 * undefined __register FUN_0047cb38(int param_1)
 * Address ranges: 0047cb38-0047cbb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47c8b4 slot published:EditChange for TPasswordDialog. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47c8b4 slot
   published:EditChange for TPasswordDialog. Original bytes unchanged; names and types still
   inferred. */

void FUN_0047cb38(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0047cbb2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00432714(*(int *)(param_1 + 0x2d4),&local_8);
  bVar2 = local_8 != 0;
  (**(code **)(**(int **)(param_1 + 0x2d8) + 0x5c))(*(int **)(param_1 + 0x2d8),bVar2);
  (**(code **)(**(int **)(param_1 + 0x2dc) + 0x5c))(*(int **)(param_1 + 0x2dc),bVar2);
  if ((bVar2) || (*(char *)(param_1 + 0x2ec) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x2e4) + 0x5c))(*(int **)(param_1 + 0x2e4),uVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0047cbb9;
  puStack_18 = (undefined1 *)0x47cbb1;
  FUN_00403db0(&local_8);
  return;
}

