/*
 * FUN_0041c990 at 0041c990
 * undefined FUN_0041c990(void)
 * Address ranges: 0041c990-0041d03b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b7a4 slot 30 for .?AVCRcDungeonMax@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b7a4 slot 30 for
   .?AVCRcDungeonMax@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0041c990(int *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int ***pppiVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int ***extraout_ECX;
  uint uVar9;
  int ***pppiVar10;
  undefined4 *puVar11;
  char *pcVar12;
  float10 fVar13;
  int ***pppiStack_15c;
  undefined1 auStack_148 [3];
  undefined1 local_145;
  undefined8 local_144;
  int **local_134;
  int *piStack_130;
  int *piStack_12c;
  undefined1 auStack_128 [4];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [36];
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined4 uStack_c8;
  int iStack_c4;
  int **ppiStack_18;
  int **ppiStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621b86;
  local_c = ExceptionList;
  pppiStack_15c = (int ***)&local_144;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_004237d0();
  iVar7 = *piVar3;
  pppiStack_15c = (int ***)0x0;
  if ((int **)local_144 != (int **)0x0) {
    pppiStack_15c = (int ***)0x41c9ce;
    FUN_004098d0();
    pppiStack_15c = extraout_ECX;
  }
  if (iVar7 == 0) {
    ExceptionList = local_c;
    return;
  }
  local_144 = (double)CONCAT44(local_144._4_4_,&pppiStack_15c);
  FUN_004237d0(&pppiStack_15c);
  pppiVar4 = (int ***)FUN_0040b060();
  local_134 = (int **)pppiVar4;
  if (pppiVar4 == (int ***)0x0) {
    local_144 = (double)CONCAT71(local_144._1_7_,local_145);
    pppiStack_15c = pppiVar4;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pppiStack_15c = (int ***)0x1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    pppiVar10 = (int ***)(~uVar9 - 1);
    cVar2 = FUN_00401940(pppiVar10);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar11 = local_144._4_4_;
      for (uVar9 = (uint)pppiVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = (uint)pppiVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      pppiStack_15c = pppiVar10;
      FUN_00404190();
      pppiVar4 = (int ***)local_134;
    }
    pppiStack_15c = (int ***)&local_144;
    local_4 = 0;
    pcVar5 = (code *)FUN_005a07f0(s_gameObject____0_0068ec7c,
                                  s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,0x1ee);
    (*pcVar5)();
    local_4 = 0xffffffff;
    pppiStack_15c = (int ***)0x1;
    FUN_004040a0();
  }
  if (param_1[0x8c] == 0) {
    pppiStack_15c = (int ***)0x0;
    local_144 = (double)CONCAT71(local_144._1_7_,local_145);
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pppiStack_15c = (int ***)0x1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    pppiVar10 = (int ***)(~uVar9 - 1);
    cVar2 = FUN_00401940(pppiVar10);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar11 = local_144._4_4_;
      for (uVar9 = (uint)pppiVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = (uint)pppiVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      pppiStack_15c = pppiVar10;
      FUN_00404190();
      pppiVar4 = (int ***)local_134;
    }
    pppiStack_15c = (int ***)&local_144;
    local_4 = 1;
    pcVar5 = (code *)FUN_005a07f0(s_m_Machine____0_0068f310,
                                  s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,0x1f0);
    (*pcVar5)();
    local_4 = 0xffffffff;
    pppiStack_15c = (int ***)0x1;
    FUN_004040a0();
  }
  pppiStack_15c = (int ***)&local_144;
  puVar6 = (undefined4 *)(**(code **)(*(int *)param_1[0x8c] + 0x48))();
  uStack_124 = *puVar6;
  uStack_120 = puVar6[1];
  uStack_11c = puVar6[2];
  piVar3 = (int *)(*(code *)(*pppiVar4)[0x12])(auStack_148);
  local_134 = (int **)*piVar3;
  piStack_130 = (int *)piVar3[1];
  piStack_12c = (int *)piVar3[2];
  fVar13 = (float10)FUN_005b30a0();
  param_1[0x57] = (int)(float)fVar13;
  fVar13 = (float10)FUN_005b1600(auStack_128,&local_134);
  param_1[0x58] = (int)(float)fVar13;
  (**(code **)(*param_1 + 0x9c))();
  fVar13 = (float10)(**(code **)(*param_1 + 0x68))();
  if ((float10)(float)param_1[0x57] <= fVar13) {
LAB_0041cc31:
    local_144 = (double)CONCAT44(local_144._4_4_,&pppiStack_15c);
    FUN_004042e0(&pppiStack_15c);
    FUN_00565c30();
    uStack_cf = 1;
    uStack_ce = 1;
    uStack_cd = 0;
    uStack_cc = 1;
    uStack_cb = 0;
    uStack_d0 = 1;
    uStack_ca = 0;
    uStack_c8 = 8;
    pppiStack_15c = *(int ****)(param_1[0x8c] + 0xf8);
    local_4 = 2;
    FUN_005663d0();
    iVar7 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      pppiStack_15c = (int ***)0x41ccbc;
      iVar7 = FUN_004bc480();
    }
    iVar8 = *(int *)(iVar7 + 0x554);
    if (iVar8 == -0x80000000) {
      pppiStack_15c = *(int ****)(iVar7 + 0x508);
      if (pppiStack_15c == (int ***)0x0) {
        pppiStack_15c = (int ***)&DAT_0064a3b4;
      }
      iVar8 = FUN_0060af10();
      *(int *)(iVar7 + 0x554) = iVar8;
    }
    if (iVar8 != 0) {
      if (DAT_006c8de0 == 0) {
        pppiStack_15c = (int ***)0x41ccff;
        FUN_0055b280();
      }
      pppiStack_15c = (int ***)&piStack_130;
      piVar3 = (int *)FUN_00409f20();
      local_4._0_1_ = 3;
      if (*piVar3 == 0) {
        pppiStack_15c = (int ***)0x0;
        auStack_f4[0] = local_145;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        pppiStack_15c = (int ***)(~uVar9 - 1);
        FUN_004040f0(&DAT_006b3f70);
        pppiStack_15c = (int ***)auStack_f4;
        local_4._0_1_ = 4;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar5)();
        local_4._0_1_ = 3;
        pppiStack_15c = (int ***)0x1;
        FUN_004040a0();
      }
      pppiStack_15c = &local_134;
      local_144 = (double)CONCAT44(local_144._4_4_,*piVar3);
      piVar3 = (int *)FUN_004042e0();
      local_4._0_1_ = 5;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 5;
      if (*piVar3 == 0) {
        pppiStack_15c = (int ***)0x0;
        auStack_114[0] = local_145;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        pppiStack_15c = (int ***)(~uVar9 - 1);
        FUN_004040f0(&DAT_006b3f70);
        pppiStack_15c = (int ***)auStack_114;
        local_4._0_1_ = 6;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar5)();
        local_4._0_1_ = 5;
        pppiStack_15c = (int ***)0x1;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      iVar7 = *piVar3;
      if (*(int *)(iVar7 + 0x5c) == 0) {
        pppiStack_15c = (int ***)0x0;
        auStack_104[0] = local_145;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        pppiStack_15c = (int ***)(~uVar9 - 1);
        FUN_004040f0(&DAT_006b3f70);
        pppiStack_15c = (int ***)auStack_104;
        local_4._0_1_ = 7;
        pcVar5 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                      s___AdamSource_AdamSubLevel_h_0068e1b8,0x144);
        (*pcVar5)();
        local_4._0_1_ = 5;
        pppiStack_15c = (int ***)0x1;
        FUN_004040a0();
      }
      pppiStack_15c = (int ***)0xff;
      FUN_005b0940(*(undefined4 *)(iVar7 + 0x5c),(int **)local_144 + 0x78,&uStack_120,&piStack_12c,0
                   ,0xff,0xff,0,0xff);
      local_4._0_1_ = 3;
      if (local_134 != (int **)0x0) {
        piVar3 = local_134[5];
        local_134[5] = (int *)((int)piVar3 + -1);
        if ((int *)((int)piVar3 + -1) == (int *)0x0) {
          pppiStack_15c = (int ***)0x0;
          FUN_005abfc0();
        }
        local_134 = (int **)0x0;
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      if ((int **)piStack_130 != (int **)0x0) {
        piVar3 = (int *)piStack_130[5];
        piStack_130[5] = (int)piVar3 + -1;
        if ((int *)((int)piVar3 + -1) == (int *)0x0) {
          pppiStack_15c = (int ***)0x0;
          FUN_005abfc0();
        }
        piStack_130 = (int *)0x0;
      }
    }
    pppiStack_15c = (int ***)&piStack_12c;
    cVar2 = FUN_00565e10(&uStack_120);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x59) = 1;
      param_1[0x5a] = param_2;
    }
    else {
      local_144 = (double)CONCAT44(local_144._4_4_,&pppiStack_15c);
      FUN_004237d0(&pppiStack_15c);
      iVar7 = FUN_004142f0();
      pppiStack_15c = (int ***)0x41cf6b;
      iVar8 = FUN_00566370();
      if (iVar8 == iVar7) {
        *(undefined1 *)(param_1 + 0x59) = 1;
        param_1[0x5a] = param_2;
      }
      else {
        *(undefined1 *)(param_1 + 0x59) = 0;
      }
    }
    pppiStack_15c = (int ***)ppiStack_14;
    local_4 = 10;
    FUN_00587d50(ppiStack_18);
    pppiStack_15c = (int ***)ppiStack_18;
    FUN_005fe5f0();
    ppiStack_18 = (int **)0x0;
    ppiStack_14 = (int **)0x0;
    uStack_10 = 0;
    local_4._0_1_ = 9;
    pppiStack_15c = (int ***)0x41cfee;
    FUN_00514430();
    local_4 = CONCAT31(local_4._1_3_,8);
    if (iStack_c4 != 0) {
      pppiStack_15c = (int ***)0x41d006;
      FUN_004098d0();
      iStack_c4 = 0;
    }
    local_4 = 0xffffffff;
    pppiStack_15c = (int ***)0x41d021;
    FUN_005ab4d0();
  }
  else {
    pppiStack_15c = (int ***)0x41cbe3;
    fVar13 = (float10)(**(code **)(*param_1 + 0x6c))();
    if ((float10)(float)param_1[0x57] <= fVar13) {
      pppiStack_15c = (int ***)((float)param_1[0x58] - (float)(int **)local_144);
      fVar13 = (float10)FUN_005b1630();
      local_144 = (double)ABS(fVar13);
      pppiStack_15c = (int ***)0x41cc14;
      fVar13 = (float10)(**(code **)(*param_1 + 100))();
      if ((float10)local_144 < fVar13 * (float10)0.5) goto LAB_0041cc31;
    }
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  ExceptionList = local_c;
  return;
}

