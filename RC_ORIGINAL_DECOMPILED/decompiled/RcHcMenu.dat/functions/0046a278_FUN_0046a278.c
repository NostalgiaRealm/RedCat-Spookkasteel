/*
 * FUN_0046a278 at 0046a278
 * undefined __register FUN_0046a278(int * param_1)
 * Address ranges: 0046a278-0046a2d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 16 for TStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 16 for
   TStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a278(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  char *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  puStack_14 = &LAB_0046a2d5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x58))(param_1,&local_8);
  FUN_00404030((int)local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046a2dc;
  puStack_14 = (undefined1 *)0x46a2d4;
  FUN_00403db0((int *)&local_8);
  return;
}

