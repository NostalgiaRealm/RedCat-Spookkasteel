/*
 * FUN_005cd9f0 at 005cd9f0
 * undefined FUN_005cd9f0(void)
 * Address ranges: 005cd9f0-005cdfe0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005cd9f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int iVar6;
  short *psVar7;
  short *psVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  float10 fVar14;
  float10 fVar15;
  int iStack00000008;
  int iStack0000000c;
  uint uStack00000018;
  int in_stack_00000020;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 *in_stack_0000119c;
  int *in_stack_000011ac;
  
  FUN_0060df70();
  FUN_005d0150();
  FUN_005d0160();
  puVar12 = (undefined4 *)&stack0x00000034;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *in_stack_0000119c;
    in_stack_0000119c = in_stack_0000119c + 1;
    puVar12 = puVar12 + 1;
  }
  iVar6 = 0;
  uStack00000018 = 0xffff;
  piVar10 = in_stack_000011ac + 1;
  if (0 < *in_stack_000011ac) {
    do {
      piVar10[4] = 6;
      iVar4 = FUN_005caa50();
      if (iVar4 == 2) {
        return 1;
      }
      if (iVar4 == 1) {
        uStack00000018 = uStack00000018 & ~(1 << ((byte)iVar6 & 0x1f));
      }
      iVar6 = iVar6 + 1;
      piVar10 = piVar10 + 5;
    } while (iVar6 < *in_stack_000011ac);
  }
  iVar6 = FUN_005dfee0();
  if (iVar6 == 0) {
    FUN_005cf220();
    return 0;
  }
  DAT_007203e0 = *(undefined4 *)(extraout_ECX + 0x30);
  _DAT_007203e4 = *(undefined4 *)(extraout_ECX + 0x18);
  _DAT_007203e8 = *(undefined4 *)(extraout_ECX + 0x1c);
  _DAT_007203ec = *(undefined4 *)(extraout_ECX + 0x20);
  _DAT_007203fc = *(undefined4 *)(extraout_ECX + 0x24);
  _DAT_00720400 = *(undefined4 *)(extraout_ECX + 0x28);
  _DAT_00720404 = *(undefined4 *)(extraout_ECX + 0x2c);
  DAT_00720824 = *(undefined4 *)(extraout_ECX + 0x44);
  FUN_005cf9a0();
  if (*(int *)(extraout_ECX + 0x10) < 1) {
    DAT_00720820 = 0;
  }
  else if (*(int *)(extraout_ECX + 0x44) == 0) {
    DAT_00720820 = FUN_005cdff0();
  }
  else {
    FUN_005e0580();
    if (0 < param_1) {
      if (DAT_006cc5e4 < param_1) {
        iVar4 = FUN_005cf410();
        if (iVar4 == 0) {
          FUN_005cf220();
          return 0;
        }
        DAT_006cc5e4 = param_1;
        DAT_006cc5e0 = iVar4;
      }
      iVar4 = 0;
      if (0 < param_1) {
        iVar11 = 0;
        do {
          uVar5 = FUN_005cdff0();
          iVar4 = iVar4 + 1;
          *(undefined4 *)(iVar11 + 0x400 + DAT_006cc5e0) = uVar5;
          iVar11 = iVar11 + 0x404;
        } while (iVar4 < param_1);
      }
    }
  }
  FUN_005ce190();
  iStack0000000c = (int)*(short *)(iVar6 + 0x10);
  psVar7 = *(short **)(iVar6 + 0x18);
  if (0 < iStack0000000c) {
    do {
      puVar9 = (undefined4 *)&stack0x000000b8;
      puVar12 = (undefined4 *)(*(int *)(extraout_ECX + 0xc) + psVar7[1] * 0x1c);
      _DAT_007203f0 = *puVar12;
      _DAT_007203f4 = puVar12[1];
      _DAT_007203f8 = puVar12[2];
      iStack00000008 = 3;
      iVar4 = 3;
      psVar8 = psVar7 + 2;
      puVar12 = (undefined4 *)&stack0x00000c04;
      do {
        psVar7 = psVar8 + 2;
        puVar1 = (undefined4 *)(*(int *)(iVar6 + 4) + *psVar8 * 0x18);
        *puVar9 = *puVar1;
        puVar9[1] = puVar1[1];
        sVar3 = psVar8[1];
        puVar9[2] = puVar1[2];
        puVar2 = (undefined4 *)(*(int *)(iVar6 + 0xc) + sVar3 * 0xc);
        _DAT_00720414 = *puVar2;
        _DAT_00720418 = puVar2[1];
        _DAT_0072041c = puVar2[2];
        FUN_005ce3b0();
        puVar9 = puVar9 + 3;
        puVar12[-1] = in_stack_00000078;
        *puVar12 = in_stack_0000007c;
        puVar12[1] = in_stack_00000080;
        puVar12[-3] = puVar1[3];
        puVar12[-2] = puVar1[4];
        iVar4 = iVar4 + -1;
        psVar8 = psVar7;
        puVar12 = puVar12 + 6;
      } while (iVar4 != 0);
      FUN_005b2fe0();
      FUN_005b2fe0();
      FUN_005b2e60();
      FUN_005b2f20();
      fVar14 = (float10)FUN_005b2e40();
      FUN_005c9480();
      fVar15 = (float10)FUN_005b2e40();
      if ((float10)0.0 < fVar15 - (float10)(float)fVar14) {
        puVar13 = &stack0x000000b8;
        iVar11 = 0;
        iVar4 = 0;
        if (0 < *in_stack_000011ac) {
          do {
            iVar11 = iVar4;
            if ((uStack00000018 & 1 << ((byte)iVar11 & 0x1f)) != 0) {
              iVar4 = FUN_005d1100();
              if (iVar4 == 0) break;
              if (puVar13 == &stack0x00000220) {
                puVar13 = &stack0x00000388;
              }
              else {
                puVar13 = &stack0x00000220;
              }
              iStack00000008 = in_stack_00000020;
            }
            iVar11 = iVar11 + 1;
            iVar4 = iVar11;
          } while (iVar11 < *in_stack_000011ac);
        }
        if ((iVar11 == *in_stack_000011ac) && (2 < iStack00000008)) {
          if (0 < iStack00000008) {
            do {
              FUN_005c9410();
              iStack00000008 = iStack00000008 + -1;
            } while (iStack00000008 != 0);
          }
          if (*(float *)(extraout_ECX + 0x5c) <= 0.0) {
            FUN_005d1600();
          }
          else {
            FUN_005d1570();
          }
          FUN_005bba60();
        }
      }
      iStack0000000c = iStack0000000c + -1;
    } while (iStack0000000c != 0);
  }
  return 1;
}

