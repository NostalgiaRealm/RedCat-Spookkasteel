/*
 * FUN_005e5690 at 005e5690
 * undefined FUN_005e5690(void)
 * Address ranges: 005e5690-005e56af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e5690(int param_1,undefined4 param_2,int param_3,int param_4)

{
  **(undefined4 **)(param_1 + 0xc) = param_2;
  **(int **)(param_1 + 0x1c) = param_3;
  **(int **)(param_1 + 0x2c) = param_4 - param_3;
  return;
}

