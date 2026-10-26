/*
 * FUN_00437230 at 00437230
 * undefined FUN_00437230(void)
 * Address ranges: 00437230-00437270
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00437230(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x100);
  uVar2 = *(undefined4 *)(param_1 + 0x104);
  *param_2 = *(undefined4 *)(param_1 + 0xfc);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return;
}

