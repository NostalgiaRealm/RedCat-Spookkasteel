/*
 * FUN_004cb420 at 004cb420
 * undefined FUN_004cb420(void)
 * Address ranges: 004cb420-004cb8ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bba4 slot 2 for .?AVCRcButtonModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bba4 slot 2 for
   .?AVCRcButtonModel@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004cb420(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630c98;
  local_c = ExceptionList;
  switch(*(undefined4 *)(param_1 + 0x168)) {
  case 1:
    ExceptionList = &local_c;
    if ((*(char *)(param_1 + 0x16c) != '\0') ||
       (ExceptionList = &local_c, cVar2 = FUN_004d14f0(*(undefined4 *)(param_1 + 0x170)),
       cVar2 != '\0')) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x174) + 0x30);
      if ((iVar1 < 1) || (*(int *)(param_1 + 0x17c) < iVar1)) {
        *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
        cVar2 = FUN_00502480();
        if (cVar2 != '\0') {
          uVar4 = 0xffffffff;
          pcVar6 = &DAT_006b3f70;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          local_2c[0] = (undefined1)param_3;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
          local_4 = 0;
          FUN_004eed10(7,local_2c,0,0);
          if (local_28 != 0) {
            cVar2 = *(char *)(local_28 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_005fe5f0((char *)(local_28 + -1));
            }
            else {
              *(char *)(local_28 + -1) = cVar2 + -1;
            }
          }
        }
        *(undefined4 *)(param_1 + 0x168) = 2;
      }
      *(undefined1 *)(param_1 + 0x16c) = 0;
      ExceptionList = local_c;
      return;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    FUN_004cb180();
    FUN_004cb130(1,1);
    *(undefined4 *)(param_1 + 0x168) = 3;
    ExceptionList = local_c;
    return;
  case 3:
    ExceptionList = &local_c;
    fVar8 = (float10)FUN_004d0710();
    fVar8 = (float10)param_3 * (float10)0.001 + fVar8;
    if (fVar8 <= (float10)*(float *)(param_1 + 0x13c)) {
      FUN_004cad50((float)fVar8,param_3);
      ExceptionList = local_c;
      return;
    }
    cVar2 = FUN_004cad50(*(undefined4 *)(param_1 + 0x13c),param_3);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x168) = 4;
      ExceptionList = local_c;
      return;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    FUN_004cb130(1,0);
    *(undefined4 *)(param_1 + 0x168) = 5;
    ExceptionList = local_c;
    return;
  case 5:
    ExceptionList = &local_c;
    if ((*(char *)(param_1 + 0x16c) != '\0') ||
       (ExceptionList = &local_c, cVar2 = FUN_004d14f0(*(undefined4 *)(param_1 + 0x170)),
       cVar2 != '\0')) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x174) + 0x30);
      if ((iVar1 < 1) || (*(int *)(param_1 + 0x17c) < iVar1)) {
        *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
        cVar2 = FUN_00502480();
        if (cVar2 != '\0') {
          uVar4 = 0xffffffff;
          pcVar6 = &DAT_006b3f70;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          local_1c[0] = (undefined1)param_3;
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
          FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
          local_4 = 1;
          FUN_004eed10(7,local_1c,0,0);
          if (local_18 != 0) {
            cVar2 = *(char *)(local_18 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_005fe5f0((char *)(local_18 + -1));
            }
            else {
              *(char *)(local_18 + -1) = cVar2 + -1;
            }
          }
        }
        *(undefined4 *)(param_1 + 0x168) = 6;
      }
      *(undefined1 *)(param_1 + 0x16c) = 0;
      ExceptionList = local_c;
      return;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    FUN_004cb180();
    FUN_004cb130(0,1);
    *(undefined4 *)(param_1 + 0x168) = 7;
    ExceptionList = local_c;
    return;
  case 7:
    ExceptionList = &local_c;
    fVar8 = (float10)FUN_004d0710();
    fVar8 = fVar8 - (float10)param_3 * (float10)0.001;
    if ((float10)*(float *)(param_1 + 0x140) <= fVar8) {
      FUN_004cad50((float)fVar8,param_3);
      ExceptionList = local_c;
      return;
    }
    cVar2 = FUN_004cad50(*(undefined4 *)(param_1 + 0x140),param_3);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x168) = 8;
      ExceptionList = local_c;
      return;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x168) = 1;
    FUN_004cb130(0,0);
    ExceptionList = local_c;
    return;
  default:
    local_3c[0] = (undefined1)param_3;
    uVar4 = 0xffffffff;
    pcVar6 = s_Invalid_FSM_state_00698ccc;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    local_38 = (char *)0x0;
    local_34 = 0;
    local_30 = 0;
    ExceptionList = &local_c;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      pcVar6 = s_Invalid_FSM_state_00698ccc;
      pcVar7 = local_38;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_38[uVar4] = '\0';
      local_34 = uVar4;
    }
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_00698c80,0x1a3
                                  ,local_3c);
    (*pcVar3)();
    if (local_38 != (char *)0x0) {
      cVar2 = local_38[-1];
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        local_38[-1] = cVar2 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0(local_38 + -1);
    }
  }
  ExceptionList = local_c;
  return;
}

