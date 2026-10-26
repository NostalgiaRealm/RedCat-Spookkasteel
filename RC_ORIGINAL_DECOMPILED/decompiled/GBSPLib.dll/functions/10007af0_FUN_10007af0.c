/*
 * FUN_10007af0 at 10007af0
 * undefined FUN_10007af0(void)
 * Address ranges: 10007af0-10007c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007af0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  iVar7 = 1;
  if (1 < DAT_1003fdf4) {
    piVar6 = &DAT_100dc3b8;
    do {
      if (piVar6[-1] != 0) {
        if (*piVar6 == 0) {
          pcVar9 = s__WARNING__FinishAreas__AreaPorta_100379c4;
        }
        else {
          if (piVar6[1] != 0) goto LAB_10007b30;
          pcVar9 = s__WARNING__FinishAreas__AreaPorta_10037988;
        }
        (*DAT_1014e35c)(pcVar9);
      }
LAB_10007b30:
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 0x39;
    } while (iVar7 < DAT_1003fdf4);
  }
  DAT_1014e2dc = 0;
  iVar7 = 1;
  DAT_1014e250[1] = 0;
  *DAT_1014e250 = 0;
  piVar6 = DAT_1014e250;
  if (1 < DAT_1014e2a4) {
    do {
      iVar8 = 1;
      piVar6[3] = DAT_1014e2dc;
      iVar4 = DAT_1014e2dc;
      if (1 < DAT_1003fdf4) {
        piVar5 = &DAT_100dc3bc;
        do {
          iVar2 = piVar5[-1];
          iVar3 = *piVar5;
          if ((((iVar2 != 0) && (iVar3 != 0)) && (iVar2 != iVar3)) &&
             ((iVar2 == iVar7 || (iVar3 == iVar7)))) {
            if (0x3ff < iVar4) {
              (*DAT_1014e358)(s_FinishAreas__Max_area_portals__10037964);
              return 0;
            }
            piVar1 = (int *)(DAT_1014e294 + iVar4 * 8);
            if (iVar2 == iVar7) {
              piVar1[1] = iVar3;
            }
            else if (iVar3 == iVar7) {
              piVar1[1] = iVar2;
            }
            *piVar1 = iVar8;
            iVar4 = DAT_1014e2dc + 1;
            DAT_1014e2dc = iVar4;
          }
          iVar8 = iVar8 + 1;
          piVar5 = piVar5 + 0x39;
        } while (iVar8 < DAT_1003fdf4);
      }
      iVar7 = iVar7 + 1;
      piVar6[2] = iVar4 - piVar6[3];
      piVar6 = piVar6 + 2;
    } while (iVar7 < DAT_1014e2a4);
  }
  return 1;
}

