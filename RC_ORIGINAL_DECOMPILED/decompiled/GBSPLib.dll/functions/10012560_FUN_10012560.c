/*
 * FUN_10012560 at 10012560
 * undefined FUN_10012560(void)
 * Address ranges: 10012560-1001266b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10012560(float *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float10 extraout_ST0;
  
  iVar3 = 3;
  pfVar4 = param_1;
  do {
    iVar1 = __ftol();
    if (ABS(extraout_ST0 - (float10)iVar1) < (float10)0.009999999776482582) {
      *pfVar4 = (float)iVar1;
    }
    pfVar4 = pfVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = FUN_100124f0(param_1);
  if (iVar3 != -1) {
    iVar1 = *(int *)(&DAT_104d98a8 + iVar3 * 4);
    iVar2 = DAT_1041e090;
    while( true ) {
      DAT_1041e090 = iVar2;
      if (iVar1 == 0) {
        if (iVar2 < 64000) {
          iVar1 = iVar2 * 0xc;
          *(float *)(&DAT_1041e0a8 + iVar1) = *param_1;
          *(float *)(&DAT_1041e0ac + iVar1) = param_1[1];
          *(float *)(&DAT_1041e0b0 + iVar1) = param_1[2];
          *(undefined4 *)(&DAT_103a007c + iVar2 * 4) = *(undefined4 *)(&DAT_104d98a8 + iVar3 * 4);
          *(int *)(&DAT_104d98a8 + iVar3 * 4) = iVar2;
          DAT_1041e090 = iVar2 + 1;
          return iVar2;
        }
        (*DAT_1014e358)(s_WeldVert__Max_welded_verts__10039fa8);
        return -1;
      }
      if (63999 < iVar1) {
        (*DAT_1014e358)(s_WeldVert__Invalid_hash_vert__10039f88);
        return -1;
      }
      iVar2 = FUN_10014450(0x3dcccccd);
      if (iVar2 != 0) break;
      iVar1 = *(int *)(&DAT_103a007c + iVar1 * 4);
      iVar2 = DAT_1041e090;
    }
    return iVar1;
  }
  return -1;
}

