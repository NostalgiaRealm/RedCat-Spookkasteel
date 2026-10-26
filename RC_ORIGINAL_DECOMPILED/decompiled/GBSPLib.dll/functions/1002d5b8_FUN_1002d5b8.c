/*
 * FUN_1002d5b8 at 1002d5b8
 * undefined FUN_1002d5b8(void)
 * Address ranges: 1002d5b8-1002d5e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002d5b8(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1052a9ac;
  while( true ) {
    if (DAT_1052a9ac + DAT_1052a9a8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

