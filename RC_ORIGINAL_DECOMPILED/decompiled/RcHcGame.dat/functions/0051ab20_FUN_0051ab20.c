/*
 * FUN_0051ab20 at 0051ab20
 * undefined FUN_0051ab20(void)
 * Address ranges: 0051ab20-0051ab5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0051ab20(int param_1,int param_2)

{
  *(int *)(param_1 + 0x3c) = param_2;
  if (param_2 == 1) {
    FUN_004041b0(*(undefined4 *)(param_1 + 0x50));
    return;
  }
  if (param_2 == 3) {
    FUN_004041b0(*(undefined4 *)(param_1 + 0x54));
    return;
  }
  FUN_004041b0(0xffffffff);
  return;
}

