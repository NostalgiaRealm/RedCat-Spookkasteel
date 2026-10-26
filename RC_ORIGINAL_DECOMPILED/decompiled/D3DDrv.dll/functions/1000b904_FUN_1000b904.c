/*
 * FUN_1000b904 at 1000b904
 * undefined4 __cdecl FUN_1000b904(int * param_1)
 * Address ranges: 1000b904-1000b91e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000b904(int *param_1)

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

