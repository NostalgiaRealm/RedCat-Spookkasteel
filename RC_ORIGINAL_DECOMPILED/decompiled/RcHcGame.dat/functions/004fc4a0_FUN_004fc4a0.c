/*
 * FUN_004fc4a0 at 004fc4a0
 * undefined FUN_004fc4a0(void)
 * Address ranges: 004fc4a0-004fcb8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fc4a0(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char local_e6;
  undefined1 uStack_e5;
  int *local_e4;
  int *local_e0;
  int iStack_dc;
  int iStack_d8;
  char local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  uint uStack_c4;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  int iStack_bc;
  int iStack_b8;
  undefined1 uStack_b1;
  int iStack_b0;
  undefined1 uStack_a9;
  undefined1 local_a8 [4];
  undefined1 *puStack_a4;
  undefined4 uStack_a0;
  undefined1 local_98 [16];
  int local_88 [5];
  int iStack_74;
  undefined4 uStack_68;
  code *pcStack_64;
  char cStack_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063556d;
  pvStack_c = ExceptionList;
  local_e4 = (int *)0x0;
  local_e0 = (int *)0x0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_d0 = 0;
  local_d4 = local_e6;
  local_cc = 0;
  local_c8 = 0;
  local_4._0_1_ = 2;
  piVar2 = (int *)FUN_004f4940(local_88);
  piVar9 = (int *)*piVar2;
  local_e0 = (int *)piVar2[1];
  local_e4 = piVar9;
  if (piVar9 == (int *)0x0) {
    FUN_00409810(&DAT_006b3f70,&local_e6);
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                  local_98);
    (*pcVar3)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  piVar2 = (int *)*piVar9;
  if (piVar2 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *piVar2;
  }
  iStack_bc = 0;
  while (local_e0 = piVar2, iVar10 != 0) {
    FUN_0060a613(iVar10);
    pcVar4 = (char *)FUN_0060b060();
    uVar8 = 0xffffffff;
    pcVar12 = pcVar4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar4,~uVar8 - 1);
    if (*(char *)(iVar10 + 0x7c) != '\0') {
      iStack_bc = iStack_bc + 1;
    }
    iVar10 = 0;
    for (uVar8 = 0; (local_d0 != 0 && (uVar8 < (uint)(local_cc - local_d0 >> 4))); uVar8 = uVar8 + 1
        ) {
      puVar5 = puStack_a4;
      if (puStack_a4 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      iVar6 = FUN_004251b0(0,*(undefined4 *)(iVar10 + local_d0 + 8),puVar5,uStack_a0);
      if (iVar6 == 0) goto LAB_004fc60f;
      iVar10 = iVar10 + 0x10;
    }
    FUN_00442bf0(local_cc,local_a8);
LAB_004fc60f:
    if (local_e4 == (int *)0x0) {
      FUN_00409810(&DAT_006b3f70,&local_e6);
      local_4._0_1_ = 4;
      pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x5f,
                                    local_98);
      (*pcVar3)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    if (piVar2 == (int *)0x0) {
      FUN_00409810(&DAT_006b3f70,&uStack_e5);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,0x60,
                                    local_88);
      (*pcVar3)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    piVar2 = (int *)piVar2[1];
    piVar9 = local_e4;
    if (piVar2 == (int *)0x0) break;
    iVar10 = *piVar2;
  }
  FUN_0044e4a0(&uStack_e5);
  uStack_68 = 0;
  pcStack_64 = FUN_005affe0;
  cStack_60 = '\0';
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_005afe30(s___________MemReport__0069d690);
  local_88[0] = 0;
  uStack_c4 = 0;
  iStack_d8 = 0;
  do {
    iVar10 = 0;
    if ((local_d0 == 0) || ((uint)(local_cc - local_d0 >> 4) <= uStack_c4)) {
      iVar11 = 0;
      iVar6 = FUN_00442d80();
      if (0 < iVar6) {
        do {
          FUN_0045db40(iVar10 + iStack_74,0,0xffffffff);
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 0x10;
          iVar6 = FUN_00442d80();
        } while (iVar11 < iVar6);
      }
      uVar7 = FUN_005ae390(auStack_5c,s_Total_of__d_object_s____d_active_0069d648,local_88[0],
                           iStack_bc);
      local_4._0_1_ = 0xd;
      FUN_0045db40(uVar7,0,0xffffffff);
      local_4._0_1_ = 6;
      FUN_004040a0(1);
      local_4._0_1_ = 0xe;
      FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
      FUN_005ae770();
      local_4._0_1_ = 2;
      FUN_0044b430();
      local_4._0_1_ = 1;
      FUN_00442da0(local_d0,local_cc);
      FUN_005fe5f0(local_d0);
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
      ExceptionList = pvStack_c;
      return;
    }
    iStack_dc = 0;
    iStack_b8 = 0;
    iStack_b0 = 0;
    if (piVar9 == (int *)0x0) {
      FUN_00409810(&DAT_006b3f70,&uStack_be);
      local_4._0_1_ = 7;
      pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                    auStack_3c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_004040a0(1);
    }
    piVar2 = (int *)*piVar9;
    local_e0 = piVar2;
    if (piVar2 != (int *)0x0) {
      iVar10 = *piVar2;
      while (local_e0 = piVar2, iVar10 != 0) {
        FUN_0060a613(iVar10);
        pcVar4 = (char *)FUN_0060b060();
        uVar8 = 0xffffffff;
        pcVar12 = pcVar4;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(pcVar4,~uVar8 - 1);
        puVar5 = puStack_a4;
        if (puStack_a4 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        iVar6 = FUN_004251b0(0,*(undefined4 *)(iStack_d8 + local_d0 + 8),puVar5,uStack_a0);
        if (iVar6 == 0) {
          iStack_dc = iStack_dc + 1;
          if (*(char *)(iVar10 + 0x7c) != '\0') {
            iStack_b8 = iStack_b8 + 1;
          }
          if (*(char *)(iVar10 + 0xde) != '\0') {
            iStack_b0 = iStack_b0 + 1;
          }
        }
        if (local_e4 == (int *)0x0) {
          FUN_00409810(&DAT_006b3f70,&uStack_a9);
          local_4._0_1_ = 8;
          pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                        0x5f,auStack_4c);
          (*pcVar3)();
          local_4 = CONCAT31(local_4._1_3_,6);
          FUN_004040a0(1);
        }
        if (piVar2 == (int *)0x0) {
          FUN_00409810(&DAT_006b3f70,&uStack_bd);
          local_4._0_1_ = 9;
          pcVar3 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,
                                        0x60,auStack_1c);
          (*pcVar3)();
          local_4 = CONCAT31(local_4._1_3_,6);
          FUN_004040a0(1);
        }
        piVar2 = (int *)piVar2[1];
        piVar9 = local_e4;
        if (piVar2 == (int *)0x0) break;
        iVar10 = *piVar2;
      }
    }
    puVar5 = *(undefined1 **)(iStack_d8 + 4 + local_d0);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    FUN_005ae390(local_98,s__3d___32s__3d_active___2d_inrang_0069d66c,iStack_dc,puVar5,iStack_b8,
                 iStack_b0);
    local_4._0_1_ = 10;
    if (cStack_60 != '\0') {
      FUN_00409810(&DAT_006b3f70,&uStack_b1);
      local_4._0_1_ = 0xb;
      pcVar3 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                    s___AdamSource_DaviSortedList_h_00690798,0x49,auStack_2c);
      (*pcVar3)();
      local_4._0_1_ = 10;
      FUN_004040a0(1);
    }
    iVar10 = FUN_004f3390(local_98,&local_e6);
    if (local_e6 != '\0') {
      FUN_00409810(&DAT_006b3f70,&uStack_bf);
      local_4._0_1_ = 0xc;
      pcVar3 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b
                                    ,auStack_5c);
      (*pcVar3)();
      local_4._0_1_ = 10;
      FUN_004040a0(1);
    }
    FUN_00442bf0(iVar10 * 0x10 + iStack_74,local_98);
    local_88[0] = local_88[0] + iStack_dc;
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_004040a0(1);
    uStack_c4 = uStack_c4 + 1;
    iStack_d8 = iStack_d8 + 0x10;
  } while( true );
}

