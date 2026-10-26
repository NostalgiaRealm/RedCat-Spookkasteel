/*
 * FUN_004f1790 at 004f1790
 * undefined FUN_004f1790(void)
 * Address ranges: 004f1790-004f17c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f1790(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; param_3 != puVar1; param_3 = param_3 + 1) {
    *param_2 = *param_3;
    param_2 = param_2 + 1;
  }
  *(undefined4 **)(param_1 + 8) = param_2;
  return;
}

