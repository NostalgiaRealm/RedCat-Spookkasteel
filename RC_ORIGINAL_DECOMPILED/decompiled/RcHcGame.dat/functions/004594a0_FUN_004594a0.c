/*
 * FUN_004594a0 at 004594a0
 * undefined FUN_004594a0(void)
 * Address ranges: 004594a0-004598bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004594a0(int param_1,undefined1 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBX;
  char *pcVar6;
  float10 fVar7;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626dc8;
  local_c = ExceptionList;
  local_40 = 0xc1a00000;
  local_3c = 0;
  local_38 = 0.0;
  ExceptionList = &local_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &local_c;
    FUN_004bc480();
  }
  FUN_00409f20(&local_44);
  local_4 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (local_44 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    iVar2 = local_44[5];
    local_44[5] = iVar2 + -1;
    if (iVar2 + -1 != 0) {
      ExceptionList = local_c;
      return;
    }
    goto LAB_004598a5;
  }
  FUN_0045a3e0();
  switch(*(undefined4 *)(param_1 + 0x450)) {
  case 5:
  default:
switchD_00459546_default:
    FUN_004598e0(param_3,&local_40);
LAB_004595fa:
    FUN_0045ae30();
    break;
  case 6:
    goto switchD_00459546_default;
  case 7:
    if (*(char *)(param_1 + 0x454) != '\0') {
      *(undefined4 *)(param_1 + 0x508) = 0;
      *(undefined1 *)(param_1 + 0x454) = 0;
    }
    FUN_00459d40(param_3);
    break;
  case 8:
    if (*(char *)(param_1 + 0x454) != '\0') {
      *(undefined4 *)(param_1 + 0x508) = 0;
      *(undefined1 *)(param_1 + 0x454) = 0;
    }
    FUN_00459d40(param_3);
    break;
  case 9:
    FUN_00459e50(param_3,&local_40);
    goto LAB_004595fa;
  case 10:
    if (*(char *)(param_1 + 0x454) != '\0') {
      *(undefined4 *)(param_1 + 0x508) = 0;
      *(undefined4 *)(param_1 + 0x510) = 0;
    }
    FUN_0045a130(param_3,&local_40);
  }
  local_28 = *(undefined4 *)(param_1 + 0x3b8);
  local_24 = *(undefined4 *)(param_1 + 0x3bc);
  local_34 = *(undefined4 *)(param_1 + 0x3c4);
  local_20 = *(undefined4 *)(param_1 + 0x3c0);
  local_30 = *(undefined4 *)(param_1 + 0x3c8);
  local_2c = *(undefined4 *)(param_1 + 0x3cc);
  if (local_44 == (int *)0x0) {
    local_1c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_00556710();
  if (local_44 == (int *)0x0) {
    local_1c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  (**(code **)(*local_44 + 4))(&local_28);
  if (unaff_EBX == 0) {
    local_20 = CONCAT31(local_20._1_3_,param_2);
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    puStack_8._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &local_20);
    (*pcVar3)();
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    FUN_004040a0(1);
  }
  FUN_005566c0(&local_38);
  if (unaff_EBX == 0) {
    local_20 = CONCAT31(local_20._1_3_,param_2);
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    puStack_8._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &local_20);
    (*pcVar3)();
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    FUN_004040a0(1);
  }
  FUN_005569b0();
  *(float *)(param_1 + 0x374) = local_38;
  *(undefined4 *)(param_1 + 0x378) = local_34;
  *(undefined4 *)(param_1 + 0x37c) = local_30;
  fVar7 = (float10)FUN_005b1630(local_40);
  *(float *)(param_1 + 0x378) = (float)fVar7;
  fVar7 = (float10)FUN_005b1630(local_44);
  *(float *)(param_1 + 0x374) = (float)fVar7;
  *(undefined4 *)(param_1 + 0x410) = local_2c;
  *(undefined4 *)(param_1 + 0x414) = local_28;
  *(undefined4 *)(param_1 + 0x418) = local_24;
  puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x360) + 0x48))(&local_20);
  *(undefined4 *)(param_1 + 0x424) = *puVar4;
  *(undefined4 *)(param_1 + 0x428) = puVar4[1];
  *(undefined4 *)(param_1 + 0x42c) = puVar4[2];
  if ((local_44 != (int *)0x0) && (iVar2 = local_44[5], local_44[5] = iVar2 + -1, iVar2 + -1 == 0))
  {
LAB_004598a5:
    local_4 = 0xffffffff;
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

