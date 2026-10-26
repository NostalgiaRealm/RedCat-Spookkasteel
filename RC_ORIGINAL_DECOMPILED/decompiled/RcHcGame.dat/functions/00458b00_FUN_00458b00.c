/*
 * FUN_00458b00 at 00458b00
 * undefined FUN_00458b00(void)
 * Address ranges: 00458b00-00458de8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00458b00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EBX;
  int iVar6;
  char *pcVar7;
  undefined4 *puStack_58;
  int **ppiStack_54;
  undefined1 uVar8;
  undefined4 uStack_40;
  int *local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626d68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ppiStack_54 = (int **)0x458b2e;
    ExceptionList = &pvStack_c;
    FUN_004bc480();
  }
  ppiStack_54 = &local_3c;
  puStack_58 = (undefined4 *)0x458b40;
  FUN_00409f20();
  local_4 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_3c == (int *)0x0) {
    ppiStack_54 = (int **)0x0;
    local_1c[0] = uStack_40._3_1_;
    puStack_58 = (undefined4 *)0x458b8e;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    ppiStack_54 = (int **)(~uVar5 - 1);
    puStack_58 = (undefined4 *)&DAT_006b3f70;
    FUN_004040f0();
    ppiStack_54 = (int **)local_1c;
    local_4._0_1_ = 1;
    puStack_58 = (undefined4 *)0xb6;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    ppiStack_54 = (int **)0x1;
    puStack_58 = (undefined4 *)0x458bde;
    FUN_004040a0();
  }
  ppiStack_54 = (int **)0x458be7;
  FUN_00556710();
  if (local_3c == (int *)0x0) {
    ppiStack_54 = (int **)0x0;
    local_1c[0] = uStack_40._3_1_;
    puStack_58 = (undefined4 *)0x458c01;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    ppiStack_54 = (int **)(~uVar5 - 1);
    puStack_58 = (undefined4 *)&DAT_006b3f70;
    FUN_004040f0();
    ppiStack_54 = (int **)local_1c;
    local_4._0_1_ = 2;
    puStack_58 = (undefined4 *)0xb6;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    ppiStack_54 = (int **)0x1;
    puStack_58 = (undefined4 *)0x458c51;
    FUN_004040a0();
  }
  ppiStack_54 = (int **)&local_34;
  puStack_58 = (undefined4 *)0x458c5f;
  (**(code **)(*local_3c + 4))();
  uVar8 = (undefined1)((uint)unaff_EBX >> 0x18);
  if (uStack_40 == 0) {
    puStack_58 = (undefined4 *)0x0;
    local_20 = CONCAT31(local_20._1_3_,uVar8);
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    puStack_58 = (undefined4 *)(~uVar5 - 1);
    FUN_004040f0(&DAT_006b3f70);
    puStack_58 = &local_20;
    puStack_8._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar3)();
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    puStack_58 = (undefined4 *)0x1;
    FUN_004040a0();
  }
  puStack_58 = &local_2c;
  FUN_005566c0();
  if (uStack_40 == 0) {
    puStack_58 = (undefined4 *)0x0;
    local_20 = CONCAT31(local_20._1_3_,uVar8);
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    puStack_58 = (undefined4 *)(~uVar5 - 1);
    FUN_004040f0(&DAT_006b3f70);
    puStack_58 = &local_20;
    puStack_8._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar3)();
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    puStack_58 = (undefined4 *)0x1;
    FUN_004040a0();
  }
  puStack_58 = (undefined4 *)0x458d46;
  FUN_005569b0();
  local_3c = (int *)&puStack_58;
  if (uStack_40 != 0) {
    *(int *)(uStack_40 + 0x14) = *(int *)(uStack_40 + 0x14) + 1;
  }
  FUN_00563d00();
  *(undefined4 *)(param_1 + 0x410) = uStack_38;
  *(undefined4 *)(param_1 + 0x414) = local_34;
  *(undefined4 *)(param_1 + 0x418) = local_30;
  puStack_58 = &local_20;
  puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x360) + 0x48))();
  pvStack_c = (void *)0xffffffff;
  *(undefined4 *)(param_1 + 0x424) = *puVar4;
  *(undefined4 *)(param_1 + 0x428) = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x42c) = uVar2;
  if ((unaff_EBX != 0) &&
     (iVar6 = *(int *)(unaff_EBX + 0x14) + -1, *(int *)(unaff_EBX + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_14;
  return;
}

