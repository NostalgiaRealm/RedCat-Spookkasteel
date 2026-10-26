/*
 * FUN_0061c3d9 at 0061c3d9
 * undefined FUN_0061c3d9(void)
 * Address ranges: 0061c3d9-0061c411
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061c3d9(void)

{
  if ((DAT_0070ff84 == 1) || ((DAT_0070ff84 == 0 && (DAT_006b2694 == 1)))) {
    FUN_0061c412(0xfc);
    if (DAT_00710304 != (code *)0x0) {
      (*DAT_00710304)();
    }
    FUN_0061c412(0xff);
  }
  return;
}

