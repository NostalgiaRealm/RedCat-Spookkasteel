/*
 * FUN_10016140 at 10016140
 * undefined FUN_10016140(void)
 * Address ranges: 10016140-1001619e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016140(void)

{
  undefined4 *puVar1;
  
  if (DAT_104e9928 == 0) {
    DAT_104e992c = FUN_1001e490(200,100,100);
    if (DAT_104e992c == 0) {
      return;
    }
    FUN_1001fc20();
    FUN_1001e7e0();
  }
  DAT_104e9928 = DAT_104e9928 + 1;
  puVar1 = (undefined4 *)FUN_1001e5a0(DAT_104e992c);
  *puVar1 = 1;
  puVar1[0x30] = 0x3f800000;
  puVar1[0x2f] = 0x3f800000;
  return;
}

