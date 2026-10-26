/*
 * FUN_10027060 at 10027060
 * undefined FUN_10027060(void)
 * Address ranges: 10027060-1002731e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_10027060(undefined4 param_1,uint *param_2,uint *param_3)

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
  
  iVar5 = FUN_10014a00(4);
  if (iVar5 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x2a6,&DAT_10265ce0,0);
    return 0;
  }
  if (local_18 < 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x2ab,&DAT_10265ce0,0);
    return 0;
  }
  puVar6 = (uint *)FUN_10014310(local_18);
  iVar5 = FUN_10014a00(local_18);
  if (iVar5 == 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x2b2,&DAT_10265ce0,0);
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
        FUN_10014360(puVar6);
        _DAT_1003fde8 = 0;
        FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x2cc,&DAT_10265ce0,0);
        return 0;
      }
      iVar5 = 0x28;
    }
    iVar7 = FUN_10024b80();
    if (iVar7 != 0) {
      pfVar12 = (float *)(puVar6 + 2);
      pfVar8 = (float *)FUN_10024ee0();
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
        FUN_100265e0(iVar7);
      }
      FUN_10014360(puVar6);
      _DAT_1003fde8 = 0;
      return iVar7;
    }
    FUN_10014360(puVar6);
    _DAT_1003fde8 = 0;
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x2d4,&DAT_10265ce0,0);
    return 0;
  }
  FUN_10014360(puVar6);
  _DAT_1003fde8 = 0;
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_vkframe_c_1003c9f4,0x2be,&DAT_10265ce0,0);
  return 0;
}

