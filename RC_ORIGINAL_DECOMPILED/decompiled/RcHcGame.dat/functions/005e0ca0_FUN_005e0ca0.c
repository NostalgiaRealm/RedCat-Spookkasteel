/*
 * FUN_005e0ca0 at 005e0ca0
 * undefined FUN_005e0ca0(void)
 * Address ranges: 005e0ca0-005e111e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e0ca0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int iStack00000008;
  int iStack00000018;
  uint uStack00000024;
  int *piStack00000028;
  int in_stack_00000030;
  int in_stack_0000134c;
  uint in_stack_00001350;
  undefined4 *in_stack_00001354;
  uint in_stack_00001358;
  int in_stack_0000135c;
  
  FUN_0060df70();
  FUN_005630e0();
  bVar1 = *(byte *)((int)in_stack_00001354 + in_stack_00001358 * 3 + -2);
  bVar2 = *(byte *)((int)in_stack_00001354 + in_stack_00001358 * 3 + -1);
  bVar3 = *(byte *)((int)in_stack_00001354 + in_stack_00001358 * 3 + -3);
  if ((int)in_stack_00001358 < 0x100) {
    pbVar8 = (byte *)((int)in_stack_00001354 + in_stack_00001358 * 3 + 2);
    iVar19 = 0x100 - in_stack_00001358;
    do {
      pbVar8[-2] = bVar3;
      pbVar8[-1] = bVar1;
      *pbVar8 = bVar2;
      pbVar8 = pbVar8 + 3;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  iVar9 = FUN_005c6a40();
  iVar19 = *(int *)(in_stack_0000134c + 8);
  pcVar5 = *(code **)(iVar9 + 0x44);
  iVar6 = *(int *)(in_stack_0000134c + 4);
  iVar7 = *(int *)(iVar9 + 0x30);
  iStack00000008 = -1;
  iStack00000018 = 0;
  if (in_stack_0000135c < 1) {
    in_stack_0000135c = 0xfffffff;
  }
  piStack00000028 = &DAT_006b0e4c;
  uVar18 = 0xffffffff;
LAB_005e0d6c:
  do {
    uVar17 = uVar18;
    if (iStack00000008 != 0) {
      iStack00000008 = *piStack00000028 + -1;
      in_stack_00000030 = *(int *)(iVar9 + 0x30) * iStack00000008;
      piStack00000028 = piStack00000028 + 1;
    }
    iVar10 = FUN_005d9030();
    if (iVar10 == 0) {
      return;
    }
    puVar20 = (undefined4 *)&stack0x00000348;
    for (iVar10 = (in_stack_00001358 & 0xfffffff) << 2; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar20 = 0;
      puVar20 = puVar20 + 1;
    }
    uVar18 = 0;
    iVar10 = 0;
    for (iVar11 = 0; uVar15 = in_stack_00001350, iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined1 *)puVar20 = 0;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
    }
    for (; uVar15 < iVar19 * iVar6 * iVar7 + in_stack_00001350; uVar15 = uVar15 + in_stack_00000030)
    {
      (*pcVar5)();
      iVar11 = FUN_005d9330();
      if ((int)in_stack_00001358 <= iVar11) {
        iVar11 = in_stack_00001358 - 1;
      }
      pbVar8 = (byte *)((int)in_stack_00001354 + iVar11 * 3);
      iVar11 = iVar11 * 0x10;
      iVar13 = (uint)bVar3 - (uint)*pbVar8;
      iVar14 = (uint)bVar1 - (uint)pbVar8[1];
      iVar12 = (uint)bVar2 - (uint)pbVar8[2];
      uVar18 = uVar18 + iVar13 * iVar13 + iVar14 * iVar14 + iVar12 * iVar12;
      *(uint *)(&stack0x00000348 + iVar11) = *(int *)(&stack0x00000348 + iVar11) + (uint)bVar3;
      *(uint *)(&stack0x0000034c + iVar11) = *(int *)(&stack0x0000034c + iVar11) + (uint)bVar1;
      *(uint *)(&stack0x00000350 + iVar11) = *(int *)(&stack0x00000350 + iVar11) + (uint)bVar2;
      *(int *)(&stack0x00000354 + iVar11) = *(int *)(&stack0x00000354 + iVar11) + 1;
      iVar10 = iVar10 + 1;
    }
    FUN_005d94a0();
  } while (iVar10 == 0);
  uVar18 = __ftol();
  iStack00000018 = iStack00000018 + iVar10;
  if (uVar18 < uVar17) {
LAB_005e0f44:
    puVar20 = in_stack_00001354;
    puVar21 = (undefined4 *)&stack0x00000048;
    for (iVar10 = 0xc0; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar21 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  else {
    if (iStack00000008 == 0) {
      puVar20 = (undefined4 *)&stack0x00000048;
      for (iVar19 = 0xc0; iVar19 != 0; iVar19 = iVar19 + -1) {
        *in_stack_00001354 = *puVar20;
        puVar20 = puVar20 + 1;
        in_stack_00001354 = in_stack_00001354 + 1;
      }
LAB_005e1107:
      FUN_005630e0();
      return;
    }
    if (uVar18 <= uVar17) goto LAB_005e0f44;
  }
  FUN_005e1120();
  if (in_stack_0000135c <= iStack00000018) goto LAB_005e1107;
  if (0 < (int)in_stack_00001358) {
    piVar16 = (int *)&stack0x00000354;
    pbVar8 = (byte *)((int)in_stack_00001354 + 2);
    uStack00000024 = in_stack_00001358;
    do {
      if (*piVar16 != 0) {
        bVar4 = pbVar8[-2];
        iVar10 = __ftol();
        iVar10 = iVar10 - (uint)bVar4;
        iVar11 = __ftol();
        iVar11 = iVar11 - (uint)pbVar8[-1];
        iVar12 = __ftol();
        iVar12 = iVar12 - (uint)*pbVar8;
        if (iVar10 < 0) {
          iVar10 = -(1 - iVar10 >> 1);
        }
        else if (0 < iVar10) {
          iVar10 = iVar10 + 1 >> 1;
        }
        if (iVar11 < 0) {
          iVar11 = -(1 - iVar11 >> 1);
        }
        else if (0 < iVar11) {
          iVar11 = iVar11 + 1 >> 1;
        }
        if (iVar12 < 0) {
          iVar12 = -(1 - iVar12 >> 1);
        }
        else if (0 < iVar12) {
          iVar12 = iVar12 + 1 >> 1;
        }
        iVar10 = iVar10 + (uint)bVar4;
        if (iVar10 < 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = 0xff;
          if (iVar10 < 0x100) {
            iVar13 = iVar10;
          }
        }
        pbVar8[-2] = (byte)iVar13;
        if ((int)((uint)pbVar8[-1] + iVar11) < 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = iVar11 + (uint)pbVar8[-1];
          if (0xff < iVar11) {
            iVar11 = 0xff;
          }
        }
        pbVar8[-1] = (byte)iVar11;
        if ((int)((uint)*pbVar8 + iVar12) < 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = iVar12 + (uint)*pbVar8;
          if (0xff < iVar12) {
            iVar12 = 0xff;
          }
        }
        *pbVar8 = (byte)iVar12;
      }
      piVar16 = piVar16 + 4;
      pbVar8 = pbVar8 + 3;
      uStack00000024 = uStack00000024 - 1;
    } while (uStack00000024 != 0);
  }
  uVar15 = (int)(uVar18 - uVar17) >> 0x1f;
  if ((0x31 < (int)((uVar18 - uVar17 ^ uVar15) - uVar15)) || (iStack00000008 != 0))
  goto LAB_005e0d6c;
  goto LAB_005e1107;
}

