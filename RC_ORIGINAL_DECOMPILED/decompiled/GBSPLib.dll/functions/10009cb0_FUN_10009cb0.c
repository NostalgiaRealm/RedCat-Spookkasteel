/*
 * FUN_10009cb0 at 10009cb0
 * undefined FUN_10009cb0(void)
 * Address ranges: 10009cb0-10009f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10009cb0(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  float10 fVar16;
  byte *local_184;
  int local_180;
  float local_17c;
  undefined1 local_168 [12];
  float local_15c [3];
  undefined1 local_150 [12];
  byte local_144 [324];
  
  fVar1 = *(float *)(param_2 + 0x40);
  fVar2 = *(float *)(param_2 + 0x38);
  fVar3 = *(float *)(param_2 + 0x44);
  fVar4 = *(float *)(param_2 + 0x3c);
  iVar13 = 3;
  pfVar7 = (float *)(param_1 + 0x18);
  pfVar9 = local_15c;
  do {
    iVar13 = iVar13 + -1;
    *pfVar9 = *pfVar7 * (fVar1 + fVar2) * 0.5 + pfVar7[3] * (fVar3 + fVar4) * 0.5 + pfVar7[6];
    pfVar7 = pfVar7 + 1;
    pfVar9 = pfVar9 + 1;
  } while (iVar13 != 0);
  iVar13 = *(int *)(param_2 + 0x50);
  iVar10 = *(int *)(param_2 + 0x58) + 1;
  local_17c = (float)(*(int *)(param_2 + 0x5c) + 1);
  pfVar7 = *(float **)(param_1 + 0x3c);
  pbVar11 = local_144;
  iVar15 = *(int *)(param_2 + 0x54);
  *(int *)(param_1 + 0x40) = (int)local_17c * iVar10;
  if (0 < (int)local_17c) {
    local_184 = (byte *)0x0;
    do {
      if (0 < iVar10) {
        local_180 = 0;
        iVar12 = iVar10;
        pfVar9 = pfVar7;
        do {
          iVar8 = 3;
          pfVar6 = (float *)(param_1 + 0x18);
          pfVar14 = pfVar9;
          do {
            pfVar7 = pfVar14 + 1;
            iVar8 = iVar8 + -1;
            *pfVar14 = *pfVar6 * ((float)local_180 + ((float)iVar13 + param_3) * 16.0) +
                       pfVar6[3] * ((float)(int)local_184 + ((float)iVar15 + param_4) * 16.0) +
                       pfVar6[6];
            pfVar6 = pfVar6 + 1;
            pfVar14 = pfVar7;
          } while (iVar8 != 0);
          iVar8 = FUN_1000a690(0,pfVar9);
          uVar5 = *(uint *)(DAT_1014e258 + iVar8 * 0x3c);
          *pbVar11 = (byte)uVar5 & 1;
          if (((DAT_10037ad4 == 0) && ((uVar5 & 1) != 0)) &&
             (iVar8 = FUN_1000a1c0(local_15c,pfVar9,local_150), iVar8 != 0)) {
            FUN_10014560(local_168);
            FUN_100144b0();
            FUN_10014580(pfVar9);
          }
          local_180 = local_180 + 0x10;
          pbVar11 = pbVar11 + 1;
          iVar12 = iVar12 + -1;
          pfVar9 = pfVar7;
        } while (iVar12 != 0);
      }
      local_184 = (byte *)((int)local_184 + 0x10);
      local_17c = (float)((int)local_17c + -1);
    } while (local_17c != 0.0);
  }
  if (DAT_10037ad4 != 0) {
    iVar13 = *(int *)(param_1 + 0x40);
    pfVar7 = *(float **)(param_1 + 0x3c);
    local_184 = local_144;
    local_180 = 0;
    if (0 < iVar13) {
      do {
        if (*local_184 != 0) {
          pfVar6 = *(float **)(param_1 + 0x3c);
          iVar15 = 0;
          pfVar9 = local_15c;
          local_17c = 15192.0;
          if (0 < iVar13) {
            do {
              if ((pfVar7 != pfVar6) && (local_144[iVar15] == 0)) {
                FUN_10014560(local_168);
                fVar16 = (float10)FUN_10014550();
                if ((fVar16 < (float10)local_17c) &&
                   (local_17c = (float)fVar16, pfVar9 = pfVar6, fVar16 <= (float10)15.9)) break;
              }
              iVar15 = iVar15 + 1;
              pfVar6 = pfVar6 + 3;
            } while (iVar15 < *(int *)(param_1 + 0x40));
          }
          *pfVar7 = *pfVar9;
          pfVar7[1] = pfVar9[1];
          pfVar7[2] = pfVar9[2];
        }
        iVar13 = *(int *)(param_1 + 0x40);
        local_180 = local_180 + 1;
        pfVar7 = pfVar7 + 3;
        local_184 = local_184 + 1;
      } while (local_180 < iVar13);
    }
  }
  return;
}

