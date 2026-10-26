/*
 * FUN_0049bb70 at 0049bb70
 * undefined FUN_0049bb70(void)
 * Address ranges: 0049bb70-0049bbc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049bb70(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x18c) = *param_2;
  *(undefined4 *)(param_1 + 400) = param_2[1];
  *(undefined4 *)(param_1 + 0x194) = param_2[2];
  FUN_0049d5e0(1);
  iVar1 = param_1 + 0x168;
  *(undefined1 *)(param_1 + 0x198) = 1;
  FUN_004247e0(iVar1);
  FUN_005b50a0(iVar1);
  FUN_004337a0(0);
  return;
}

