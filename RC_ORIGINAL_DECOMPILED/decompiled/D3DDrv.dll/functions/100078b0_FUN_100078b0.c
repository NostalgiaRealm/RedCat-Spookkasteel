/*
 * FUN_100078b0 at 100078b0
 * undefined __stdcall FUN_100078b0(void)
 * Address ranges: 100078b0-100078cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100078b0(void)

{
  int *piVar1;
  
  piVar1 = (int *)&DAT_101c3678;
  do {
    FUN_10007a20(piVar1);
    piVar1 = piVar1 + 5;
  } while ((int)piVar1 < 0x101c36f0);
  return;
}

