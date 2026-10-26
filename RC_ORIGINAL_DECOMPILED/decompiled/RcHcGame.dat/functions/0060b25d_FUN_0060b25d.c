/*
 * FUN_0060b25d at 0060b25d
 * undefined FUN_0060b25d(void)
 * Address ranges: 0060b25d-0060b28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060b25d(LPVOID param_1)

{
  int iVar1;
  
  if (param_1 != (LPVOID)0x0) {
    iVar1 = FUN_00616d76(param_1);
    if (iVar1 != 0) {
      FUN_00616da1(iVar1);
      return;
    }
    HeapFree(DAT_00747ea0,0,param_1);
  }
  return;
}

