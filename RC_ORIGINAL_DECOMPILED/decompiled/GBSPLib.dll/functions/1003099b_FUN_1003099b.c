/*
 * FUN_1003099b at 1003099b
 * undefined FUN_1003099b(void)
 * Address ranges: 1003099b-100309b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003099b(int *param_1)

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

