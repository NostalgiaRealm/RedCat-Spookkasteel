/*
 * FUN_10003f90 at 10003f90
 * undefined4 __stdcall FUN_10003f90(void)
 * Address ranges: 10003f90-1000420b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003f90(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  FUN_10005fc0((byte *)s_____D3DMain_GetSurfaceFormats____100177cc);
  DAT_10024724 = 0;
  iVar1 = (**(code **)(*DAT_1001bcd0 + 0x10))(DAT_1001bcd0,&LAB_10002e20,0);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_10002700(s_Main_EnumTextureFormats__Enumera_10017334);
    FUN_10005fc0((byte *)s_D3DMain_GetSurfaceFormats__Main__100177f0);
    return 0;
  }
  DAT_10020520 = (int *)0x0;
  iVar1 = (**(code **)(*DAT_1001bcb0 + 0x24))(DAT_1001bcb0,0x11,0,0,&LAB_10002ef0);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_10002700(s_Main_EnumSurfaceFormats__Enumera_1001737c);
    FUN_10005fc0((byte *)s_D3DMain_GetSurfaceFormats__Main__10017830);
    return 0;
  }
  piVar5 = (int *)0x0;
  if (0 < (int)DAT_10020520) {
    piVar2 = &DAT_10020588;
LAB_10004049:
    if ((((piVar2[-4] != DAT_1001b448) || (*piVar2 != DAT_1001b458)) || (piVar2[-3] != DAT_1001b44c)
        ) || ((piVar2[-2] != DAT_1001b450 || (piVar2[-1] != DAT_1001b454)))) goto LAB_1000406d;
    puVar3 = (undefined4 *)(&DAT_10020524 + (int)piVar5 * 0x84);
    puVar6 = &DAT_1001bcec;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
  }
LAB_10004099:
  if (piVar5 == DAT_10020520) {
    FUN_10002700(s_D3DMain_GetSurfaceFormats__Unabl_10017870);
    return 0;
  }
  iVar1 = 0;
  piVar5 = DAT_10020520;
  if (0 < DAT_10024724) {
    piVar5 = &DAT_100247a4;
LAB_100040c7:
    if (*piVar5 != 1) goto code_r0x100040cb;
    puVar3 = &DAT_10024728 + iVar1 * 0x21;
    puVar6 = &DAT_1001be60;
    for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    piVar5 = (int *)0x0;
  }
LAB_100040f8:
  if (iVar1 == DAT_10024724) {
    FUN_10002700(s_D3DMain_GetSurfaceFormats__Unabl_100178d0);
    return 0;
  }
  iVar1 = 0;
  if (0 < DAT_10024724) {
    piVar5 = &DAT_100247a8;
LAB_1000411b:
    if (*piVar5 != 1) goto code_r0x1000411f;
    puVar3 = &DAT_10024728 + iVar1 * 0x21;
    puVar6 = &DAT_1001bde4;
    for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    piVar5 = (int *)0x0;
  }
LAB_1000414c:
  if (iVar1 == DAT_10024724) {
    FUN_10002700(s_D3DMain_GetSurfaceFormats__Unabl_10017914);
    return 0;
  }
  iVar1 = 0;
  if (0 < DAT_10024724) {
    puVar3 = &DAT_10024780;
    do {
      if ((((((puVar3[9] != 1) && (puVar3[10] != 1)) &&
            (((*(byte *)(puVar3 + -3) & 1) == 0 && (puVar3[-1] == 0x10)))) &&
           ((piVar5 = (int *)*puVar3, piVar5 == (int *)0xf800 || (piVar5 == (int *)0x7c00)))) &&
          ((piVar5 = (int *)puVar3[1], piVar5 == (int *)0x7e0 || (piVar5 == (int *)0x3e0)))) &&
         (piVar5 = (int *)0x1f, puVar3[2] == 0x1f)) {
        puVar3 = &DAT_10024728 + iVar1 * 0x21;
        puVar6 = &DAT_1001bd68;
        for (; piVar5 != (int *)0x0; piVar5 = (int *)((int)piVar5 + -1)) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        piVar5 = (int *)0x0;
        break;
      }
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 0x21;
    } while (iVar1 < DAT_10024724);
  }
  if (iVar1 != DAT_10024724) {
    FUN_10004380(piVar5,1.9);
    return 1;
  }
  FUN_10002700(s_D3DMain_GetSurfaceFormats__Unabl_10017958);
  return 0;
LAB_1000406d:
  piVar5 = (int *)((int)piVar5 + 1);
  piVar2 = piVar2 + 0x21;
  if ((int)DAT_10020520 <= (int)piVar5) goto LAB_10004099;
  goto LAB_10004049;
code_r0x100040cb:
  iVar1 = iVar1 + 1;
  piVar5 = piVar5 + 0x21;
  if (DAT_10024724 <= iVar1) goto LAB_100040f8;
  goto LAB_100040c7;
code_r0x1000411f:
  iVar1 = iVar1 + 1;
  piVar5 = piVar5 + 0x21;
  if (DAT_10024724 <= iVar1) goto LAB_1000414c;
  goto LAB_1000411b;
}

