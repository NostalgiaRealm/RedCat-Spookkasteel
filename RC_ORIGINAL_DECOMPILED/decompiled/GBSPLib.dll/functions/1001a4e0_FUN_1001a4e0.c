/*
 * FUN_1001a4e0 at 1001a4e0
 * undefined FUN_1001a4e0(void)
 * Address ranges: 1001a4e0-1001a4fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1001a4e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10024a40(*(undefined4 *)(param_1 + 8));
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1 != 0;
}

