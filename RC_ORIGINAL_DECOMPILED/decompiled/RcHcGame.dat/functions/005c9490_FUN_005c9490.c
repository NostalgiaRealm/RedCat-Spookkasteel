/*
 * FUN_005c9490 at 005c9490
 * undefined FUN_005c9490(void)
 * Address ranges: 005c9490-005c94a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005c9490(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xc4;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar1 = param_1 + 0x100;
  }
  return iVar1;
}

