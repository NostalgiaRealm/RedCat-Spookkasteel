/*
 * FUN_100061a0 at 100061a0
 * undefined __fastcall FUN_100061a0(int * param_1)
 * Address ranges: 100061a0-100061d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100061a0(int *param_1)

{
  if (*param_1 == 0) {
    FUN_10008dfb((LPVOID)param_1[10]);
    FUN_10008dfb((LPVOID)param_1[7]);
    param_1[10] = 0;
    param_1[7] = 0;
    FUN_100060d0((int)param_1);
    *param_1 = 1;
  }
  return;
}

