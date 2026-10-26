/*
 * FUN_1000d8f0 at 1000d8f0
 * undefined4 __cdecl FUN_1000d8f0(int * param_1)
 * Address ranges: 1000d8f0-1000d90a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000d8f0(int *param_1)

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

