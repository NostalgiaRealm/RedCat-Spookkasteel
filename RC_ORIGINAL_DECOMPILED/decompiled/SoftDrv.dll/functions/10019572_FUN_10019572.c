/*
 * FUN_10019572 at 10019572
 * undefined FUN_10019572(void)
 * Address ranges: 10019572-1001959c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10019572(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1020fd68;
  while( true ) {
    if (DAT_1020fd68 + DAT_1020fd64 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

