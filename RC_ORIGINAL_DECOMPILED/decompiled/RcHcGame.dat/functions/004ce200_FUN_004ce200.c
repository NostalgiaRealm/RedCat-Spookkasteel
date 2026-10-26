/*
 * FUN_004ce200 at 004ce200
 * undefined FUN_004ce200(void)
 * Address ranges: 004ce200-004ce297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004ce200(int param_1)

{
  *(undefined1 *)(param_1 + 0x198) = 1;
  *(undefined1 *)(param_1 + 0x171) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  FUN_004cbcb0(*(undefined4 *)(param_1 + 0x184));
  if (*(char *)(param_1 + 0x173) != '\0') {
    FUN_004d0770(*(undefined4 *)(param_1 + 0x13c));
    *(undefined4 *)(param_1 + 0x16c) = 6;
    FUN_004cd2f0(1);
    FUN_004cddc0();
    return;
  }
  FUN_004d0770(*(undefined4 *)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x16c) = 1;
  FUN_004cd2f0(0);
  FUN_004cdfe0();
  return;
}

