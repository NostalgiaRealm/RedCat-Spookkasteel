/*
 * FUN_005a80e0 at 005a80e0
 * undefined FUN_005a80e0(void)
 * Address ranges: 005a80e0-005a80f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005a80e0(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x59) != param_2) {
    *(char *)(param_1 + 0x59) = param_2;
    FUN_005a80d0();
  }
  return;
}

