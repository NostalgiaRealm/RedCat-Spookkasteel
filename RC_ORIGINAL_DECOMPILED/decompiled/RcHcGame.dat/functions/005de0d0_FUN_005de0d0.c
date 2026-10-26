/*
 * FUN_005de0d0 at 005de0d0
 * undefined FUN_005de0d0(void)
 * Address ranges: 005de0d0-005de38e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_005de0d0(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  int local_18;
  
  iVar5 = FUN_005cd390(4);
  if (iVar5 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x2a7,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (local_18 < 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x2ac,
                 &DAT_006b3f70,0);
    return 0;
  }
  puVar6 = (uint *)FUN_005cf3b0(local_18);
  iVar5 = FUN_005cd390(local_18);
  if (iVar5 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x2b3,
                 &DAT_006b3f70,0);
    return 0;
  }
  uVar9 = *puVar6;
  *param_2 = uVar9 >> 0x10 & 0xff;
  *param_3 = uVar9 & 1;
  uVar11 = puVar6[1];
  if ((uVar9 >> 8 & 0xff) < 0x100) {
    uVar1 = *param_2;
    if (uVar1 == 0) {
      iVar5 = 0x10;
    }
    else {
      if (((int)uVar1 < 1) || (2 < (int)uVar1)) {
        FUN_005cf400(puVar6);
        _DAT_007203c0 = 0;
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x2cd,
                     &DAT_006b3f70,0);
        return 0;
      }
      iVar5 = 0x28;
    }
    iVar7 = FUN_005de3d0();
    if (iVar7 != 0) {
      pfVar12 = (float *)(puVar6 + 2);
      pfVar8 = (float *)FUN_005de6a0();
      if ((uVar9 & 0x200) == 0) {
        uVar9 = uVar11;
        pfVar10 = pfVar8;
        if (0 < (int)uVar11) {
          do {
            fVar2 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            *pfVar10 = fVar2;
            pfVar10 = (float *)((int)pfVar10 + iVar5);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else {
        fVar2 = *pfVar12;
        fVar4 = 0.0;
        fVar3 = (float)puVar6[3];
        pfVar12 = (float *)(puVar6 + 4);
        pfVar10 = pfVar8;
        if (0.0 < (float)(int)uVar11) {
          do {
            *pfVar10 = fVar4 * fVar3 + fVar2;
            pfVar10 = (float *)((int)pfVar10 + iVar5);
            fVar4 = fVar4 + 1.0;
          } while (fVar4 < (float)(int)uVar11);
        }
      }
      if (0 < (int)uVar11) {
        pfVar8 = pfVar8 + 1;
        do {
          uVar11 = uVar11 - 1;
          *pfVar8 = *pfVar12;
          pfVar8[1] = pfVar12[1];
          pfVar8[2] = pfVar12[2];
          pfVar8 = (float *)((int)pfVar8 + iVar5);
          pfVar12 = pfVar12 + 3;
        } while (uVar11 != 0);
      }
      if ((*param_2 == 1) || (*param_2 == 2)) {
        FUN_005dd830(iVar7);
      }
      FUN_005cf400(puVar6);
      _DAT_007203c0 = 0;
      return iVar7;
    }
    FUN_005cf400(puVar6);
    _DAT_007203c0 = 0;
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x2d5,
                 &DAT_006b3f70,0);
    return 0;
  }
  FUN_005cf400(puVar6);
  _DAT_007203c0 = 0;
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b083c,0x2bf,
               &DAT_006b3f70,0);
  return 0;
}

