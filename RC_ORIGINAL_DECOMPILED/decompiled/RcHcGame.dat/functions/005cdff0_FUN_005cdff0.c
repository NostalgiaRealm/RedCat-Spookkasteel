/*
 * FUN_005cdff0 at 005cdff0
 * undefined FUN_005cdff0(void)
 * Address ranges: 005cdff0-005ce184
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005cdff0(int param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iStack00000008;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20 [8];
  
  iVar5 = 0;
  iVar6 = *(int *)(param_2 + 0x3b0) + 0x3f8;
  iVar4 = 0x20;
  puVar8 = param_3 + 3;
  do {
    puVar9 = puVar8;
    if (*(int *)(iVar6 + -0x14) != 0) {
      FUN_005b2fe0(&local_2c);
      fVar1 = local_2c * local_2c + local_28 * local_28 + local_24 * local_24;
      puVar8[3] = fVar1;
      if (fVar1 < *(float *)(iVar6 + 0xc) * *(float *)(iVar6 + 0xc)) {
        iVar5 = iVar5 + 1;
        *puVar8 = *(undefined4 *)(iVar6 + -0x10);
        puVar8[1] = *(undefined4 *)(iVar6 + -0xc);
        puVar8[2] = *(undefined4 *)(iVar6 + -8);
        puVar8[4] = *(undefined4 *)(iVar6 + 0xc);
        puVar8[-3] = local_2c;
        puVar9 = puVar8 + 8;
        puVar8[-2] = local_28;
        puVar8[-1] = local_24;
      }
    }
    iVar6 = iVar6 + 0x34;
    iVar4 = iVar4 + -1;
    puVar8 = puVar9;
  } while (iVar4 != 0);
  iStack00000008 = iVar5;
  if (0 < iVar5) {
    do {
      iVar6 = iVar5 + -1;
      puVar8 = param_3;
      if (0 < iVar6) {
        do {
          puVar9 = puVar8 + 8;
          if ((float)puVar8[0xe] < (float)puVar8[6]) {
            puVar7 = puVar8;
            puVar10 = local_20;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar10 = puVar10 + 1;
            }
            puVar7 = puVar9;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            puVar8 = local_20;
            puVar7 = puVar9;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar6 = iVar6 + -1;
          puVar8 = puVar9;
        } while (iVar6 != 0);
      }
      iStack00000008 = iStack00000008 + -1;
    } while (iStack00000008 != 0);
  }
  if (*(int *)(param_1 + 0x10) < iVar5) {
    iVar5 = *(int *)(param_1 + 0x10);
  }
  if (0 < iVar5) {
    pfVar3 = (float *)(param_3 + 2);
    iVar6 = iVar5;
    do {
      fVar1 = SQRT(pfVar3[4]);
      if (fVar1 < 1.0) {
        fVar1 = 1.0;
      }
      fVar2 = 1.0 / fVar1;
      iVar6 = iVar6 + -1;
      pfVar3[-2] = fVar2 * pfVar3[-2];
      pfVar3[-1] = fVar2 * pfVar3[-1];
      *pfVar3 = fVar2 * *pfVar3;
      pfVar3[4] = fVar1;
      fVar1 = (1.0 - fVar1 / pfVar3[5]) * 0.003921569;
      pfVar3[1] = fVar1 * pfVar3[1];
      pfVar3[2] = fVar1 * pfVar3[2];
      pfVar3[3] = fVar1 * pfVar3[3];
      pfVar3 = pfVar3 + 8;
    } while (iVar6 != 0);
  }
  return iVar5;
}

