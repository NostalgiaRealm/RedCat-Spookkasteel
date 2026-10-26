/*
 * FUN_10005590 at 10005590
 * undefined4 __cdecl FUN_10005590(int param_1, int param_2, int param_3, undefined4 * param_4, undefined4 param_5, uint param_6)
 * Address ranges: 10005590-100057af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_10005590(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,uint param_6
            )

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar5 = param_1;
  if (DAT_101271c8 + param_2 < 0x400) {
    if ((0xff < DAT_101271c0 + 1) && (iVar6 = FUN_100057b0(), iVar6 == 0)) {
      return 0;
    }
  }
  else {
    iVar6 = FUN_100057b0();
    if (iVar6 == 0) {
      return 0;
    }
  }
  fVar1 = (float)param_4[2];
  fVar2 = (float)param_4[3];
  iVar7 = FUN_10006880(param_1,param_2,1.0 / fVar1,1.0 / fVar2,
                       (float)(*(byte *)(param_3 + 0x10) - 1));
  iVar3 = DAT_101271c0;
  iVar6 = DAT_101271c0 * 0x2c;
  (&DAT_10116dc4)[DAT_101271c0 * 0xb] = param_5;
  *(int *)(&DAT_10116dc0 + iVar6) = param_3;
  *(uint *)(&DAT_10116dc8 + iVar6) = param_6;
  iVar4 = DAT_101271c8;
  (&DAT_10116de8)[iVar3 * 0xb] = param_2;
  (&DAT_10116de4)[iVar3 * 0xb] = iVar4;
  *(undefined4 *)(&DAT_10116dcc + iVar6) = *param_4;
  *(undefined4 *)(&DAT_10116dd0 + iVar6) = param_4[1];
  *(int *)(&DAT_10116ddc + iVar6) = iVar7;
  *(float *)(&DAT_10116dd4 + iVar6) = 1.0 / fVar1;
  *(float *)(&DAT_10116dd8 + iVar6) = 1.0 / fVar2;
  *(uint *)(&DAT_10116de0 + iVar6) = (param_3 + -0x10127268 >> 1 & 0xfffffff0U) + iVar7;
  iVar6 = DAT_101271c8;
  pfVar9 = (float *)(&DAT_1011a1c0 + DAT_101271c8 * 0x28);
  pfVar11 = (float *)(&DAT_101241c0 + DAT_101271c8 * 0xc);
  if ((param_6 & 1) == 0) {
    param_4 = (undefined4 *)0xff000000;
  }
  else {
    lVar12 = __ftol();
    param_4 = (undefined4 *)((int)lVar12 << 0x18);
  }
  if (0 < param_2) {
    param_1 = param_2;
    pfVar10 = (float *)(iVar5 + 8);
    do {
      fVar1 = *pfVar10;
      *pfVar9 = pfVar10[-2];
      pfVar9[1] = pfVar10[-1];
      pfVar9[2] = 1.0 - 1.0 / fVar1;
      pfVar9[3] = 1.0 / fVar1;
      if (DAT_10038e78 == 0) {
        pfVar9[5] = 0.0;
      }
      else {
        lVar12 = __ftol();
        uVar8 = (uint)lVar12;
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
        pfVar9[5] = (float)(uVar8 << 0x18);
      }
      *pfVar11 = pfVar10[1];
      pfVar11[1] = pfVar10[2];
      lVar12 = __ftol();
      lVar13 = __ftol();
      lVar14 = __ftol();
      pfVar11[2] = (float)(((int)lVar12 << 8 | (uint)lVar13) << 8 | (uint)lVar14 | (uint)param_4);
      pfVar11 = pfVar11 + 3;
      pfVar10 = pfVar10 + 9;
      pfVar9 = pfVar9 + 10;
      param_1 = param_1 + -1;
      iVar6 = DAT_101271c8;
    } while (param_1 != 0);
  }
  DAT_101271c8 = iVar6 + param_2;
  DAT_101271c0 = DAT_101271c0 + 1;
  return 1;
}

