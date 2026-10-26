/*
 * FUN_00436f60 at 00436f60
 * undefined FUN_00436f60(void)
 * Address ranges: 00436f60-00436f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00436f60(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x372) == '\0') {
    FUN_004dd650(param_2,param_3);
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined1 *)(param_1 + 0x372) = 1;
  }
  return;
}

