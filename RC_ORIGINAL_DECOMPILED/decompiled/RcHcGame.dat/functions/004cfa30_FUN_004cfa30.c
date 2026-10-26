/*
 * FUN_004cfa30 at 004cfa30
 * undefined FUN_004cfa30(void)
 * Address ranges: 004cfa30-004cfa9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cfa30(int param_1)

{
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x16d) = 0;
  FUN_004cea90(*(undefined4 *)(param_1 + 0x178));
  FUN_004ceed0();
  if (*(char *)(param_1 + 0x16e) != '\0') {
    FUN_004d0770(*(undefined4 *)(param_1 + 0x13c));
    *(undefined4 *)(param_1 + 0x168) = 5;
    return;
  }
  FUN_004d0770(0);
  *(undefined4 *)(param_1 + 0x168) = 1;
  return;
}

