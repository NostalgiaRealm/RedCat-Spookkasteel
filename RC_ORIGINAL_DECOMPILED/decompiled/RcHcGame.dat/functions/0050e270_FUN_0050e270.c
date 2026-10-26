/*
 * FUN_0050e270 at 0050e270
 * undefined FUN_0050e270(void)
 * Address ranges: 0050e270-0050e28c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0050e270(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(bool *)(param_1 + 0x48) = param_2 == '\0';
  return;
}

