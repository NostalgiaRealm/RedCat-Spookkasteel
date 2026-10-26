/*
 * FUN_004848e0 at 004848e0
 * undefined FUN_004848e0(void)
 * Address ranges: 004848e0-00484b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004848e0(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uStack_4c;
  undefined4 *puStack_38;
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  undefined1 local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006298b8;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0055b280();
  }
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
    FUN_005639e0();
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      local_1c = uStack_4c._3_1_;
      FUN_004040a0();
      iVar4 = -1;
      pcVar8 = &DAT_006b3f70;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70);
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    iVar4 = FUN_0060a6f2(*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x360),0,
                         &CAdamPlayer::RTTI_Type_Descriptor,&CRCPlayer::RTTI_Type_Descriptor);
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 500) == 0) {
        FUN_004040a0();
        uVar5 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar1 = FUN_00401940(uVar5);
        if (cVar1 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puStack_38 = *puVar7;
            puVar7 = puVar7 + 1;
            puStack_38 = puStack_38 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puStack_38 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puStack_38 = (undefined4 *)((int)puStack_38 + 1);
          }
          FUN_00404190();
        }
        local_4 = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_HUD____0_00690410,s___AdamSource_AdamPlayer_h_0068f988,
                                      0x161);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      (**(code **)(**(int **)(iVar4 + 500) + 0x18))();
      if (*(int *)(iVar4 + 0x1f8) == 0) {
        auStack_30[0] = (undefined1)((uint)unaff_EBX >> 0x18);
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar1 = FUN_00401940(uVar5,1);
        if (cVar1 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puStack_2c = *puVar7;
            puVar7 = puVar7 + 1;
            puStack_2c = puStack_2c + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puStack_2c = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puStack_2c = (undefined4 *)((int)puStack_2c + 1);
          }
          FUN_00404190(uVar5);
        }
        puStack_8 = (undefined1 *)0x2;
        pcVar3 = (code *)FUN_005a07f0(s_m_Communicator____0_006934bc,
                                      s___AdamSource_AdamPlayer_h_0068f988,0x167,auStack_30);
        (*pcVar3)();
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_004040a0(1);
        iVar2 = uStack_4c;
      }
      FUN_00513c70(iVar2);
      (**(code **)(*(int *)(iVar4 + 600) + 8))(iVar2);
    }
  }
  FUN_00529a80();
  ExceptionList = pvStack_c;
  return;
}

