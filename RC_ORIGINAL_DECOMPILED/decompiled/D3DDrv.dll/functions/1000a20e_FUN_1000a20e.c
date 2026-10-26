/*
 * FUN_1000a20e at 1000a20e
 * uint __cdecl FUN_1000a20e(int param_1)
 * Address ranges: 1000a20e-1000a238
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1000a20e(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_101c3de8;
  while( true ) {
    if (DAT_101c3de8 + DAT_101c3de4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

