/*
 * FUN_004684a4 at 004684a4
 * undefined4 __register FUN_004684a4(int param_1)
 * Address ranges: 004684a4-004684bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4625dc slot 33 for TFieldDefList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4625dc slot 33 for
   TFieldDefList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004684a4(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x35) != '\0') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x2c), *(char *)(iVar1 + 0x20) != '\0')) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}

