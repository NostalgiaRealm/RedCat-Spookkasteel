/*
 * FUN_0040d9fa at 0040d9fa
 * uint __cdecl FUN_0040d9fa(int param_1)
 * Address ranges: 0040d9fa-0040da24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_0040d9fa(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00413ddc;
  while( true ) {
    if (DAT_00413ddc + DAT_00413dd8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

