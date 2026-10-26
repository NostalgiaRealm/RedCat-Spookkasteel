/*
 * FUN_00616d76 at 00616d76
 * undefined FUN_00616d76(void)
 * Address ranges: 00616d76-00616da0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00616d76(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00747e9c;
  while( true ) {
    if (DAT_00747e9c + DAT_00747e98 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

