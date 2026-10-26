/*
 * FUN_1001ae60 at 1001ae60
 * undefined FUN_1001ae60(void)
 * Address ranges: 1001ae60-1001ae70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1001ae60(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10);
  if (param_2 <= iVar1) {
    iVar1 = param_2;
  }
  return iVar1;
}

