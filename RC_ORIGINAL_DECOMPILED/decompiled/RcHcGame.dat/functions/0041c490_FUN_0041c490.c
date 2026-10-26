/*
 * FUN_0041c490 at 0041c490
 * undefined FUN_0041c490(void)
 * Address ranges: 0041c490-0041c7cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0041c490(int *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int ***pppiVar4;
  code *pcVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float unaff_EBX;
  undefined4 *puVar11;
  char *pcVar12;
  int **ppiVar13;
  int ***pppiStack_7c;
  int iStack_5c;
  float fStack_58;
  int **local_54;
  undefined1 *local_50;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_2c [4];
  int *local_28;
  undefined4 *local_24;
  uint local_20;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621ae0;
  local_c = ExceptionList;
  pppiStack_7c = &local_54;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_004237d0();
  iVar8 = *piVar3;
  if ((local_54 != (int **)0x0) &&
     (piVar3 = local_54[5], local_54[5] = (int *)((int)piVar3 + -1),
     (int *)((int)piVar3 + -1) == (int *)0x0)) {
    pppiStack_7c = (int ***)0x0;
    FUN_005abfc0();
  }
  if (iVar8 != 0) {
    local_50 = (undefined1 *)&pppiStack_7c;
    FUN_004237d0(&pppiStack_7c);
    pppiVar4 = (int ***)FUN_0040b060();
    local_54 = (int **)pppiVar4;
    if (pppiVar4 == (int ***)0x0) {
      local_28 = (int *)CONCAT31(local_28._1_3_,iVar8 == 0);
      pppiStack_7c = pppiVar4;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pppiStack_7c = (int ***)0x1;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar11 = local_24;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar11 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(undefined1 *)((int)local_24 + uVar9) = 0;
        pppiVar4 = (int ***)local_54;
        local_20 = uVar9;
      }
      pppiStack_7c = (int ***)&local_28;
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0(s_go____0_0068e514,s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,
                                    0x192);
      (*pcVar5)();
      local_4 = 0xffffffff;
      pppiStack_7c = (int ***)0x1;
      FUN_004040a0();
    }
    pppiStack_7c = (int ***)&local_28;
    puVar6 = (undefined4 *)(*(code *)(*pppiVar4)[0x12])();
    uStack_44 = *puVar6;
    iStack_5c = 1;
    fStack_40 = (float)puVar6[1] + (float)param_1[0x8b];
    fStack_3c = (float)puVar6[2];
    do {
      if (param_1[0x8c] == 0) {
        auStack_2c[0] = (undefined1)((uint)unaff_EBX >> 0x18);
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        puVar6 = (undefined4 *)(~uVar9 - 1);
        cVar2 = FUN_00401940(puVar6,1);
        if (cVar2 != '\0') {
          puVar11 = (undefined4 *)&DAT_006b3f70;
          ppiVar13 = (int **)local_28;
          for (uVar9 = (uint)puVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *ppiVar13 = (int *)*puVar11;
            puVar11 = puVar11 + 1;
            ppiVar13 = ppiVar13 + 1;
          }
          for (uVar9 = (uint)puVar6 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)ppiVar13 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            ppiVar13 = (int **)((int)ppiVar13 + 1);
          }
          *(undefined1 *)((int)local_28 + (int)puVar6) = 0;
          local_24 = puVar6;
        }
        puStack_8 = (undefined1 *)0x1;
        pcVar5 = (code *)FUN_005a07f0(s_m_Machine____0_0068f310,
                                      s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,0x199,auStack_2c);
        (*pcVar5)();
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_004040a0(1);
      }
      pfVar7 = (float *)(**(code **)(*(int *)param_1[0x8c] + 0x58))(auStack_1c,iStack_5c);
      fStack_40 = *pfVar7;
      fStack_3c = pfVar7[1];
      fStack_38 = pfVar7[2];
      FUN_005b2fe0(&fStack_58);
      FUN_005b2f20();
      iVar8 = FUN_0042b300();
      fVar1 = *(float *)(iVar8 + 0x28);
      unaff_EBX = -fVar1;
      iVar8 = FUN_0060a4a0();
      fStack_58 = (fVar1 - unaff_EBX) * (float)(iVar8 % 10000) * 0.0001 + unaff_EBX + fStack_58;
      iVar8 = FUN_0060a4a0();
      local_54 = (int **)((fVar1 - unaff_EBX) * (float)(iVar8 % 10000) * 0.0001 + unaff_EBX +
                         (float)local_54);
      iVar8 = FUN_0060a4a0();
      local_50 = (undefined1 *)
                 ((fVar1 - unaff_EBX) * (float)(iVar8 % 10000) * 0.0001 + unaff_EBX +
                 (float)local_50);
      FUN_005b2f20();
      (**(code **)(*(int *)param_1[0x8c] + 0x5c))(&fStack_40,&fStack_58);
      iStack_5c = iStack_5c + 1;
    } while (iStack_5c < 3);
    (**(code **)(*param_1 + 0xbc))(2);
  }
  ExceptionList = local_c;
  return;
}

