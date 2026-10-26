/*
 * FUN_10006560 at 10006560
 * undefined __fastcall FUN_10006560(int * param_1)
 * Address ranges: 10006560-100065d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10006560(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    FUN_10005fc0((byte *)s_____Deleting_Misc_Poly_s_cache___100189a0);
    iVar2 = 0;
    if (0 < param_1[2]) {
      iVar1 = 0;
      do {
        FUN_100061a0((int *)(iVar1 + param_1[1]));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x34;
      } while (iVar2 < param_1[2]);
    }
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      FUN_1000925e(iVar2,0x34,*(int *)(iVar2 + -4),&LAB_100060c0);
      FUN_10008dfb((LPVOID)(iVar2 + -4));
    }
    FUN_10005fc0((byte *)s_____Misc_Poly_s_cache_Deleted_100189cc);
    *param_1 = 1;
  }
  return;
}

