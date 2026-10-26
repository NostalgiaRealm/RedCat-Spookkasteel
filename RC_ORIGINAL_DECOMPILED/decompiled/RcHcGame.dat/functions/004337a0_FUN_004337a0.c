/*
 * FUN_004337a0 at 004337a0
 * undefined FUN_004337a0(void)
 * Address ranges: 004337a0-004337d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004337a0(int param_1,char param_2)

{
  int iVar1;
  
  *(char *)(param_1 + 0x198) = param_2;
  if (param_2 != '\0') {
    iVar1 = param_1 + 0x168;
    FUN_004247e0(iVar1);
    FUN_005b50a0(iVar1);
    *(undefined1 *)(param_1 + 0x198) = 0;
  }
  return;
}

