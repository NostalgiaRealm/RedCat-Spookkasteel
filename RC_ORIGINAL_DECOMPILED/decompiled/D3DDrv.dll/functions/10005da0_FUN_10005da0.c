/*
 * FUN_10005da0 at 10005da0
 * undefined8 __cdecl FUN_10005da0(int param_1, int param_2, int param_3, undefined4 param_4)
 * Address ranges: 10005da0-10005f7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl FUN_10005da0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if ((0x3ff < DAT_10116d84 + param_2) || (0xff < DAT_10116d80 + 1)) {
    FUN_10005b40();
  }
  iVar5 = FUN_10006880(param_1,param_2,(float)*(int *)(param_3 + 4),(float)*(int *)(param_3 + 8),
                       (float)(*(byte *)(param_3 + 0x10) - 1));
  iVar1 = DAT_10116d80 * 0x18;
  *(int *)(&DAT_1010b180 + iVar1) = param_3;
  *(undefined4 *)(&DAT_1010b184 + iVar1) = param_4;
  iVar2 = DAT_10116d84;
  *(int *)(&DAT_1010b190 + iVar1) = param_2;
  *(int *)(&DAT_1010b18c + iVar1) = iVar2;
  *(int *)(&DAT_1010b188 + iVar1) = iVar5;
  *(uint *)(&DAT_1010b194 + iVar1) = (param_3 + -0x10127268 >> 1 & 0xfffffff0U) + iVar5;
  fVar4 = 1.0 / (float)(1 << (*(byte *)(param_3 + 0x11) & 0x1f));
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = *(int *)(param_3 + 8);
  lVar10 = __ftol();
  uVar7 = (undefined4)((ulonglong)lVar10 >> 0x20);
  pfVar8 = (float *)(&DAT_1010cd80 + DAT_10116d84 * 0x28);
  if (0 < param_2) {
    pfVar9 = (float *)(param_1 + 0x10);
    param_3 = param_2;
    do {
      fVar3 = pfVar9[-2];
      *pfVar8 = pfVar9[-4];
      pfVar8[1] = pfVar9[-3];
      pfVar8[2] = 1.0 - 1.0 / fVar3;
      pfVar8[3] = 1.0 / fVar3;
      fVar3 = *pfVar9;
      pfVar8[6] = (float)iVar1 * fVar4 * pfVar9[-1];
      pfVar8[7] = (float)iVar2 * fVar4 * fVar3;
      lVar11 = __ftol();
      lVar12 = __ftol();
      lVar13 = __ftol();
      uVar7 = (undefined4)((ulonglong)lVar13 >> 0x20);
      pfVar8[4] = (float)(((int)lVar11 << 8 | (uint)lVar12) << 8 | (uint)lVar13 |
                         (int)lVar10 << 0x18);
      if (DAT_10038e78 == 0) {
        pfVar8[5] = 0.0;
      }
      else {
        lVar11 = __ftol();
        uVar7 = (undefined4)((ulonglong)lVar11 >> 0x20);
        uVar6 = (uint)lVar11;
        if (0xff < uVar6) {
          uVar6 = 0xff;
        }
        pfVar8[5] = (float)(uVar6 << 0x18);
      }
      pfVar9 = pfVar9 + 9;
      pfVar8 = pfVar8 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  DAT_10116d80 = DAT_10116d80 + 1;
  DAT_10116d84 = DAT_10116d84 + param_2;
  return CONCAT44(uVar7,1);
}

