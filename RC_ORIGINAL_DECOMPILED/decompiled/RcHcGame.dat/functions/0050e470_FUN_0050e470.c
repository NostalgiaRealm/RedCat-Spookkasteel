/*
 * FUN_0050e470 at 0050e470
 * undefined FUN_0050e470(void)
 * Address ranges: 0050e470-0050e80a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0050e470(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636f20;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2;
  }
  if (*(char *)(param_1 + 0x34) == '\0') {
    ExceptionList = &pvStack_c;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    if (*(char *)(param_1 + 0x48) != '\0') {
      uVar2 = FUN_0060a4a0();
      uVar2 = uVar2 & 0x80000001;
      bVar10 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar10) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      }
    }
    if (-1 < *(int *)(param_1 + 0x1c)) goto LAB_0050e73b;
    switch(*(undefined4 *)(param_1 + 0x20)) {
    case 0:
      uVar3 = FUN_005ae390(local_1c,s_Illegal_type_here__CPAT_NONE___0069eb20);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069ea74,
                                    0x86,uVar3);
      (*pcVar4)();
      local_4 = 0xffffffff;
      if (iStack_18 != 0) {
        pcVar5 = (char *)(iStack_18 + -1);
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
LAB_0050e6a4:
          local_4 = 0xffffffff;
          FUN_005fe5f0(pcVar5);
        }
        else {
          *pcVar5 = cVar1 + -1;
        }
      }
      break;
    case 1:
      *(int *)(param_1 + 0x1c) = iVar7 + -1;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined1 *)(param_1 + 0x34) = 1;
      break;
    default:
      uVar3 = FUN_005ae390(local_2c,s_Unknown_type__d__0069eb0c,*(undefined4 *)(param_1 + 0x20));
      local_4 = 3;
      pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069ea74,
                                    0x97,uVar3);
      (*pcVar4)();
      local_4 = 0xffffffff;
      if (local_28 != 0) {
        pcVar5 = (char *)(local_28 + -1);
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) goto LAB_0050e6a4;
        *pcVar5 = cVar1 + -1;
      }
    }
  }
  else {
    ExceptionList = &pvStack_c;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (*(char *)(param_1 + 0x48) != '\0') {
      uVar2 = FUN_0060a4a0();
      uVar2 = uVar2 & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      if (uVar2 == 0) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
    }
    if (iVar7 <= *(int *)(param_1 + 0x1c)) {
      switch(*(undefined4 *)(param_1 + 0x20)) {
      case 0:
        uVar3 = FUN_005ae390(local_2c,s_Illegal_type_here__CPAT_NONE___0069eb20);
        local_4 = 0;
        pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069ea74,
                                      0x5d,uVar3);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x1c) = 0;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(int *)(param_1 + 0x1c) = iVar7 + -1;
        break;
      case 3:
        *(undefined1 *)(param_1 + 0x34) = 0;
        *(int *)(param_1 + 0x1c) = iVar7 + -1;
        break;
      default:
        uVar3 = FUN_005ae390(local_1c,s_Unknown_type__d__0069eb0c,*(undefined4 *)(param_1 + 0x20));
        local_4 = 1;
        pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069ea74,
                                      0x6e,uVar3);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
    }
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    uVar2 = 0xffffffff;
    local_28 = 0;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_24 = 0;
    local_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar2 - 1);
    local_4 = 4;
    pcVar4 = (code *)FUN_005a07f0(s_0_<__m_AnimIndex_0069eaf8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069ea74,0x9e,local_2c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
  }
LAB_0050e73b:
  if (iVar7 <= *(int *)(param_1 + 0x1c)) {
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    local_38 = (undefined4 *)0x0;
    local_34 = 0;
    local_30 = 0;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_38;
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar2);
    }
    local_4 = 5;
    pcVar4 = (code *)FUN_005a07f0(s_m_AnimIndex_<_nrPortraits_0069eadc,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069ea74,0x9f,local_3c);
    (*pcVar4)();
    if (local_38 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_38 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)((int)local_38 + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return;
      }
      FUN_005fe5f0((char *)((int)local_38 + -1));
    }
  }
  ExceptionList = pvStack_c;
  return;
}

