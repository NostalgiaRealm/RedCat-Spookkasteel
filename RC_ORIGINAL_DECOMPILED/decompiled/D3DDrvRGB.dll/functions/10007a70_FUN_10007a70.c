/*
 * FUN_10007a70 at 10007a70
 * undefined __fastcall FUN_10007a70(int * param_1)
 * Address ranges: 10007a70-10007ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10007a70(int *param_1)

{
  if (*param_1 == 0) {
    FUN_10005fc0((byte *)s_____Deleting_World_slot___d__ver_10018bf8);
    FUN_10008dfb((LPVOID)param_1[0xc]);
    FUN_10008dfb((LPVOID)param_1[4]);
    FUN_10008dfb((LPVOID)param_1[5]);
    param_1[0xc] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_10007950((int)param_1);
    *param_1 = 1;
  }
  return;
}

