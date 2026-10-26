/*
 * FUN_00596620 at 00596620
 * undefined FUN_00596620(void)
 * Address ranges: 00596620-00596638
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00596620(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

