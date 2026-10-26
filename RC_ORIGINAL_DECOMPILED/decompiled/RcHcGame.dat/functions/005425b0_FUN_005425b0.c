/*
 * FUN_005425b0 at 005425b0
 * undefined FUN_005425b0(void)
 * Address ranges: 005425b0-00542a1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005425b0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  undefined1 *puStack_a8;
  int *piStack_a4;
  undefined1 uStack_8d;
  int local_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 local_7a;
  undefined1 uStack_79;
  int local_78;
  undefined1 auStack_74 [16];
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ca58;
  local_c = ExceptionList;
  local_8c = 0;
  local_88 = 0x20;
  ExceptionList = &local_c;
  local_78 = param_1;
LAB_005425e8:
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
  }
  if (iVar9 <= local_8c) {
    ExceptionList = local_c;
    return;
  }
  do {
    iVar6 = local_88;
    iVar9 = local_8c;
    if (local_88 < 0x20) {
LAB_00542623:
      piStack_a4 = (int *)&local_7a;
      puStack_a8 = &DAT_006b3f70;
      pcStack_ac = (char *)0x542636;
      FUN_00409810();
      piStack_a4 = (int *)local_2c;
      local_4 = 0;
      puStack_a8 = (undefined1 *)0x97;
      pcStack_ac = s___AdamSource_DaviList_h_0068f458;
      pcStack_b0 = s_a_Index>_0____a_Index<Count()_0068f470;
      iStack_b4 = 0x54265a;
      pcVar4 = (code *)FUN_005a07f0();
      iStack_b4 = 0x54265c;
      (*pcVar4)();
      local_4 = 0xffffffff;
      piStack_a4 = (int *)0x1;
      puStack_a8 = (undefined1 *)0x542671;
      FUN_004040a0();
    }
    else {
      piStack_a4 = (int *)0x54261f;
      iVar3 = FUN_00549ae0();
      if (iVar3 <= iVar9) goto LAB_00542623;
    }
    iVar3 = *(int *)(iVar6 + 4 + *(int *)(param_1 + 0x18));
    if ((iVar3 == 0) ||
       ((*(int *)(iVar6 + 8 + *(int *)(param_1 + 0x18)) - iVar3 & 0xfffffff8U) == 0)) break;
    if (iVar6 < 0x20) {
LAB_005426a1:
      piStack_a4 = (int *)&uStack_7c;
      puStack_a8 = &DAT_006b3f70;
      pcStack_ac = (char *)0x5426b4;
      FUN_00409810();
      piStack_a4 = (int *)auStack_5c;
      local_4 = 1;
      puStack_a8 = (undefined1 *)0x97;
      pcStack_ac = s___AdamSource_DaviList_h_0068f458;
      pcStack_b0 = s_a_Index>_0____a_Index<Count()_0068f470;
      iStack_b4 = 0x5426d8;
      pcVar4 = (code *)FUN_005a07f0();
      iStack_b4 = 0x5426da;
      (*pcVar4)();
      local_4 = 0xffffffff;
      piStack_a4 = (int *)0x1;
      puStack_a8 = (undefined1 *)0x5426ef;
      FUN_004040a0();
    }
    else {
      piStack_a4 = (int *)0x54269d;
      iVar3 = FUN_00549ae0();
      if (iVar3 <= iVar9) goto LAB_005426a1;
    }
    iVar9 = *(int *)(param_1 + 0x18);
    piStack_a4 = (int *)0x5426fc;
    iVar3 = FUN_00548d10();
    if (iVar3 < 1) {
      piStack_a4 = (int *)&uStack_79;
      puStack_a8 = &DAT_006b3f70;
      pcStack_ac = (char *)0x542713;
      FUN_00409810();
      piStack_a4 = (int *)auStack_4c;
      local_4 = 2;
      puStack_a8 = (undefined1 *)0xbb;
      pcStack_ac = s___AdamSource_DaviList_h_0068f458;
      pcStack_b0 = s_a_Index<Count()_0068f448;
      iStack_b4 = 0x542737;
      pcVar4 = (code *)FUN_005a07f0();
      iStack_b4 = 0x542739;
      (*pcVar4)();
      local_4 = 0xffffffff;
      piStack_a4 = (int *)0x1;
      puStack_a8 = (undefined1 *)0x54274e;
      FUN_004040a0();
    }
    piStack_a4 = (int *)0x542755;
    puVar5 = (undefined4 *)FUN_0054b020();
    uVar7 = *puVar5;
    piStack_a4 = (int *)0x0;
    uVar1 = puVar5[1];
    puStack_a8 = (undefined1 *)0x542763;
    puVar5 = (undefined4 *)FUN_0054af10();
    *puVar5 = uVar7;
    puVar5[1] = uVar1;
    piStack_a4 = (int *)(*(int *)(iVar6 + iVar9 + 8) + -8);
    puStack_a8 = (undefined1 *)0x542776;
    FUN_0054a280();
  } while( true );
  iStack_84 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
    }
    if (iVar9 <= iStack_84) break;
    if (local_8c != iStack_84) {
      iVar9 = 0;
LAB_005427c3:
      if (local_88 < 0x20) {
LAB_005427d9:
        piStack_a4 = (int *)&uStack_7b;
        puStack_a8 = &DAT_006b3f70;
        pcStack_ac = (char *)0x5427ec;
        FUN_00409810();
        piStack_a4 = (int *)auStack_3c;
        local_4 = 3;
        puStack_a8 = (undefined1 *)0x97;
        pcStack_ac = s___AdamSource_DaviList_h_0068f458;
        pcStack_b0 = s_a_Index>_0____a_Index<Count()_0068f470;
        iStack_b4 = 0x542810;
        pcVar4 = (code *)FUN_005a07f0();
        iStack_b4 = 0x542812;
        (*pcVar4)();
        local_4 = 0xffffffff;
        piStack_a4 = (int *)0x1;
        puStack_a8 = (undefined1 *)0x542827;
        FUN_004040a0();
      }
      else {
        piStack_a4 = (int *)0x5427d3;
        iVar6 = FUN_00549ae0();
        if (iVar6 <= local_8c) goto LAB_005427d9;
      }
      piStack_a4 = (int *)0x542833;
      iVar3 = FUN_00442d80();
      iVar6 = local_88;
      if (iVar9 < iVar3) {
        iStack_80 = 0;
        do {
          iVar6 = iStack_84;
          if (iStack_84 < 0) {
LAB_00542856:
            piStack_a4 = (int *)&uStack_8d;
            puStack_a8 = &DAT_006b3f70;
            pcStack_ac = (char *)0x54286c;
            FUN_00409810();
            piStack_a4 = (int *)auStack_1c;
            local_4 = 4;
            puStack_a8 = (undefined1 *)0x97;
            pcStack_ac = s___AdamSource_DaviList_h_0068f458;
            pcStack_b0 = s_a_Index>_0____a_Index<Count()_0068f470;
            iStack_b4 = 0x542893;
            pcVar4 = (code *)FUN_005a07f0();
            iStack_b4 = 0x542895;
            (*pcVar4)();
            local_4 = 0xffffffff;
            piStack_a4 = (int *)0x1;
            puStack_a8 = (undefined1 *)0x5428ad;
            FUN_004040a0();
          }
          else {
            piStack_a4 = (int *)0x542852;
            iVar3 = FUN_00549ae0();
            if (iVar3 <= iVar6) goto LAB_00542856;
          }
          piStack_a4 = (int *)0x5428c2;
          iVar6 = FUN_00442d80();
          if (iVar6 <= iStack_80) goto LAB_005429da;
          piStack_a4 = (int *)iStack_80;
          puStack_a8 = (undefined1 *)iStack_84;
          pcStack_ac = (char *)0x5428db;
          FUN_005494c0();
          puStack_a8 = (undefined1 *)0x5428e5;
          iStack_b4 = FUN_00548f50();
          puStack_64 = (undefined1 *)&pcStack_b0;
          iStack_b8 = 0x5428f4;
          FUN_00548a70();
          iVar6 = local_8c;
          iStack_b8 = local_8c;
          local_4 = 5;
          uStack_bc = 0x54290c;
          iStack_b4 = iVar9;
          FUN_005494c0();
          iStack_b8 = 0x542916;
          uVar7 = FUN_00548f50();
          puStack_60 = auStack_c0;
          FUN_00548a70(uVar7);
          local_4 = 0xffffffff;
          cVar2 = FUN_00542ca0();
          if (cVar2 != '\0') {
            if (local_88 < 0x20) {
LAB_0054294f:
              piStack_a4 = (int *)0x0;
              auStack_74[0] = uStack_8d;
              puStack_a8 = (undefined1 *)0x542962;
              FUN_004040a0();
              uVar8 = 0xffffffff;
              pcVar10 = &DAT_006b3f70;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar2 != '\0');
              piStack_a4 = (int *)(~uVar8 - 1);
              puStack_a8 = &DAT_006b3f70;
              pcStack_ac = (char *)0x54297f;
              FUN_004040f0();
              piStack_a4 = (int *)auStack_74;
              local_4 = 6;
              puStack_a8 = (undefined1 *)0x97;
              pcStack_ac = s___AdamSource_DaviList_h_0068f458;
              pcStack_b0 = s_a_Index>_0____a_Index<Count()_0068f470;
              iStack_b4 = 0x5429a3;
              pcVar4 = (code *)FUN_005a07f0();
              iStack_b4 = 0x5429a5;
              (*pcVar4)();
              local_4 = 0xffffffff;
              piStack_a4 = (int *)0x1;
              puStack_a8 = (undefined1 *)0x5429ba;
              FUN_004040a0();
            }
            else {
              piStack_a4 = (int *)0x54294b;
              iVar3 = FUN_00549ae0();
              if (iVar3 <= iVar6) goto LAB_0054294f;
            }
            piStack_a4 = &iStack_84;
            puStack_a8 = *(undefined1 **)(*(int *)(param_1 + 0x18) + local_88 + 8);
            pcStack_ac = (char *)0x5429d1;
            FUN_0054a090();
          }
          iStack_80 = iStack_80 + 1;
        } while( true );
      }
    }
    iStack_84 = iStack_84 + 1;
  }
  local_8c = local_8c + 1;
  local_88 = iVar6 + 0x38;
  goto LAB_005425e8;
LAB_005429da:
  iVar9 = iVar9 + 1;
  goto LAB_005427c3;
}

