/*
 * FUN_004ad2e0 at 004ad2e0
 * undefined FUN_004ad2e0(void)
 * Address ranges: 004ad2e0-004ad30c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004ad2e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_2 + 0x28) = iVar1;
  *(int *)(param_2 + 0x2c) = param_1;
  FUN_0053cff0(*(undefined4 *)(param_1 + 0x20),1,&param_2);
  return;
}

