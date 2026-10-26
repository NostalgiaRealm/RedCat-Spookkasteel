/*
 * FUN_005babd0 at 005babd0
 * undefined FUN_005babd0(void)
 * Address ranges: 005babd0-005bb331
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005babd0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  uint uStack00000004;
  uint uStack00000010;
  int in_stack_000006a4;
  int in_stack_000021ac;
  int in_stack_000021b0;
  uint in_stack_000021b4;
  
  FUN_0060df70();
  piVar5 = *(int **)(in_stack_000021b0 + 4);
  iVar2 = in_stack_000021ac * 0x88;
  if (*(int *)(iVar2 + 0x14 + DAT_006cc408) != -1) {
    iVar3 = *(int *)(DAT_006cc420 + 0x74);
    piVar1 = (int *)(*(int *)(DAT_006cc420 + 0x68) + in_stack_000021ac * 0x24);
    uVar11 = piVar1[1];
    puVar9 = (undefined4 *)(piVar1[4] * 0x40 + *(int *)(DAT_006cc420 + 0x88));
    uStack00000010 = *(uint *)(iVar2 + 0x84 + DAT_006cc408);
    if ((((uStack00000010 & 1) == 0) || ((*(byte *)(puVar9 + 10) & 1) != 0)) ||
       (10.0 <= (float)puVar9[0xd])) {
      uVar8 = puVar9[10];
      puVar6 = (uint *)(*(int *)(DAT_006cc420 + 0x78) + *piVar1 * 4);
      if ((uStack00000010 & 8) == 0) {
        if (0 < (int)uVar11) {
          puVar4 = (undefined4 *)&stack0x000000ac;
          uVar7 = uVar11;
          do {
            uVar7 = uVar7 - 1;
            puVar4[-2] = *(undefined4 *)(iVar3 + *puVar6 * 0xc);
            puVar4[-1] = *(undefined4 *)(iVar3 + 4 + *puVar6 * 0xc);
            *puVar4 = *(undefined4 *)(iVar3 + 8 + *puVar6 * 0xc);
            puVar4 = puVar4 + 3;
            puVar6 = puVar6 + 1;
          } while (uVar7 != 0);
        }
      }
      else if (0 < (int)uVar11) {
        pfVar13 = (float *)&stack0x000000ac;
        uStack00000004 = uVar11;
        do {
          iVar10 = *(short *)(DAT_006cc418 + 0x34f98 + (*puVar6 & 0xf) * 2) + -0x4b;
          uStack00000010 = iVar10 / 0x19;
          pfVar13[-2] = (float)(int)uStack00000010 + *(float *)(iVar3 + *puVar6 * 0xc);
          pfVar13[-1] = *(float *)(iVar3 + 4 + *puVar6 * 0xc);
          uStack00000004 = uStack00000004 - 1;
          *pfVar13 = (float)(iVar10 / 0x14) + *(float *)(iVar3 + 8 + *puVar6 * 0xc);
          puVar6 = puVar6 + 1;
          pfVar13 = pfVar13 + 3;
        } while (uStack00000004 != 0);
      }
      puVar14 = &stack0x000000a4;
      if ((in_stack_000021b4 != 0) && (uStack00000004 = 0, 0 < *piVar5)) {
        do {
          if ((in_stack_000021b4 & 1 << ((byte)uStack00000004 & 0x1f)) != 0) {
            if ((uVar8 & 0x20) == 0) {
              iVar3 = FUN_005d0d60();
            }
            else {
              iVar3 = FUN_005d0f10();
            }
            if (iVar3 == 0) {
              return;
            }
            uVar11 = uStack00000010;
            if (puVar14 == &stack0x000003a4) {
              puVar14 = &stack0x000000a4;
            }
            else {
              puVar14 = &stack0x000003a4;
            }
          }
          uStack00000004 = uStack00000004 + 1;
        } while ((int)uStack00000004 < *piVar5);
      }
      if (2 < (int)uVar11) {
        FUN_005d40a0();
        FUN_005d46f0();
        FUN_0059be40();
        FUN_005b34f0();
        if ((uVar8 & 4) != 0) {
          FUN_005d08f0();
          FUN_005bb340();
          return;
        }
        if ((uVar8 & 0x20) == 0) {
          FUN_005d16c0();
          if (0 < (int)uVar11) {
            puVar4 = (undefined4 *)&stack0x00000cc0;
            uVar7 = uVar11;
            do {
              puVar4[-1] = 0x437f0000;
              *puVar4 = 0x437f0000;
              puVar4[1] = 0x437f0000;
              puVar4 = puVar4 + 9;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
        }
        else {
          FUN_005d14d0();
        }
        if ((((uVar8 & 1) != 0) && (DAT_006cc3fc != 0)) && (DAT_00722f24 < 1)) {
          iVar3 = FUN_005d08f0();
          if (iVar3 == 0) {
            return;
          }
          if (0x1f < in_stack_000006a4 + 1) {
            return;
          }
          FUN_005d1840();
          if (piVar1[3] != 0) {
            FUN_005b3080();
          }
          puVar4 = (undefined4 *)FUN_005c9470();
          puVar12 = (undefined4 *)&stack0x00000044;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar12 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar12 = puVar12 + 1;
          }
          FUN_005b3940();
          FUN_005c9420();
          DAT_00722f24 = DAT_00722f24 + 1;
          piVar5 = (int *)FUN_005bb560();
          *piVar5 = *piVar5 + 1;
          FUN_005bb550();
          *(int *)(DAT_006cc418 + 0x33694) = *(int *)(DAT_006cc418 + 0x33694) + 1;
          FUN_005b88d0();
          DAT_00722f24 = DAT_00722f24 + -1;
          FUN_005c9420();
        }
        FUN_005d46d0();
        *(int *)(DAT_006cc418 + 0x33684) = *(int *)(DAT_006cc418 + 0x33684) + 1;
        if (((*(byte *)(iVar2 + 0x84 + DAT_006cc408) & 1) == 0) ||
           ((*(byte *)(puVar9 + 10) & 1) != 0)) {
          _DAT_00722860 = *puVar9;
          _DAT_00722864 = puVar9[1];
          _DAT_00722868 = puVar9[2];
          _DAT_0072286c = puVar9[3];
          _DAT_00722870 = puVar9[4];
          _DAT_00722874 = puVar9[5];
          _DAT_00722888 = puVar9[6];
          _DAT_0072288c = puVar9[7];
          FUN_00453600();
          if ((puVar9[10] & 0x8000) == 0) {
            _DAT_00722878 = *(undefined4 *)(iVar2 + 4 + DAT_006cc408);
            _DAT_0072287c = *(undefined4 *)(iVar2 + 8 + DAT_006cc408);
            _DAT_00722880 = (int)*(short *)(iVar2 + DAT_006cc408) << 4;
            _DAT_00722884 = (int)*(short *)(iVar2 + 2 + DAT_006cc408) << 4;
            iVar2 = FUN_005b7e20();
          }
          else {
            iVar2 = FUN_005b7e20();
          }
          if (iVar2 != 0) {
            (**(code **)(DAT_006cc410 + 0x7c))();
          }
        }
        else if ((*(int *)(&DAT_00747b40 + DAT_00722f24 * 4) +
                  *(int *)(&DAT_00722840 + DAT_00722f24 * 4) + 1 < 0x100) && ((int)uVar11 < 0x11)) {
          iVar2 = (*(int *)(&DAT_00747b40 + DAT_00722f24 * 4) +
                  *(int *)(&DAT_00722840 + DAT_00722f24 * 4)) * 0x24c;
          puVar9 = (undefined4 *)(&DAT_00722f4c + iVar2);
          if (0 < (int)uVar11) {
            puVar4 = (undefined4 *)&stack0x00000ca8;
            uVar8 = uVar11;
            do {
              puVar12 = puVar4;
              puVar15 = puVar9;
              for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar15 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar15 = puVar15 + 1;
              }
              puVar9 = puVar9 + 9;
              uVar8 = uVar8 - 1;
              puVar4 = puVar4 + 9;
            } while (uVar8 != 0);
          }
          *(undefined4 *)(&DAT_00722f40 + iVar2) = 0;
          *(int *)(&DAT_00722f44 + iVar2) = in_stack_000021ac;
          *(uint *)(&DAT_00722f48 + iVar2) = uVar11;
          FUN_005b7e90();
          *(int *)(&DAT_00747b40 + DAT_00722f24 * 4) =
               *(int *)(&DAT_00747b40 + DAT_00722f24 * 4) + 1;
          return;
        }
      }
    }
  }
  return;
}

