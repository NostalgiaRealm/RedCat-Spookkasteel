/*
 * FUN_005695c0 at 005695c0
 * undefined FUN_005695c0(void)
 * Address ranges: 005695c0-005697d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f8a4 slot 1 for .?AVCAdamInterpolatorLinear@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f8a4 slot 1 for
   .?AVCAdamInterpolatorLinear@@. Original bytes unchanged; names and types still inferred. */

float10 __thiscall FUN_005695c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_006404d8;
  pvStack_c = ExceptionList;
  if ((param_2 < 0) || (ExceptionList = &pvStack_c, *(int *)(param_1 + 0x30) <= param_2)) {
    local_3c[0] = (undefined1)param_2;
    uVar6 = 0xffffffff;
    local_38 = 0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_34 = 0;
    local_30 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_a_Index_>__0____a_Index_<_m_NumF_006a4164,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a40b0,0xb9,local_3c);
    (*pcVar4)();
    local_4 = -1;
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar2 == -1) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(s_a_Value1____ADAMTIME_NONE_006a41dc,
                                  s___AdamSource_AdamClock_h_0068e22c,0xa7,local_2c);
    (*pcVar4)();
    local_4 = iVar2;
    FUN_004040a0(1);
  }
  if (iVar3 == -1) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 2;
    pcVar4 = (code *)FUN_005a07f0(s_a_Value2____ADAMTIME_NONE_006a41c0,
                                  s___AdamSource_AdamClock_h_0068e22c,0xa8,auStack_1c);
    (*pcVar4)();
    local_4 = iVar3;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    pcVar7 = "";
  }
  else {
    pcVar7 = (char *)((param_2 + 1) % *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)(*(int *)(param_1 + 0x18) + param_2);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    pcVar8 = "";
  }
  else {
    pcVar8 = (char *)(*(int *)(param_1 + 0x18) + param_2);
  }
  ExceptionList = pvStack_c;
  return ((((float10)(iVar2 % iVar3) / (float10)*(int *)(param_1 + 0x28)) *
           (float10)((int)*pcVar7 - (int)*pcVar5) + (float10)(int)*pcVar8) - (float10)97.0) *
         (float10)0.04;
}

