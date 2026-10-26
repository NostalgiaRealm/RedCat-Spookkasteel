/*
 * FUN_004a0640 at 004a0640
 * undefined FUN_004a0640(void)
 * Address ranges: 004a0640-004a0656
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004a0640(int param_1)

{
  if ((*(int *)(param_1 + 0x38) != 0) && (*(char *)(param_1 + 0x44) == '\0')) {
    return 1;
  }
  return 0;
}

