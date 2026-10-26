/*
 * FUN_100052af at 100052af
 * uint __cdecl FUN_100052af(int param_1)
 * Address ranges: 100052af-100052d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_100052af(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_101f5aa8;
  while( true ) {
    if (DAT_101f5aa8 + DAT_101f5aa4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

