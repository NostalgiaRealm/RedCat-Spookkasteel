/*
 * FUN_00590fc0 at 00590fc0
 * undefined FUN_00590fc0(void)
 * Address ranges: 00590fc0-00591361
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fe9c slot 3 for .?AVCAdamSparkGenerator@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fe9c slot 3 for
   .?AVCAdamSparkGenerator@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00590fc0(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  float local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006436c0;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x13e) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x13c) == '\0') {
    return;
  }
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_004042e0(&local_38);
  local_4 = 0;
  if (*piVar4 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 1;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar5)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 2;
    pcVar5 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_1c);
    (*pcVar5)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uStack_30 = *(undefined4 *)(iVar2 + 0x5c);
  local_4 = 0xffffffff;
  if (local_38 != 0.0) {
    FUN_004098d0();
  }
  local_38 = 0.07;
  if (*(char *)(param_1 + 0x13d) != '\0') {
    iStack_34 = __ftol();
    if ((float)iStack_34 <= *(float *)(param_1 + 0x138)) {
      iStack_34 = __ftol();
      if ((float)iStack_34 < *(float *)(param_1 + 0x138)) {
        *(undefined1 *)(param_1 + 0x13c) = 0;
        *(undefined4 *)(param_1 + 0x130) = 0;
        goto LAB_00591296;
      }
      iStack_34 = __ftol();
      if (iStack_34 == -1) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4 = 4;
        pcVar5 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_1c);
        (*pcVar5)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      fVar3 = 1.0 - ((float)iStack_34 * 0.001 - local_38) / local_38;
    }
    else {
      iStack_34 = __ftol();
      if (iStack_34 == -1) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4 = 3;
        pcVar5 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_1c);
        (*pcVar5)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      fVar3 = ((float)iStack_34 * 0.001) / local_38;
    }
    *(float *)(param_1 + 0x130) = fVar3 * 255.0;
  }
LAB_00591296:
  if (*(int *)(param_1 + 0x15c) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 5;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iStack_34 = FUN_0060a4a0();
  iStack_34 = iStack_34 % 10000;
  uVar6 = FUN_0050aa70(2,1,(float)iStack_34 * 1.50000005e-05 + 0.15);
  FUN_005b6e90(uStack_30,param_1 + 0x110,1,uVar6);
  ExceptionList = local_c;
  return;
}

