/*
 * FUN_00417fe0 at 00417fe0
 * undefined FUN_00417fe0(void)
 * Address ranges: 00417fe0-004183e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00417fe0(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  float10 fVar9;
  int **ppiStack_140;
  int *local_128;
  int *local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float fStack_110;
  double local_10c;
  undefined1 auStack_104 [4];
  undefined1 local_100 [4];
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  int iStack_c4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int **ppiStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621471;
  local_c = ExceptionList;
  ppiStack_140 = &local_128;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_004237d0();
  iVar6 = *piVar2;
  if ((local_128 != (int *)0x0) &&
     (iVar3 = local_128[5], local_128[5] = iVar3 + -1, iVar3 + -1 == 0)) {
    ppiStack_140 = (int **)0x0;
    FUN_005abfc0();
  }
  if (iVar6 == 0) {
    param_1[0x58] = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
    param_1[0x57] = 0x7f7fffff;
    ExceptionList = local_c;
    return;
  }
  local_10c = (double)CONCAT44(local_10c._4_4_,&ppiStack_140);
  FUN_004237d0(&ppiStack_140);
  iVar3 = FUN_004142f0();
  if (iVar3 == 0) {
    local_10c = (double)CONCAT44(local_10c._4_4_,&ppiStack_140);
    FUN_004237d0(&ppiStack_140);
    local_128 = (int *)FUN_0040b060();
    if (local_128 == (int *)0x0) {
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      ppiStack_140 = (int **)(~uVar7 - 1);
      local_fc = 0;
      local_f8 = 0;
      local_f4 = 0;
      local_100[0] = iVar6 == 0;
      FUN_004040f0(&DAT_006b3f70);
      ppiStack_140 = (int **)local_100;
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0(s_gameObject____0_0068ec7c,
                                    s_D__Work_RCHorror_RCSource_RcTouc_0068ef84,0x78);
      (*pcVar5)();
      local_4 = 0xffffffff;
      if (local_fc != 0) {
        ppiStack_140 = (int **)(local_fc + -1);
        cVar1 = *(char *)(local_fc + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)ppiStack_140 = cVar1 + -1;
        }
      }
    }
    ppiStack_140 = (int **)&local_10c;
    puVar4 = (undefined4 *)(**(code **)(*local_128 + 0x48))();
  }
  else {
    ppiStack_140 = (int **)&local_10c;
    puVar4 = (undefined4 *)FUN_0049bc80();
  }
  local_124 = (int *)*puVar4;
  local_120 = (float)puVar4[1];
  local_11c = puVar4[2];
  ppiStack_140 = (int **)&local_10c;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x48))();
  local_11c = *puVar4;
  uStack_118 = puVar4[1];
  uStack_114 = puVar4[2];
  piStack_f0 = local_124;
  local_f4 = local_11c;
  uStack_ec = uStack_114;
  fVar9 = (float10)FUN_005b30a0();
  param_1[0x57] = (int)(float)fVar9;
  fVar9 = (float10)FUN_005b1600(&local_11c,&local_128);
  param_1[0x58] = (int)(float)fVar9;
  iVar6 = (**(code **)(*param_1 + 0x9c))();
  fStack_110 = *(float *)(iVar6 + 0x160) - 1.5707964;
  FUN_005b30a0();
  puVar4 = (undefined4 *)FUN_004236b0(auStack_104);
  local_11c = *puVar4;
  uStack_118 = puVar4[1];
  uStack_114 = puVar4[2];
  fVar9 = (float10)(**(code **)(*param_1 + 0x68))();
  if (fVar9 < (float10)(float)local_128) {
    ppiStack_140 = (int **)0x41820c;
    fVar9 = (float10)(**(code **)(*param_1 + 0x6c))();
    if (fVar9 < (float10)(float)local_128) {
LAB_0041824b:
      *(undefined1 *)(param_1 + 0x59) = 0;
      ExceptionList = local_c;
      return;
    }
    ppiStack_140 = (int **)((float)param_1[0x58] - (float)local_10c._0_4_);
    fVar9 = (float10)FUN_005b1630();
    local_10c = (double)ABS(fVar9);
    ppiStack_140 = (int **)0x41823a;
    fVar9 = (float10)(**(code **)(*param_1 + 100))();
    if (fVar9 * (float10)0.5 <= (float10)local_10c) goto LAB_0041824b;
  }
  local_10c = (double)CONCAT44(local_10c._4_4_,&ppiStack_140);
  FUN_004042e0(&ppiStack_140);
  FUN_00565c30();
  local_4 = 1;
  uStack_d0 = 1;
  uStack_cf = 1;
  uStack_ce = 1;
  uStack_cd = 1;
  uStack_cc = 1;
  uStack_cb = 1;
  uStack_ca = 0;
  ppiStack_140 = (int **)0x4182a5;
  ppiStack_140 = (int **)(**(code **)(*param_1 + 0x9c))();
  FUN_005663d0();
  ppiStack_140 = &local_124;
  cVar1 = FUN_00565e10(&uStack_118);
  if (cVar1 != '\0') {
    if (iVar3 == 0) {
LAB_0041830f:
      *(undefined1 *)(param_1 + 0x59) = 0;
      goto LAB_00418341;
    }
    ppiStack_140 = (int **)0x4182d3;
    iVar6 = FUN_00566370();
    if (iVar6 != iVar3) {
      ppiStack_140 = &local_124;
      local_120 = (*(float *)(iVar3 + 300) - *(float *)(iVar3 + 0x120)) + local_120;
      cVar1 = FUN_00565e10(&uStack_118);
      if (cVar1 != '\0') {
        ppiStack_140 = (int **)0x41830b;
        iVar6 = FUN_00566370();
        if (iVar6 != iVar3) goto LAB_0041830f;
      }
      *(undefined1 *)(param_1 + 0x59) = 1;
      param_1[0x5a] = param_2;
      goto LAB_00418341;
    }
  }
  *(undefined1 *)(param_1 + 0x59) = 1;
  param_1[0x5a] = param_2;
LAB_00418341:
  local_4 = 2;
  ppiStack_140 = ppiStack_18;
  FUN_005fe5f0();
  ppiStack_18 = (int **)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_005fe5f0(uStack_28);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (iStack_c4 != 0) {
    iVar6 = *(int *)(iStack_c4 + 0x14) + -1;
    *(int *)(iStack_c4 + 0x14) = iVar6;
    if (iVar6 == 0) {
      ppiStack_140 = (int **)0x0;
      FUN_005abfc0();
    }
    iStack_c4 = 0;
  }
  local_4 = 0xffffffff;
  ppiStack_140 = (int **)0x4183cd;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

