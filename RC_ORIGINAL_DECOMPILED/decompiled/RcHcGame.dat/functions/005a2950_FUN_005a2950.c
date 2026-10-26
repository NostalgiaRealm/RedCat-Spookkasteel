/*
 * FUN_005a2950 at 005a2950
 * undefined FUN_005a2950(void)
 * Address ranges: 005a2950-005a297a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a2950(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_005cd320();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_005cd320();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

