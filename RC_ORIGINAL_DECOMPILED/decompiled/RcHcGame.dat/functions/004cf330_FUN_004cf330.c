/*
 * FUN_004cf330 at 004cf330
 * undefined FUN_004cf330(void)
 * Address ranges: 004cf330-004cf763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef44 slot 2 for .?AVCAdamElevatorModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ef44 slot 2 for
   .?AVCAdamElevatorModel@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004cf330(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631128;
  local_c = ExceptionList;
  switch(*(undefined4 *)(param_1 + 0x168)) {
  case 1:
    iVar2 = *(int *)(param_1 + 0x174);
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x16d) = 0;
    if ((param_2 == -1) || (iVar2 == -1)) {
      iVar2 = 0;
LAB_004cf3fb:
      *(int *)(param_1 + 0x174) = param_2;
    }
    else {
      if (param_2 < iVar2) {
        local_1c[0] = (undefined1)param_3;
        FUN_004040a0(0);
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
        local_4 = 0;
        pcVar3 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,local_1c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar2 = param_2 - iVar2;
      if (iVar2 == 0) goto LAB_004cf3fb;
    }
    if ((iVar2 <= *(int *)(param_1 + 0x170)) || (cVar1 = FUN_004cc420(), cVar1 == '\0')) {
      *(undefined1 *)(param_1 + 0x16c) = 0;
    }
    if ((*(char *)(param_1 + 0x16c) != '\0') || (cVar1 = FUN_004cc430(), cVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x168) = 2;
      *(undefined1 *)(param_1 + 0x16c) = 0;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    FUN_004cefe0();
    *(undefined4 *)(param_1 + 0x168) = 3;
    break;
  case 3:
    ExceptionList = &local_c;
    fVar9 = (float10)FUN_004d0710();
    fVar9 = (float10)param_3 * (float10)0.001 + fVar9;
    if (fVar9 <= (float10)*(float *)(param_1 + 0x13c)) {
      FUN_004d0a90((float)fVar9,param_3);
    }
    else {
      cVar1 = FUN_004d0a90(*(undefined4 *)(param_1 + 0x13c),param_3);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x168) = 4;
      }
    }
    break;
  case 4:
    ExceptionList = &local_c;
    FUN_004ceed0();
    *(undefined4 *)(param_1 + 0x168) = 5;
    *(int *)(param_1 + 0x174) = param_2;
    break;
  case 5:
    iVar2 = *(int *)(param_1 + 0x174);
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x16d) = 0;
    if ((param_2 == -1) || (iVar2 == -1)) {
      iVar2 = 0;
LAB_004cf5c2:
      *(int *)(param_1 + 0x174) = param_2;
    }
    else {
      if (param_2 < iVar2) {
        param_3._0_1_ = (undefined1)iVar2;
        local_2c[0] = (undefined1)param_3;
        FUN_004040a0(0);
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4 - 1;
        cVar1 = FUN_00401940(uVar4,1);
        if (cVar1 != '\0') {
          puVar6 = (undefined4 *)&DAT_006b3f70;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *local_28 = *puVar6;
            puVar6 = puVar6 + 1;
            local_28 = local_28 + 1;
          }
          for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)local_28 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            local_28 = (undefined4 *)((int)local_28 + 1);
          }
          FUN_00404190(uVar4);
        }
        local_4 = 1;
        pcVar3 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,local_2c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar2 = param_2 - iVar2;
      if (iVar2 == 0) goto LAB_004cf5c2;
    }
    if (((*(int *)(param_1 + 0x170) < iVar2) || (cVar1 = FUN_004cc430(), cVar1 != '\0')) &&
       (cVar1 = FUN_004cc420(), cVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x168) = 6;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    FUN_004cefe0();
    *(undefined4 *)(param_1 + 0x168) = 7;
    break;
  case 7:
    ExceptionList = &local_c;
    fVar9 = (float10)FUN_004d0710();
    fVar9 = fVar9 - (float10)param_3 * (float10)0.001;
    if ((float10)*(float *)(param_1 + 0x140) <= fVar9) {
      FUN_004d0a90((float)fVar9,param_3);
    }
    else {
      cVar1 = FUN_004d0a90(*(undefined4 *)(param_1 + 0x140),param_3);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x168) = 8;
      }
    }
    break;
  case 8:
    ExceptionList = &local_c;
    FUN_004ceed0();
    *(undefined4 *)(param_1 + 0x168) = 1;
    *(int *)(param_1 + 0x174) = param_2;
    break;
  default:
    uVar4 = 0xffffffff;
    pcVar7 = s_Invalid_FSM_state_00698ccc;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_3c[0] = (undefined1)param_3;
    local_38 = (char *)0x0;
    local_34 = 0;
    local_30 = 0;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar7 = s_Invalid_FSM_state_00698ccc;
      pcVar8 = local_38;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_38[uVar4] = '\0';
      local_34 = uVar4;
    }
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006990b8,0x191
                                  ,local_3c);
    (*pcVar3)();
    if (local_38 != (char *)0x0) {
      cVar1 = local_38[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_38 + -1);
      }
      else {
        local_38[-1] = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

