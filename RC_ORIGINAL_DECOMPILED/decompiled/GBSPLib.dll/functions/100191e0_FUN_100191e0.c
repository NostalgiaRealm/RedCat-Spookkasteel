/*
 * FUN_100191e0 at 100191e0
 * undefined FUN_100191e0(void)
 * Address ranges: 100191e0-100191fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100191e0(int param_1)

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

