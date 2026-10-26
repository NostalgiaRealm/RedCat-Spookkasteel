/*
 * FUN_10002ef0 at 10002ef0
 * undefined4 __stdcall FUN_10002ef0(void)
 * Address ranges: 10002ef0-10003120
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002ef0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_100020f0(s_____D3DMain_GetSurfaceFormats____100146a4);
  iVar1 = FUN_10002900();
  if (iVar1 == 0) {
    FUN_100020f0(s_D3DMain_GetSurfaceFormats__Main__10014664);
    return 0;
  }
  iVar1 = FUN_10002af0();
  if (iVar1 == 0) {
    FUN_100020f0(s_D3DMain_GetSurfaceFormats__Main__10014624);
    return 0;
  }
  iVar1 = 0;
  if (0 < DAT_10030a50) {
    piVar2 = &DAT_10030ab8;
LAB_10002f5e:
    if ((((piVar2[-4] != DAT_10027040) || (*piVar2 != DAT_10027050)) || (piVar2[-3] != DAT_10027044)
        ) || ((piVar2[-2] != DAT_10027048 || (piVar2[-1] != DAT_1002704c)))) goto LAB_10002f82;
    puVar4 = (undefined4 *)(&DAT_10030a54 + iVar1 * 0x84);
    puVar5 = &DAT_100274d4;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
LAB_10002fae:
  if (iVar1 == DAT_10030a50) {
    FUN_100020f0(s_D3DMain_GetSurfaceFormats__Unabl_100145c4);
    return 0;
  }
  iVar1 = 0;
  if (0 < DAT_10034c54) {
    piVar2 = &DAT_10034cd4;
LAB_10002fdc:
    if (*piVar2 != 1) goto code_r0x10002fe0;
    puVar4 = &DAT_10034c58 + iVar1 * 0x21;
    puVar5 = &DAT_10027648;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
LAB_1000300d:
  if (iVar1 == DAT_10034c54) {
    FUN_100020f0(s_D3DMain_GetSurfaceFormats__Unabl_10014580);
    return 0;
  }
  iVar1 = 0;
  if (0 < DAT_10034c54) {
    piVar2 = &DAT_10034cd8;
LAB_10003030:
    if (*piVar2 != 1) goto code_r0x10003034;
    puVar4 = &DAT_10034c58 + iVar1 * 0x21;
    puVar5 = &DAT_100275cc;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
LAB_10003061:
  if (iVar1 == DAT_10034c54) {
    FUN_100020f0(s_D3DMain_GetSurfaceFormats__Unabl_1001453c);
    return 0;
  }
  iVar1 = 0;
  if (0 < DAT_10034c54) {
    piVar2 = &DAT_10034cb0;
    do {
      if ((((((piVar2[9] != 1) && (piVar2[10] != 1)) &&
            (((*(byte *)(piVar2 + -3) & 1) == 0 && (piVar2[-1] == 0x10)))) &&
           ((*piVar2 == 0xf800 || (*piVar2 == 0x7c00)))) &&
          ((piVar2[1] == 0x7e0 || (piVar2[1] == 0x3e0)))) && (iVar3 = 0x1f, piVar2[2] == 0x1f)) {
        puVar4 = &DAT_10034c58 + iVar1 * 0x21;
        puVar5 = &DAT_10027550;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        break;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x21;
    } while (iVar1 < DAT_10034c54);
  }
  if (iVar1 != DAT_10034c54) {
    FUN_10003230(1.0);
    return 1;
  }
  FUN_100020f0(s_D3DMain_GetSurfaceFormats__Unabl_100144f4);
  return 0;
LAB_10002f82:
  iVar1 = iVar1 + 1;
  piVar2 = piVar2 + 0x21;
  if (DAT_10030a50 <= iVar1) goto LAB_10002fae;
  goto LAB_10002f5e;
code_r0x10002fe0:
  iVar1 = iVar1 + 1;
  piVar2 = piVar2 + 0x21;
  if (DAT_10034c54 <= iVar1) goto LAB_1000300d;
  goto LAB_10002fdc;
code_r0x10003034:
  iVar1 = iVar1 + 1;
  piVar2 = piVar2 + 0x21;
  if (DAT_10034c54 <= iVar1) goto LAB_10003061;
  goto LAB_10003030;
}

