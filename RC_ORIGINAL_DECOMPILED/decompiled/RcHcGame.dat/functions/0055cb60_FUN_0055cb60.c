/*
 * FUN_0055cb60 at 0055cb60
 * undefined FUN_0055cb60(void)
 * Address ranges: 0055cb60-0055ceb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0055cb60(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  int local_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f6a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  FUN_00564130(0);
  local_60 = 0;
  iVar4 = *(int *)(param_1 + 0x1a8);
  local_4 = 0;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x14) + -1;
    *(int *)(iVar4 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    FUN_005844b0();
  }
  local_4 = 0xffffffff;
  FUN_00560b90();
  if (*(undefined4 **)(param_1 + 0xfc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xfc))(1);
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xf8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xf8))(1);
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xd8))(1);
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    FUN_005b7cb0(*(int *)(param_1 + 0x100));
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  local_60 = 0;
  do {
    iVar4 = local_60;
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
    }
    if (iVar2 <= local_60) {
      FUN_0055d670();
      *(undefined1 *)(param_1 + 0x125) = 0;
      ExceptionList = pvStack_c;
      return;
    }
    if ((local_60 < 0) || (iVar2 = FUN_0044e4c0(), iVar2 <= iVar4)) {
      auStack_5c[0] = uStack_63;
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
      local_4 = 1;
      pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,auStack_5c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (*(int *)(iVar4 + local_60 * 4) == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_63);
      local_4 = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_4c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(iVar4 + local_60 * 4) + 0x14) != 1) {
      if ((local_60 < 0) || (iVar4 = FUN_0044e4c0(), iVar4 <= local_60)) {
        FUN_00409810(&DAT_006b3f70,&uStack_62);
        local_4 = 3;
        pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_3c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(param_1 + 0x18) + local_60 * 4) == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_61);
        local_4 = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_2c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar4 = FUN_00556560();
      puVar5 = *(undefined1 **)(iVar4 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(auStack_1c,s_camera__s_is_still_in_use_006a2c54,puVar5);
      local_4 = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_Cameras__i___>GetUseCount____1_006a2c30,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x1dd,uVar6);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    local_60 = local_60 + 1;
  } while( true );
}

