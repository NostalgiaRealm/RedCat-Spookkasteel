/*
 * FUN_0051c160 at 0051c160
 * undefined FUN_0051c160(void)
 * Address ranges: 0051c160-0051c17f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0051c160(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *(undefined1 *)(param_1 + 0x5c) = 1;
    FUN_0051bc20(param_2);
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return;
}

