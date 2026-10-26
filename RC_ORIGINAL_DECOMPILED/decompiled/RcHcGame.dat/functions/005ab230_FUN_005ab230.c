/*
 * FUN_005ab230 at 005ab230
 * undefined FUN_005ab230(void)
 * Address ranges: 005ab230-005ab25a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ab230(void)

{
  if (DAT_006cad68 == (undefined4 *)0x0) {
    DAT_006cad68 = operator_new(4);
    if (DAT_006cad68 != (undefined4 *)0x0) {
      *DAT_006cad68 = 0;
      return;
    }
    DAT_006cad68 = (undefined4 *)0x0;
  }
  return;
}

