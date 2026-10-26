/*
 * FUN_004817b0 at 004817b0
 * undefined __register FUN_004817b0(int param_1)
 * Address ranges: 004817b0-004817fd;00481827-0048182c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47d4c0 slot 3 for TSession. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47d4c0 slot 3 for TSession.
   Original bytes unchanged; names and types still inferred. */

void FUN_004817b0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4817c2;
  FUN_00419360(param_1);
  puStack_1c = &LAB_004817fe;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x43) != '\0') {
    puStack_18 = &stack0xfffffffc;
    FUN_0048222c(param_1);
  }
  if (*(char *)(param_1 + 0x3f) != '\0') {
    FUN_00481e4c(param_1,'\x01');
  }
  *in_FS_OFFSET = uStack_20;
  return;
}

