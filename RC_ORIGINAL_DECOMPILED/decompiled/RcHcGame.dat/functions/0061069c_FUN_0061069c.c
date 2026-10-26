/*
 * FUN_0061069c at 0061069c
 * undefined FUN_0061069c(void)
 * Address ranges: 0061069c-006106c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

SIZE_T FUN_0061069c(LPCVOID param_1)

{
  int iVar1;
  SIZE_T SVar2;
  
  iVar1 = FUN_00616d76(param_1);
  if (iVar1 != 0) {
    return *(int *)((int)param_1 + -4) - 9;
  }
  SVar2 = HeapSize(DAT_00747ea0,0,param_1);
  return SVar2;
}

