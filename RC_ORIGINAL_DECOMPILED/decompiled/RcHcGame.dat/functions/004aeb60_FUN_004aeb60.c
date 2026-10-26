/*
 * FUN_004aeb60 at 004aeb60
 * undefined FUN_004aeb60(void)
 * Address ranges: 004aeb60-004aed40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ead0 slot 1 for .?AVCAdamCreateLightCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ead0 slot 1 for
   .?AVCAdamCreateLightCell@@. Original bytes unchanged; names and types still inferred. */

void __thiscall
FUN_004aeb60(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar7 = param_5;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e438;
  local_c = ExceptionList;
  if ((char)param_4 == '\0') {
    return;
  }
  ExceptionList = &local_c;
  if (param_5 != (int *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x54);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    ExceptionList = &local_c;
    iVar3 = FUN_004251b0(0,param_5[0x19],puVar2,*(undefined4 *)(param_1 + 0x58));
    if (iVar3 == 0) goto LAB_004aec3b;
  }
  local_2c[0] = (char)param_4;
  uVar8 = 0xffffffff;
  local_28 = 0;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_24 = 0;
  local_20 = 0;
  FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
  local_4 = 0;
  pcVar4 = (code *)FUN_005a07f0(s_go____0____go_>GetName____m_Game_006961d8,
                                s_D__Work_RCHorror_AdamSource_Adam_006965f0,0x9b,local_2c);
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
LAB_004aec3b:
  if (piVar7 != (int *)0x0) {
    piVar5 = (int *)FUN_004e34e0(param_1 + 100);
    FUN_004e3140(*(undefined4 *)(param_1 + 0x60));
    iVar3 = *piVar5;
    uVar6 = (**(code **)(*piVar7 + 0x48))(local_2c);
    (**(code **)(iVar3 + 0x4c))(uVar6);
    FUN_00502350(1);
    piVar7 = (int *)FUN_004042e0(&param_4);
    local_4 = 1;
    if (*piVar7 == 0) {
      auStack_1c[0] = (char)param_4;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_1c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    FUN_004f41c0(piVar5);
    local_4 = 0xffffffff;
    if ((param_4 != 0) &&
       (iVar3 = *(int *)(param_4 + 0x14) + -1, *(int *)(param_4 + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = local_c;
  return;
}

