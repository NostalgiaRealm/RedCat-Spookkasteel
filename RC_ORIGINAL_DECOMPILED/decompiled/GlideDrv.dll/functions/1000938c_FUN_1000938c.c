/*
 * FUN_1000938c at 1000938c
 * undefined4 __cdecl FUN_1000938c(int * param_1)
 * Address ranges: 1000938c-100093a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000938c(int *param_1)

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

