/*
 * FUN_1001d2ac at 1001d2ac
 * undefined FUN_1001d2ac(void)
 * Address ranges: 1001d2ac-1001d2c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001d2ac(int *param_1)

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

