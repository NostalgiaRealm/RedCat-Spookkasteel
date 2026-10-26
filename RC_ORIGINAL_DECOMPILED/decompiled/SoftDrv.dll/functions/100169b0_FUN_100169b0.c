/*
 * FUN_100169b0 at 100169b0
 * undefined FUN_100169b0(void)
 * Address ranges: 100169b0-100169d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100169b0(int param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 8 << (param_2 & 0x1f);
  if ((uVar1 & *(uint *)(param_1 + 0x60)) == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x60) = ~uVar1 & *(uint *)(param_1 + 0x60) | 1;
  return 1;
}

