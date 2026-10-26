/*
 * FUN_0044c760 at 0044c760
 * undefined FUN_0044c760(void)
 * Address ranges: 0044c760-0044cd2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0044c760(int *param_1,int **param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  float10 fVar10;
  int *piStack_78;
  undefined1 local_61 [5];
  int iStack_5c;
  int iStack_58;
  float fStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int aiStack_40 [6];
  int aiStack_28 [3];
  int local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006258d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 == -1) {
    piStack_78 = (int *)local_61;
    ExceptionList = &pvStack_c;
    FUN_00409810(&DAT_006b3f70);
    piStack_78 = local_1c;
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a);
    (*pcVar3)();
    local_4 = 0xffffffff;
    piStack_78 = (int *)0x1;
    FUN_004040a0();
  }
  local_61._1_4_ = (float)param_3 * 0.001;
  if ((char)param_1[0x74] != '\0') {
    if (DAT_006b915c == 0) {
      piStack_78 = (int *)0x44c800;
      FUN_004bc480();
    }
    piStack_78 = (int *)0x44c80b;
    iVar4 = FUN_004337e0();
    if (((iVar4 == 0) && ((char)param_1[0x81] == '\0')) && (param_1[0x75] != 0)) {
      piStack_78 = &iStack_5c;
      piVar5 = (int *)FUN_004042e0();
      local_4 = 1;
      if (*piVar5 == 0) {
        piStack_78 = &param_3;
        FUN_00409810(&DAT_006b3f70);
        piStack_78 = local_1c;
        local_4._0_1_ = 2;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar3)();
        local_4 = CONCAT31(local_4._1_3_,1);
        piStack_78 = (int *)0x1;
        FUN_004040a0();
      }
      piStack_78 = (int *)param_1[0x75];
      FUN_004f41c0();
      local_4 = 0xffffffff;
      if (iStack_5c != 0) {
        piStack_78 = (int *)0x44c8b2;
        FUN_004098d0();
      }
    }
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  iVar4 = (int)param_2;
  iStack_5c = param_1[0x7d];
  bVar1 = true;
  if (iStack_5c != -1) {
    iVar7 = param_1[0x7e];
    if (iVar7 == -1) {
      param_1[0x7f] = 0x3f800000;
      param_1[0x7e] = iStack_5c + (int)param_2;
    }
    else if (iVar7 < (int)param_2) {
      param_1[0x7f] = 0;
      bVar1 = false;
    }
    else if (iStack_5c < 1) {
      param_1[0x7f] = 0;
    }
    else {
      param_3 = iVar7 - (int)param_2;
      param_1[0x7f] = (int)((float)param_3 / (float)iStack_5c);
    }
  }
  *(bool *)(param_1 + 0x80) = bVar1;
  if (bVar1) {
    iStack_5c = param_1[0x89];
    bVar1 = true;
    if (iStack_5c != -1) {
      iVar7 = param_1[0x8a];
      if (iVar7 == -1) {
        param_1[0x8b] = 0x3f800000;
        param_1[0x8a] = iStack_5c + (int)param_2;
      }
      else if (iVar7 < (int)param_2) {
        param_1[0x8b] = 0;
        bVar1 = false;
      }
      else if (iStack_5c < 1) {
        param_1[0x8b] = 0;
      }
      else {
        param_3 = iVar7 - (int)param_2;
        param_1[0x8b] = (int)((float)param_3 / (float)iStack_5c);
      }
    }
    *(bool *)(param_1 + 0x8c) = bVar1;
    if (!bVar1) {
      piStack_78 = (int *)0x44c9ac;
      piVar5 = (int *)(**(code **)(*param_1 + 0x68))();
      if (piVar5 != (int *)0x0) {
        piStack_78 = &iStack_5c;
        piVar6 = (int *)FUN_004042e0();
        local_4 = 3;
        if (*piVar6 == 0) {
          piStack_78 = &param_3;
          FUN_00409810(&DAT_006b3f70);
          piStack_78 = local_1c;
          local_4._0_1_ = 4;
          pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
          (*pcVar3)();
          local_4 = CONCAT31(local_4._1_3_,3);
          piStack_78 = (int *)0x1;
          FUN_004040a0();
        }
        piStack_78 = piVar5;
        FUN_004f41c0();
        local_4 = 0xffffffff;
        piStack_78 = (int *)0x44ca2d;
        FUN_0057d310();
        iVar4 = (int)param_2;
      }
      piStack_78 = (int *)0x44ca36;
      iVar7 = FUN_0060a4a0();
      param_2 = (int **)(iVar7 % 10000);
      piStack_78 = (int *)0x44ca57;
      iVar7 = __ftol();
      if ((iVar7 != -1) && (iVar7 < 0)) {
        piStack_78 = (int *)&param_2;
        FUN_00409810(&DAT_006b3f70);
        piStack_78 = local_1c;
        local_4 = 5;
        pcVar3 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                      s___AdamSource_AdamLifeTime_h_0068d4c8,0x56);
        (*pcVar3)();
        local_4 = 0xffffffff;
        piStack_78 = (int *)0x1;
        FUN_004040a0();
      }
      param_1[0x8a] = -1;
      param_1[0x89] = iVar7;
      param_1[0x8b] = 0x3f800000;
      *(undefined1 *)(param_1 + 0x8c) = 1;
    }
    piStack_78 = (int *)0x44cacf;
    FUN_0044bc80();
    param_2 = (int **)param_1[0x88];
    iStack_58 = param_1[0x8d];
    fStack_54 = (float)param_1[0x8e];
    iStack_50 = param_1[0x8f];
    if (0.0 < (float)param_2) {
      piStack_78 = (int *)0x44cb0b;
      fVar10 = (float10)FUN_005b2fd0();
      piStack_78 = (int *)(float)(((float10)(float)param_2 * (float10)(float)local_61._1_4_ + fVar10
                                  ) / fVar10);
      FUN_005b2fa0();
    }
    piStack_78 = (int *)0x44cb33;
    fVar10 = (float10)FUN_005b2fd0();
    if ((float10)(float)param_1[0x82] < fVar10) {
      piStack_78 = (int *)(float)((float10)(float)param_1[0x82] / fVar10);
      FUN_005b2fa0();
    }
    piStack_78 = aiStack_28;
    fStack_54 = fStack_54 - (float)local_61._1_4_ * (float)param_1[0x7c] * 32.0;
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x48))();
    uStack_4c = *puVar8;
    uStack_48 = puVar8[1];
    piStack_78 = (int *)local_61._1_4_;
    uStack_44 = puVar8[2];
    FUN_005b2fa0();
    piStack_78 = aiStack_40;
    FUN_005b3000();
    param_3 = param_1[0x67];
    bVar1 = true;
    if (param_3 != -1) {
      iVar7 = param_1[0x68];
      if (iVar7 == -1) {
        param_1[0x69] = 0x3f800000;
        param_1[0x68] = param_3 + iVar4;
      }
      else if (iVar7 < iVar4) {
        param_1[0x69] = 0;
        bVar1 = false;
      }
      else if (param_3 < 1) {
        param_1[0x69] = 0;
      }
      else {
        param_2 = (int **)(iVar7 - iVar4);
        param_1[0x69] = (int)((float)(int)param_2 / (float)param_3);
      }
    }
    *(bool *)(param_1 + 0x6a) = bVar1;
    if (!bVar1) {
      param_1[0x73] = param_1[0x73] + 1;
      piStack_78 = (int *)0x44cc3b;
      iVar4 = FUN_0044e4c0();
      if (iVar4 <= param_1[0x73]) {
        param_1[0x73] = 0;
      }
      param_1[0x67] = param_1[0x83];
      param_1[0x68] = param_1[0x84];
      param_1[0x69] = param_1[0x85];
      param_1[0x6a] = param_1[0x86];
    }
    piStack_78 = (int *)param_1[0x73];
    puVar8 = (undefined4 *)FUN_0044e260();
    piStack_78 = (int *)*puVar8;
    param_2 = &piStack_78;
    FUN_005844b0();
    FUN_00437280();
    piStack_78 = aiStack_40;
    cVar2 = FUN_0044cd30(&uStack_4c);
    if (cVar2 == '\0') {
      param_1[0x8d] = iStack_58;
      param_1[0x8e] = (int)fStack_54;
      piStack_78 = aiStack_40;
      param_1[0x8f] = iStack_50;
      (**(code **)(*param_1 + 0x4c))();
      iVar4 = DAT_006b915c;
      if (DAT_006b915c == 0) {
        piStack_78 = (int *)0x44cce3;
        iVar4 = FUN_004bc480();
      }
      if (*(int *)(iVar4 + 0x4e8) == -0x80000000) {
        piStack_78 = *(int **)(iVar4 + 0x49c);
        if (piStack_78 == (int *)0x0) {
          piStack_78 = (int *)&DAT_0064a3b4;
        }
        uVar9 = FUN_0060af10();
        *(undefined4 *)(iVar4 + 0x4e8) = uVar9;
      }
      piStack_78 = (int *)0x44cd18;
      FUN_005b2fd0();
    }
  }
  else {
    piStack_78 = (int *)0x44c934;
    FUN_0044c530();
  }
  ExceptionList = pvStack_c;
  return;
}

