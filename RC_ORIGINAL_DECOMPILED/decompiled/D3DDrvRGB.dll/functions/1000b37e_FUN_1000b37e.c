/*
 * FUN_1000b37e at 1000b37e
 * uint __cdecl FUN_1000b37e(int param_1)
 * Address ranges: 1000b37e-1000b3a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1000b37e(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_100ec828;
  while( true ) {
    if (DAT_100ec828 + DAT_100ec824 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

