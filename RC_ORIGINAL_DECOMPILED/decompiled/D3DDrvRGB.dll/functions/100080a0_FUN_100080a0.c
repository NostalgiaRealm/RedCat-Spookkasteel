/*
 * FUN_100080a0 at 100080a0
 * undefined __fastcall FUN_100080a0(int * param_1)
 * Address ranges: 100080a0-10008117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100080a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    FUN_10005fc0((byte *)s_____Deleting_World_Poly_s_cache___10018c70);
    iVar2 = 0;
    if (0 < param_1[2]) {
      iVar1 = 0;
      do {
        FUN_10007a70((int *)(iVar1 + param_1[1]));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x40;
      } while (iVar2 < param_1[2]);
    }
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      FUN_1000925e(iVar2,0x40,*(int *)(iVar2 + -4),&LAB_10007940);
      FUN_10008dfb((LPVOID)(iVar2 + -4));
    }
    FUN_10005fc0((byte *)s_____World_Poly_s_cache_Deleted_10018c9c);
    *param_1 = 1;
  }
  return;
}

