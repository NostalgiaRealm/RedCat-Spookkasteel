/*
 * FUN_00456c70 at 00456c70
 * undefined FUN_00456c70(void)
 * Address ranges: 00456c70-004571c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00456c70(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piStack_a8;
  int *local_94;
  undefined1 local_8d;
  int *local_8c;
  int local_88;
  undefined1 auStack_81 [2];
  undefined1 auStack_7f [2];
  undefined1 auStack_7d [5];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  int local_70 [4];
  undefined1 *puStack_60;
  int aiStack_5c [4];
  int aiStack_4c [4];
  int aiStack_3c [4];
  int aiStack_2c [4];
  int aiStack_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00626b41;
  pvStack_c = ExceptionList;
  iVar7 = 0;
  local_4 = 1;
  local_8c = (int *)0x0;
  piStack_a8 = (int *)0x456caf;
  ExceptionList = &pvStack_c;
  local_88 = param_1;
  FUN_005844b0();
  local_4._0_1_ = 2;
  auStack_7d._1_4_ = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    piStack_a8 = (int *)0x456cc5;
    auStack_7d._1_4_ = FUN_0055b280();
  }
  iVar3 = param_1;
  if (param_2 != 0) {
    iVar6 = 0;
    piStack_a8 = (int *)0x456ce4;
    iVar2 = FUN_004574b0();
    if (0 < iVar2) {
      do {
        piStack_a8 = (int *)0x456cfd;
        FUN_005844b0();
        local_4._0_1_ = 3;
        if (iVar7 < 0) {
LAB_00456d14:
          piStack_a8 = (int *)&local_8d;
          FUN_00409810(&DAT_006b3f70);
          piStack_a8 = local_70;
          local_4._0_1_ = 4;
          pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                        s___AdamSource_DaviList_h_0068f458,0x97);
          (*pcVar4)();
          local_4._0_1_ = 3;
          piStack_a8 = (int *)0x1;
          FUN_004040a0();
        }
        else {
          piStack_a8 = (int *)0x456d10;
          iVar3 = FUN_004574b0();
          if (iVar3 <= iVar6) goto LAB_00456d14;
        }
        iVar3 = *(int *)(param_1 + 0x28);
        iVar2 = *(int *)(iVar3 + 0x30 + iVar7);
        if (iVar2 != 0) {
          if (iVar2 != 0) {
            piStack_a8 = (int *)0x456d7a;
            FUN_004098d0();
          }
          *(undefined4 *)(iVar3 + 0x30 + iVar7) = 0;
          piStack_a8 = (int *)0x456d87;
          FUN_005844b0();
        }
        local_4._0_1_ = 2;
        piStack_a8 = (int *)0x456d98;
        FUN_0057d310();
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x50;
        piStack_a8 = (int *)0x456da3;
        iVar2 = FUN_004574b0();
        iVar3 = local_88;
      } while (iVar6 < iVar2);
    }
  }
  if (param_3 != 0) {
    local_94 = (int *)0x0;
    piStack_a8 = (int *)0x456dce;
    iVar7 = FUN_004574b0();
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        if (iVar7 < 0) {
LAB_00456de7:
          piStack_a8 = (int *)&local_8d;
          FUN_00409810(&DAT_006b3f70);
          piStack_a8 = local_70;
          local_4._0_1_ = 5;
          pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                        s___AdamSource_DaviList_h_0068f458,0x97);
          (*pcVar4)();
          local_4._0_1_ = 2;
          piStack_a8 = (int *)0x1;
          FUN_004040a0();
        }
        else {
          piStack_a8 = (int *)0x456de3;
          iVar2 = FUN_004574b0();
          if (iVar2 <= (int)local_94) goto LAB_00456de7;
        }
        if (*(int *)(iVar7 + 0x18 + *(int *)(iVar3 + 0x28)) == 0) {
          piStack_a8 = (int *)0x0;
          FUN_00457240();
          piStack_a8 = &local_88;
          local_4._0_1_ = 0xe;
          FUN_00457260(local_94);
          FUN_00537300();
          local_4._0_1_ = 2;
          piStack_a8 = (int *)0x4571bc;
          FUN_0057d310();
        }
        else {
          if (iVar7 < 0) {
LAB_00456e51:
            piStack_a8 = (int *)auStack_81;
            FUN_00409810(&DAT_006b3f70);
            piStack_a8 = aiStack_5c;
            local_4._0_1_ = 6;
            pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                          s___AdamSource_DaviList_h_0068f458,0x97);
            (*pcVar4)();
            local_4._0_1_ = 2;
            piStack_a8 = (int *)0x1;
            FUN_004040a0();
          }
          else {
            piStack_a8 = (int *)0x456e4d;
            iVar2 = FUN_004574b0();
            if (iVar2 <= (int)local_94) goto LAB_00456e51;
          }
          uVar1 = auStack_7d._1_4_;
          iVar2 = *(int *)(iVar3 + 0x28);
          if (*(int *)(auStack_7d._1_4_ + 0xd8) == 0) {
            piStack_a8 = (int *)(auStack_81 + 1);
            FUN_00409810(&DAT_006b3f70);
            piStack_a8 = aiStack_2c;
            local_4._0_1_ = 7;
            pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,
                                          s___AdamSource_AdamEngine_h_0068eb58,0x188);
            (*pcVar4)();
            local_4._0_1_ = 2;
            piStack_a8 = (int *)0x1;
            FUN_004040a0();
          }
          piStack_a8 = (int *)(iVar7 + 0x20 + iVar2);
          piVar5 = (int *)FUN_0050d980(auStack_74);
          local_4._0_1_ = 8;
          if (local_8c != (int *)*piVar5) {
            if (local_8c != (int *)0x0) {
              piStack_a8 = (int *)0x456f2f;
              FUN_004098d0();
            }
            local_8c = (int *)*piVar5;
            piStack_a8 = (int *)0x456f3e;
            FUN_005844b0();
          }
          local_4 = CONCAT31(local_4._1_3_,2);
          piStack_a8 = (int *)0x456f4f;
          FUN_0057d310();
          if (iVar7 < 0) {
LAB_00456f60:
            piStack_a8 = (int *)(auStack_7f + 1);
            FUN_00409810(&DAT_006b3f70);
            piStack_a8 = aiStack_4c;
            local_4._0_1_ = 9;
            pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                          s___AdamSource_DaviList_h_0068f458,0x97);
            (*pcVar4)();
            local_4 = CONCAT31(local_4._1_3_,2);
            piStack_a8 = (int *)0x1;
            FUN_004040a0();
          }
          else {
            piStack_a8 = (int *)0x456f5a;
            iVar2 = FUN_004574b0();
            if (iVar2 <= (int)local_94) goto LAB_00456f60;
          }
          iVar2 = *(int *)(iVar3 + 0x28);
          if (*(int *)(uVar1 + 0xd8) == 0) {
            piStack_a8 = (int *)auStack_7d;
            FUN_00409810(&DAT_006b3f70);
            piStack_a8 = aiStack_3c;
            local_4._0_1_ = 10;
            pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,
                                          s___AdamSource_AdamEngine_h_0068eb58,0x188);
            (*pcVar4)();
            local_4 = CONCAT31(local_4._1_3_,2);
            piStack_a8 = (int *)0x1;
            FUN_004040a0();
          }
          piStack_a8 = (int *)(iVar7 + 0x10 + iVar2);
          piVar5 = (int *)FUN_0050d980(auStack_78);
          local_4._0_1_ = 0xb;
          if (iVar7 < 0) {
LAB_00457035:
            piStack_a8 = (int *)auStack_7f;
            FUN_00409810(&DAT_006b3f70);
            piStack_a8 = aiStack_1c;
            local_4._0_1_ = 0xc;
            pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                          s___AdamSource_DaviList_h_0068f458,0x97);
            (*pcVar4)();
            local_4._0_1_ = 0xb;
            piStack_a8 = (int *)0x1;
            FUN_004040a0();
          }
          else {
            piStack_a8 = (int *)0x45702f;
            iVar2 = FUN_004574b0();
            if (iVar2 <= (int)local_94) goto LAB_00457035;
          }
          iVar2 = *(int *)(iVar3 + 0x28);
          iVar6 = *(int *)(iVar7 + 0x30 + iVar2);
          if (iVar6 != *piVar5) {
            if (iVar6 != 0) {
              piStack_a8 = (int *)0x4570a3;
              FUN_004098d0();
            }
            *(int *)(iVar7 + 0x30 + iVar2) = *piVar5;
            piStack_a8 = (int *)0x4570af;
            FUN_005844b0();
          }
          local_4._0_1_ = 2;
          piStack_a8 = (int *)0x4570c0;
          FUN_0057d310();
          piStack_a8 = local_94;
          iVar2 = FUN_00457260();
          if ((*(int *)(iVar2 + 0x30) != 0) && (local_8c != (int *)0x0)) {
            puStack_60 = (undefined1 *)&piStack_a8;
            piStack_a8 = local_8c;
            FUN_005844b0();
            local_4._0_1_ = 2;
            FUN_00457260(local_94);
            FUN_00412de0();
            FUN_0050aea0();
          }
        }
        local_94 = (int *)((int)local_94 + 1);
        iVar7 = iVar7 + 0x50;
        piStack_a8 = (int *)0x457122;
        iVar2 = FUN_004574b0();
      } while ((int)local_94 < iVar2);
    }
  }
  local_4._0_1_ = 1;
  piStack_a8 = (int *)0x45713b;
  FUN_0057d310();
  local_4 = (uint)local_4._1_3_ << 8;
  piStack_a8 = (int *)0x45714f;
  FUN_0057d310();
  local_4 = 0xffffffff;
  piStack_a8 = (int *)0x457166;
  FUN_0057d310();
  ExceptionList = pvStack_c;
  return;
}

