/*
 * FUN_005d2020 at 005d2020
 * undefined FUN_005d2020(void)
 * Address ranges: 005d2020-005d2423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d2020(short *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 local_c;
  
  iVar11 = (int)param_1[1];
  iVar4 = *(int *)(DAT_006cefc4 + 0x1c0) + *(int *)(param_1 + 10) * 0x88;
  iVar1 = *(int *)(DAT_006cefcc + 0x68) + *(int *)(param_1 + 10) * 0x24;
  iVar10 = (int)*param_1;
  iVar7 = iVar11 * iVar10;
  iVar12 = *(int *)(iVar1 + 0x14);
  bVar3 = false;
  local_c = 0;
  if (((*(int *)(iVar4 + 0x7c) == *(int *)(DAT_006cefd8 + 4)) &&
      (0 < *(int *)(DAT_006cefd0 + 0xa64))) &&
     ((*(byte *)(*(int *)(iVar1 + 0x10) * 0x40 + 0x28 + *(int *)(DAT_006cefcc + 0x88)) & 2) == 0)) {
    bVar3 = true;
  }
  else if ((*(byte *)(iVar4 + 0x84) & 2) == 0) {
    if (iVar12 < 0) {
      *(undefined **)(param_1 + 6) = &DAT_006cebf8;
    }
    else {
      *(int *)(param_1 + 6) = *(int *)(DAT_006cefcc + 0x94) + 1 + iVar12;
    }
    goto LAB_005d2312;
  }
  *(int *)(DAT_006cefd4 + 0x336b0) = *(int *)(DAT_006cefd4 + 0x336b0) + 1;
  if (iVar12 < 0) {
    puVar13 = &DAT_006cc600;
    for (uVar5 = iVar7 * 3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
      *(undefined1 *)puVar13 = 0;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
  }
  else {
    iVar9 = 0;
    iVar12 = *(int *)(DAT_006cefcc + 0x94) + 1 + iVar12;
    do {
      uVar5 = (uint)*(byte *)(iVar1 + 0x20 + iVar9);
      if (uVar5 == 0xff) break;
      if (*(int *)(DAT_006cefd0 + uVar5 * 4) != 0) {
        local_c = 1;
      }
      if (uVar5 == 0xb) {
        if (iVar9 == 0) {
          FUN_005d37d0();
          local_c = 1;
        }
        else {
          FUN_005d38a0(&DAT_006cc600,iVar12,iVar10,iVar11);
          local_c = 1;
        }
      }
      else if (uVar5 == 0) {
        FUN_005d2fa0(&DAT_006cc600,iVar12,iVar10,iVar11);
      }
      else if (iVar9 == 0) {
        FUN_005d2fe0();
      }
      else {
        FUN_005d2f40(&DAT_006cc600,iVar12,iVar10,iVar11,
                     *(undefined4 *)(DAT_006cefd0 + 0x30 + uVar5 * 4));
      }
      iVar9 = iVar9 + 1;
      iVar12 = iVar7 * 3 + iVar12;
    } while (iVar9 < 4);
  }
  if (bVar3) {
    iVar12 = 0;
    piVar6 = (int *)(DAT_006cefd0 + 0x3e4);
    do {
      if ((*piVar6 != 0) && ((*(uint *)(iVar4 + 0x80) & 1 << ((byte)iVar12 & 0x1f)) != 0)) {
        *(int *)(DAT_006cefd4 + 0x336a0) = *(int *)(DAT_006cefd4 + 0x336a0) + 1;
        if (piVar6[0xc] == 0) {
          iVar10 = FUN_005d3030(&DAT_006cc600,piVar6,iVar1,iVar4);
        }
        else {
          iVar10 = FUN_005d31f0(&DAT_006cc600,piVar6,iVar1);
        }
        if (iVar10 != 0) {
          local_c = 1;
        }
      }
      iVar12 = iVar12 + 1;
      piVar6 = piVar6 + 0xd;
    } while (iVar12 < 0x20);
  }
  piVar6 = &DAT_006cc600;
  if (0 < iVar7) {
    puVar8 = &DAT_006ce82e;
    iVar12 = iVar7;
    do {
      iVar10 = *piVar6 >> 8;
      if (iVar10 < 0x100) {
        if (iVar10 < 0) {
          iVar10 = 0;
        }
      }
      else {
        iVar10 = 0xff;
      }
      puVar8[-2] = (char)iVar10;
      iVar10 = piVar6[1] >> 8;
      if (iVar10 < 0x100) {
        if (iVar10 < 0) {
          iVar10 = 0;
        }
      }
      else {
        iVar10 = 0xff;
      }
      puVar8[-1] = (char)iVar10;
      iVar10 = piVar6[2] >> 8;
      piVar6 = piVar6 + 3;
      if (iVar10 < 0x100) {
        if (iVar10 < 0) {
          iVar10 = 0;
        }
      }
      else {
        iVar10 = 0xff;
      }
      *puVar8 = (char)iVar10;
      puVar8 = puVar8 + 3;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  *(undefined1 **)(param_1 + 6) = &DAT_006ce82c;
LAB_005d2312:
  iVar12 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (DAT_00722f24 == 0) {
    bVar3 = false;
    if ((*(int *)(DAT_006cefd8 + 0xc18) != 0) && (0 < *(int *)(DAT_006cefd8 + 0xc18))) {
      do {
        uVar2 = *(undefined4 *)(DAT_006cefd8 + 0xbe8 + iVar12 * 4);
        if (iVar12 == 0) {
          iVar10 = FUN_005d2430(uVar2,&DAT_006cd530,iVar1);
        }
        else {
          iVar10 = FUN_005d29b0(uVar2,&DAT_006cd530,iVar1,iVar4);
        }
        if (iVar10 != 0) {
          bVar3 = true;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(DAT_006cefd8 + 0xc18));
      if (bVar3) {
        *(int *)(DAT_006cefd4 + 0x336b4) = *(int *)(DAT_006cefd4 + 0x336b4) + 1;
        piVar6 = &DAT_006cd530;
        if (0 < iVar7) {
          puVar8 = &DAT_006ce462;
          do {
            iVar4 = *piVar6 >> 8;
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            puVar8[-2] = (char)iVar4;
            iVar4 = piVar6[1] >> 8;
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            puVar8[-1] = (char)iVar4;
            iVar4 = piVar6[2] >> 8;
            piVar6 = piVar6 + 3;
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            *puVar8 = (char)iVar4;
            puVar8 = puVar8 + 3;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_c = 1;
        *(undefined1 **)(param_1 + 8) = &DAT_006ce460;
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_c;
  }
  return;
}

