/*
 * FUN_0057b520 at 0057b520
 * undefined FUN_0057b520(void)
 * Address ranges: 0057b520-0057ba01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0057b520(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  code *pcVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  char *pcVar7;
  undefined4 uStack_98;
  float local_94;
  undefined1 local_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int iStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [40];
  void *pvStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  
  local_c = (undefined1 *)0xffffffff;
  puStack_10 = &LAB_00641dcf;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (param_3 == (undefined1 *)0xffffffff) {
    local_90[0] = uStack_98._2_1_;
    ExceptionList = &pvStack_14;
    FUN_004040a0(0);
    iVar5 = -1;
    pcVar7 = &DAT_006b3f70;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0();
    local_c = (undefined1 *)0x0;
    pcVar2 = (code *)FUN_005a07f0();
    (*pcVar2)();
    local_c = param_3;
    FUN_004040a0(1);
  }
  local_94 = (float)(int)param_3;
  param_1[0x51] = (int)((float)param_1[0x51] - local_94 * (float)param_1[0x53] * 0.032);
  pfVar3 = (float *)(**(code **)(*param_1 + 0x48))(local_90);
  fStack_78 = *pfVar3;
  fStack_74 = pfVar3[1];
  fStack_70 = pfVar3[2];
  if (param_3 == (undefined1 *)0xffffffff) {
    local_94 = (float)CONCAT31(local_94._1_3_,(char)((uint)unaff_EBX >> 0x10));
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    puStack_10 = (undefined1 *)0x1;
    pcVar2 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,&local_94);
    (*pcVar2)();
    puStack_10 = param_3;
    FUN_004040a0();
  }
  FUN_005b3020(uStack_98 * 0.001,&fStack_84);
  piVar4 = (int *)FUN_004042e0();
  puStack_10 = (undefined1 *)0x2;
  if (*piVar4 == 0) {
    FUN_00409810(&DAT_006b3f70,&stack0xffffff66);
    puStack_10._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &local_94);
    (*pcVar2)();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
    FUN_004040a0();
  }
  if (*(int *)(*piVar4 + 0x5c) == 0) {
    FUN_00409810(&DAT_006b3f70,&stack0xffffff67);
    puStack_10._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,&fStack_6c);
    (*pcVar2)();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
    FUN_004040a0();
  }
  iVar5 = FUN_005b7d80();
  puStack_10 = (undefined1 *)0xffffffff;
  if (uStack_98 != 0.0) {
    FUN_004098d0();
  }
  if (iVar5 == 0) {
    (**(code **)(*param_1 + 0x4c))();
    ExceptionList = pvStack_1c;
    return;
  }
  FUN_005b14c0(auStack_44,&fStack_78,&fStack_84,&uStack_58);
  FUN_005b1520(auStack_44,&fStack_78,&fStack_84,0,uStack_58,&fStack_6c);
  if ((fStack_68 < fStack_80) || (fStack_74 < fStack_68)) {
    DAT_006c904c = DAT_006c904c + 1;
    if (DAT_006c904c < 10) {
      FUN_005ae390(auStack_54,s_CAdamOozeDrop__DoOnFrameCall____i_00692f34,(double)fStack_6c,
                   (double)fStack_68,(double)fStack_64,(double)fStack_78,(double)fStack_74,
                   (double)fStack_70,(double)fStack_84,(double)fStack_80,(double)fStack_7c);
      puStack_10 = (undefined1 *)0x7;
      FUN_004c43e0(auStack_54);
      puStack_10 = (undefined1 *)0xffffffff;
      FUN_004040a0();
    }
  }
  else {
    fStack_80 = fStack_68;
    iVar5 = FUN_0056f520();
    *(float *)(iVar5 + 0x130) = *(float *)(iVar5 + 0x130) * 0.33333334;
    FUN_005b2fa0();
    piVar4 = (int *)FUN_004042e0();
    puStack_10 = (undefined1 *)0x5;
    if (*piVar4 == 0) {
      local_94 = (float)CONCAT31(local_94._1_3_,(char)((uint)unaff_EBX >> 0x18));
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      puStack_10._0_1_ = 6;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &local_94);
      (*pcVar2)();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
      FUN_004040a0();
    }
    FUN_004f41c0();
    puStack_10 = (undefined1 *)0xffffffff;
    if (iStack_5c != 0) {
      FUN_004098d0();
      FUN_00502220();
      ExceptionList = pvStack_18;
      return;
    }
  }
  FUN_00502220();
  ExceptionList = pvStack_18;
  return;
}

