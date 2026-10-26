/*
 * FUN_00439e00 at 00439e00
 * undefined FUN_00439e00(void)
 * Address ranges: 00439e00-00439e19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_00439e00(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c) + param_2;
  *(int *)(param_1 + 0x6c) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return param_2 & 0xffffff00;
}

