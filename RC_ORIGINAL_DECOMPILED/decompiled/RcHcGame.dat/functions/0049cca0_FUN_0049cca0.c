/*
 * FUN_0049cca0 at 0049cca0
 * undefined FUN_0049cca0(void)
 * Address ranges: 0049cca0-0049cce4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049cca0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x150) = param_2;
  *(undefined4 *)(param_1 + 0x158) = param_4;
  *(undefined4 *)(param_1 + 0x154) = param_3;
  if (*(char *)(param_1 + 0x118) != '\0') {
    FUN_005b5270(param_2,param_3,param_4);
  }
  return;
}

