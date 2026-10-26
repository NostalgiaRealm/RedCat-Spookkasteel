/*
 * FUN_00403b93 at 00403b93
 * uint __cdecl FUN_00403b93(int param_1)
 * Address ranges: 00403b93-00403bbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_00403b93(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00408124;
  while( true ) {
    if (DAT_00408124 + DAT_00408120 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

