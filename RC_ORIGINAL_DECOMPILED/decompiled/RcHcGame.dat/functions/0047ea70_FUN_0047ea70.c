/*
 * FUN_0047ea70 at 0047ea70
 * undefined FUN_0047ea70(void)
 * Address ranges: 0047ea70-0047ea8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0047ea70(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x4c) = param_2;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined4 *)(param_1 + 0x50) = param_3;
    return;
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return;
}

