/*
 * FUN_0047cbc0 at 0047cbc0
 * undefined __register FUN_0047cbc0(int param_1)
 * Address ranges: 0047cbc0-0047cc37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47c8b4 slot published:AddButtonClick for TPasswordDialog. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47c8b4 slot
   published:AddButtonClick for TPasswordDialog. Original bytes unchanged; names and types still
   inferred. */

void FUN_0047cbc0(int param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  LPCSTR local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (LPCSTR)0x0;
  puStack_14 = &LAB_0047cc38;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00432714(*(int *)(param_1 + 0x2d4),(int *)&local_8);
  pCVar1 = local_8;
  iVar2 = FUN_00403224(*(int **)(param_1 + 0x2f0),(int)&PTR_FUN_0047d4c0);
  FUN_00480660(iVar2,pCVar1);
  *(undefined1 *)(param_1 + 0x2ec) = 1;
  (**(code **)(**(int **)(param_1 + 0x2d4) + 0xcc))();
  (**(code **)(**(int **)(param_1 + 0x2d4) + 0xb0))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0047cc3f;
  puStack_14 = (undefined1 *)0x47cc37;
  FUN_00403db0((int *)&local_8);
  return;
}

