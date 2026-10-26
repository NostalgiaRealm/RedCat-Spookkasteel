/*
 * FUN_00402db0 at 00402db0
 * undefined FUN_00402db0(void)
 * Address ranges: 00402db0-00403062
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402db0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  TypeDescriptor *pTVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  TypeDescriptor *pTStack_54;
  TypeDescriptor *pTStack_50;
  undefined1 auStack_38 [4];
  undefined1 *local_34;
  int *local_30;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061fad8;
  pvStack_c = ExceptionList;
  pTStack_50 = (TypeDescriptor *)&local_34;
  pTStack_54 = (TypeDescriptor *)0x402ddd;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0();
  local_4 = 0;
  if (*piVar3 == 0) {
    pTStack_50 = (TypeDescriptor *)0x0;
    pTStack_54 = (TypeDescriptor *)0x402e00;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pTStack_50 = (TypeDescriptor *)(~uVar5 - 1);
    pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
    FUN_004040f0();
    pTStack_50 = (TypeDescriptor *)local_1c;
    local_4._0_1_ = 1;
    pTStack_54 = (TypeDescriptor *)0xb6;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    pTStack_50 = (TypeDescriptor *)0x1;
    pTStack_54 = (TypeDescriptor *)0x402e51;
    FUN_004040a0();
  }
  iVar8 = *(int *)(*piVar3 + 0x360);
  local_4 = 0xffffffff;
  if ((local_34 != (undefined1 *)0x0) &&
     (iVar1 = *(int *)(local_34 + 0x14), *(int *)(local_34 + 0x14) = iVar1 + -1, iVar1 + -1 == 0)) {
    pTStack_50 = (TypeDescriptor *)0x0;
    pTStack_54 = (TypeDescriptor *)0x402e81;
    FUN_005abfc0();
  }
  if (iVar8 == 0) {
    pTStack_54 = (TypeDescriptor *)0x402e9b;
    pTStack_50 = (TypeDescriptor *)iVar8;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pTStack_50 = (TypeDescriptor *)0x1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pTVar6 = (TypeDescriptor *)(~uVar5 - 1);
    pTStack_54 = pTVar6;
    cVar2 = FUN_00401940();
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar5 = (uint)pTVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puStack_28 = *puVar7;
        puVar7 = puVar7 + 1;
        puStack_28 = puStack_28 + 1;
      }
      for (uVar5 = (uint)pTVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puStack_28 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puStack_28 = (undefined4 *)((int)puStack_28 + 1);
      }
      pTStack_54 = (TypeDescriptor *)0x402edf;
      pTStack_50 = pTVar6;
      FUN_00404190();
    }
    pTStack_50 = (TypeDescriptor *)auStack_2c;
    local_4 = 2;
    pTStack_54 = (TypeDescriptor *)0x9d;
    pcVar4 = (code *)FUN_005a07f0(s_player____0_0068d620,s_D__Work_RCHorror_RCSource_RcEnem_0068d584
                                 );
    (*pcVar4)();
    local_4 = 0xffffffff;
    pTStack_50 = (TypeDescriptor *)0x1;
    pTStack_54 = (TypeDescriptor *)0x402f18;
    FUN_004040a0();
  }
  pTStack_50 = (TypeDescriptor *)0x0;
  pTStack_54 = &CRCPlayer::RTTI_Type_Descriptor;
  pTStack_50 = (TypeDescriptor *)FUN_0060a6f2(iVar8,0,&CAdamPlayer::RTTI_Type_Descriptor);
  if (pTStack_50 == (TypeDescriptor *)0x0) {
    pTStack_54 = (TypeDescriptor *)0x402f4b;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pTStack_50 = (TypeDescriptor *)0x1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pTVar6 = (TypeDescriptor *)(~uVar5 - 1);
    pTStack_54 = pTVar6;
    cVar2 = FUN_00401940();
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar10 = puStack_18;
      for (uVar5 = (uint)pTVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar5 = (uint)pTVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      pTStack_54 = (TypeDescriptor *)0x402f8f;
      pTStack_50 = pTVar6;
      FUN_00404190();
    }
    pTStack_50 = (TypeDescriptor *)local_1c;
    local_4 = 3;
    pTStack_54 = (TypeDescriptor *)0x9f;
    pcVar4 = (code *)FUN_005a07f0(s_redcat____0_0068d5d8,s_D__Work_RCHorror_RCSource_RcEnem_0068d584
                                 );
    (*pcVar4)();
    local_4 = 0xffffffff;
    pTStack_50 = (TypeDescriptor *)0x1;
    pTStack_54 = (TypeDescriptor *)0x402fc8;
    FUN_004040a0();
  }
  pTStack_50 = (TypeDescriptor *)0x402fcf;
  FUN_00431170();
  pTStack_50 = (TypeDescriptor *)auStack_38;
  pTStack_54 = (TypeDescriptor *)0x402fdb;
  FUN_004ff240();
  pTStack_50 = (TypeDescriptor *)0x1;
  local_34 = (undefined1 *)&pTStack_54;
  local_4 = 4;
  FUN_00449760(auStack_38);
  (**(code **)(*(int *)local_30[9] + 0x94))();
  cVar2 = (**(code **)(*(int *)local_30[9] + 0x88))(0);
  if (cVar2 == '\0') {
    (**(code **)(*local_30 + 0x24))();
  }
  else {
    (**(code **)(*local_30 + 0x10))();
  }
  uStack_10 = 0xffffffff;
  if ((unaff_EBP != 0) &&
     (iVar8 = *(int *)(unaff_EBP + 0x14) + -1, *(int *)(unaff_EBP + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = puStack_18;
  return;
}

