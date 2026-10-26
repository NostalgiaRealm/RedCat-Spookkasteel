/*
 * FUN_005df0d0 at 005df0d0
 * undefined FUN_005df0d0(void)
 * Address ranges: 005df0d0-005df0e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005df0d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10);
  if (param_2 <= iVar1) {
    iVar1 = param_2;
  }
  return iVar1;
}

