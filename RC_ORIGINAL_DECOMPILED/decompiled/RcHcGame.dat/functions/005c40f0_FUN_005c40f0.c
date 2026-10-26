/*
 * FUN_005c40f0 at 005c40f0
 * undefined FUN_005c40f0(void)
 * Address ranges: 005c40f0-005c410e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005c40f0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xa8) == 0) || (iVar1 = *(int *)(param_1 + 0xa0), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  return iVar1;
}

