/*
 * FUN_00409a60 at 00409a60
 * undefined FUN_00409a60(void)
 * Address ranges: 00409a60-00409e20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a950 slot 1 for .?AV?$CRcSpiderMoveToStart@VCRcTouchSpider@@@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a950 slot 1 for
   .?AV?$CRcSpiderMoveToStart@VCRcTouchSpider@@@@. Original bytes unchanged; names and types still
   inferred. */

void __fastcall FUN_00409a60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  float10 fVar10;
  undefined4 unaff_retaddr;
  undefined4 uVar11;
  float afStack_7c [2];
  int iStack_74;
  float fStack_70;
  int iStack_6c;
  undefined1 local_64 [4];
  undefined1 auStack_60 [20];
  undefined1 local_4c [8];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620740;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_00402cf0();
  if (iVar4 == 0) {
    FUN_004288c0();
    cVar3 = FUN_00596c40();
    if (cVar3 != '\0') {
      FUN_004288c0();
      FUN_00596620();
      puVar7 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x48))(local_64);
      *(undefined4 *)(param_1 + 0x30) = *puVar7;
      *(undefined4 *)(param_1 + 0x34) = puVar7[1];
      *(undefined4 *)(param_1 + 0x38) = puVar7[2];
      fVar10 = (float10)FUN_00418400();
      *(float *)(param_1 + 0x34) = (float)fVar10;
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x8c))(1,0,0x7f7fffff);
      FUN_00402a10(1,0);
    }
  }
  else if (iVar4 == 1) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x48))(local_64);
      iStack_74 = *piVar6;
      fStack_70 = (float)piVar6[1];
      iStack_6c = piVar6[2];
      fVar10 = (float10)FUN_00418410();
      afStack_7c[0] = (float)fVar10;
      fVar10 = (float10)FUN_00409e30(unaff_retaddr);
      fStack_70 = (float)(fVar10 * (float10)afStack_7c[0] + (float10)fStack_70);
      fVar10 = (float10)FUN_00418400();
      if (fVar10 <= (float10)fStack_70) {
        fVar10 = (float10)FUN_00418400();
        fStack_70 = (float)fVar10;
        FUN_00402d00();
      }
      iVar4 = **(int **)(param_1 + 0x2c);
    }
    else {
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x48))(local_64);
      iStack_74 = *piVar6;
      fStack_70 = (float)piVar6[1];
      iStack_6c = piVar6[2];
      fVar10 = (float10)FUN_00418410();
      afStack_7c[0] = (float)fVar10;
      fVar10 = (float10)FUN_00409e30(unaff_retaddr);
      fStack_70 = (float)((float10)fStack_70 - fVar10 * (float10)afStack_7c[0]);
      fVar10 = (float10)FUN_004183f0();
      if ((float10)fStack_70 <= fVar10) {
        fVar10 = (float10)FUN_004183f0();
        fStack_70 = (float)fVar10;
        FUN_00402d00();
      }
      iVar4 = **(int **)(param_1 + 0x2c);
    }
    (**(code **)(iVar4 + 0x4c))(&iStack_74);
    if (DAT_006c8de0 == 0) {
      FUN_0055b280();
    }
    piVar6 = (int *)FUN_00409f20(afStack_7c);
    pvStack_c = (void *)0x0;
    if (*piVar6 == 0) {
      FUN_00409810(&DAT_006b3f70,&stack0xffffff79);
      pvStack_c._0_1_ = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_44);
      (*pcVar5)();
      pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
      FUN_004040a0(1);
    }
    iVar4 = *piVar6;
    piVar6 = (int *)FUN_004042e0(&stack0xffffff7c);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
    if (*piVar6 == 0) {
      FUN_00409810(&DAT_006b3f70,&stack0xffffff7a);
      pvStack_c._0_1_ = 3;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_34);
      (*pcVar5)();
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
      FUN_004040a0(1);
    }
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x5c) == 0) {
      FUN_00409810(&DAT_006b3f70,&stack0xffffff7b);
      pvStack_c._0_1_ = 4;
      pcVar5 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,auStack_24);
      (*pcVar5)();
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
      FUN_004040a0(1);
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x5c);
    uVar11 = 10;
    (**(code **)(**(int **)(param_1 + 0x2c) + 0xa4))(auStack_60,param_1 + 0x30,10,10,10,10,10,10);
    uVar11 = FUN_0049bc80(uVar11);
    FUN_005b0940(uVar2,iVar4 + 0x1e0,uVar11);
    local_4 = local_4 & 0xffffff00;
    if (afStack_7c[0] != 0.0) {
      FUN_004098d0();
      afStack_7c[0] = 0.0;
    }
    local_4 = 0xffffffff;
    if (iStack_74 != 0) {
      FUN_004098d0();
    }
  }
  else {
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = s_CRcSpiderMoveToStart<Spider>__Do_0068e1d4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_CRcSpiderMoveToStart<Spider>__Do_0068e1d4,~uVar8 - 1);
    local_4 = 5;
    pcVar5 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcSpid_0068e108,0xfb,
                                  local_4c);
    (*pcVar5)();
    FUN_004040a0(1);
  }
  ExceptionList = pvStack_c;
  return;
}

