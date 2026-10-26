/*
 * FUN_10005480 at 10005480
 * undefined4 __cdecl FUN_10005480(int param_1, uint param_2)
 * Address ranges: 10005480-1000549c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005480(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 4) < param_2) {
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) - param_2;
  return 1;
}

