/*
 * FUN_0061d197 at 0061d197
 * undefined FUN_0061d197(void)
 * Address ranges: 0061d197-0061d1b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061d197(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}

