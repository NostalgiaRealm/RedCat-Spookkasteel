/*
 * FUN_004df790 at 004df790
 * undefined FUN_004df790(void)
 * Address ranges: 004df790-004df7c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004df790(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004df7d0(*(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x118));
  FUN_004041b0(uVar1);
  *(undefined4 *)(param_1 + 0xf8) = 1;
  return;
}

