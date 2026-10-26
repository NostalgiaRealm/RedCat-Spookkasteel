/*
 * FUN_005ba750 at 005ba750
 * undefined FUN_005ba750(void)
 * Address ranges: 005ba750-005babcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ba750(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int iStack00000004;
  int in_stack_00001b48;
  
  FUN_0060df70();
  iVar5 = in_stack_00001b48 * 0x88;
  if (*(int *)(iVar5 + 0x14 + DAT_006cc408) != -1) {
    uVar2 = *(uint *)(iVar5 + 0x84 + DAT_006cc408);
    piVar1 = (int *)(*(int *)(DAT_006cc420 + 0x68) + in_stack_00001b48 * 0x24);
    iVar9 = *(int *)(DAT_006cc420 + 0x74);
    iVar3 = piVar1[1];
    puVar12 = (undefined4 *)(piVar1[4] * 0x40 + *(int *)(DAT_006cc420 + 0x88));
    if ((((uVar2 & 1) == 0) || ((*(byte *)(puVar12 + 10) & 1) != 0)) ||
       (10.0 <= (float)puVar12[0xd])) {
      uVar4 = puVar12[10];
      puVar8 = (uint *)(*(int *)(DAT_006cc420 + 0x78) + *piVar1 * 4);
      if ((uVar2 & 8) == 0) {
        if (0 < iVar3) {
          puVar7 = (undefined4 *)&stack0x00000048;
          iVar6 = iVar3;
          do {
            puVar7[-2] = *(undefined4 *)(iVar9 + *puVar8 * 0xc);
            puVar7[-1] = *(undefined4 *)(iVar9 + 4 + *puVar8 * 0xc);
            *puVar7 = *(undefined4 *)(iVar9 + 8 + *puVar8 * 0xc);
            iVar6 = iVar6 + -1;
            puVar7 = puVar7 + 3;
            puVar8 = puVar8 + 1;
          } while (iVar6 != 0);
        }
      }
      else if (0 < iVar3) {
        pfVar13 = (float *)&stack0x00000048;
        iVar6 = iVar3;
        do {
          iVar10 = *(short *)(DAT_006cc418 + 0x34f98 + (*puVar8 & 0xf) * 2) + -0x4b;
          pfVar13[-2] = (float)(iVar10 / 0x19) + *(float *)(iVar9 + *puVar8 * 0xc);
          pfVar13[-1] = *(float *)(iVar9 + 4 + *puVar8 * 0xc);
          iVar6 = iVar6 + -1;
          *pfVar13 = (float)(iVar10 / 0x14) + *(float *)(iVar9 + 8 + *puVar8 * 0xc);
          puVar8 = puVar8 + 1;
          pfVar13 = pfVar13 + 3;
        } while (iVar6 != 0);
      }
      if (2 < iVar3) {
        FUN_005d40a0();
        FUN_005d46f0();
        FUN_0059be40();
        FUN_005b3050();
        if (piVar1[3] != 0) {
          FUN_005b3080();
        }
        FUN_005d3fa0();
        FUN_005b34f0();
        if ((uVar4 & 4) != 0) {
          FUN_005d08f0();
          FUN_005bb340();
          return;
        }
        FUN_005d14d0();
        FUN_005d46d0();
        *(int *)(DAT_006cc418 + 0x33684) = *(int *)(DAT_006cc418 + 0x33684) + 1;
        if (((*(byte *)(iVar5 + 0x84 + DAT_006cc408) & 1) == 0) ||
           ((*(byte *)(puVar12 + 10) & 1) != 0)) {
          _DAT_00722860 = *puVar12;
          _DAT_00722864 = puVar12[1];
          _DAT_00722868 = puVar12[2];
          _DAT_0072286c = puVar12[3];
          _DAT_00722870 = puVar12[4];
          _DAT_00722874 = puVar12[5];
          _DAT_00722888 = puVar12[6];
          _DAT_0072288c = puVar12[7];
          FUN_00453600();
          (**(code **)(DAT_006cc410 + 0x7c))();
        }
        else if ((*(int *)(&DAT_00747b40 + DAT_00722f24 * 4) +
                  *(int *)(&DAT_00722840 + DAT_00722f24 * 4) + 1 < 0x100) && (iVar3 < 0x11)) {
          iVar5 = (*(int *)(&DAT_00747b40 + DAT_00722f24 * 4) +
                  *(int *)(&DAT_00722840 + DAT_00722f24 * 4)) * 0x24c;
          puVar12 = (undefined4 *)(&DAT_00722f4c + iVar5);
          if (0 < iVar3) {
            puVar7 = (undefined4 *)&stack0x00000640;
            iStack00000004 = iVar3;
            do {
              puVar11 = puVar7;
              puVar14 = puVar12;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar14 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar14 = puVar14 + 1;
              }
              puVar12 = puVar12 + 9;
              iStack00000004 = iStack00000004 + -1;
              puVar7 = puVar7 + 9;
            } while (iStack00000004 != 0);
          }
          *(undefined4 *)(&DAT_00722f40 + iVar5) = 0;
          *(int *)(&DAT_00722f44 + iVar5) = in_stack_00001b48;
          *(int *)(&DAT_00722f48 + iVar5) = iVar3;
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

