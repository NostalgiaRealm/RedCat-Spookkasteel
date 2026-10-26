/*
 * FUN_00422968 at 00422968
 * undefined4 __register FUN_00422968(int param_1)
 * Address ranges: 00422968-0042297c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 7 for TIcon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 7 for TIcon.
   Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00422968(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0xc) == 0)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}

