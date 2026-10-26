/*
 * FUN_00501bf8 at 00501bf8
 * undefined __register FUN_00501bf8(int * param_1)
 * Address ranges: 00501bf8-00501c61;00501c69-00501c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 57 for TDaviComboBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 57 for
   TDaviComboBase. Original bytes unchanged; names and types still inferred. */

void FUN_00501bf8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x501c07;
  local_8 = param_1;
  uVar1 = FUN_005013c0((int)param_1);
  if (((char)uVar1 != '\0') && ((*(byte *)(local_8 + 0x97) & 4) != 0)) {
    puStack_10 = &LAB_00501c62;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    puStack_c = &stack0xfffffffc;
    FUN_005013f8(local_8,'\x03');
    FUN_005015b0(local_8);
    FUN_00501610(local_8);
    *in_FS_OFFSET = uStack_14;
    puStack_c = (undefined1 *)0x501c69;
    puStack_10 = (undefined1 *)0x501c56;
    FUN_005013f8(local_8,'\0');
    puStack_10 = (undefined1 *)0x501c61;
    (**(code **)(*local_8 + 0xe8))();
    return;
  }
  return;
}

