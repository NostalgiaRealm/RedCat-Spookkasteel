/*
 * FUN_0050e870 at 0050e870
 * undefined FUN_0050e870(void)
 * Address ranges: 0050e870-0050ead6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0050e870(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *piStack_4c;
  char local_35;
  int local_34;
  undefined1 *puStack_30;
  char acStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636f60;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    piStack_4c = (int *)0x50e89f;
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    piStack_4c = (int *)0x0;
    local_1c[0] = local_35;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    piStack_4c = (int *)(~uVar5 - 1);
    FUN_004040f0(&DAT_006b3f70);
    piStack_4c = (int *)local_1c;
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130)
    ;
    (*pcVar3)();
    local_4 = 0xffffffff;
    piStack_4c = (int *)0x1;
    FUN_004040a0();
  }
  piStack_4c = &local_34;
  FUN_00453d20();
  local_4 = 1;
  if (local_34 != 0) {
    piStack_4c = (int *)0x50e93c;
    iVar2 = FUN_0044e4c0();
    if (iVar2 < 1) {
      piStack_4c = (int *)&local_35;
      FUN_00409810(&DAT_006b3f70);
      piStack_4c = (int *)local_1c;
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_Count__>0_0068f4c0,s___AdamSource_DaviList_h_0068f458,0x9d);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,1);
      piStack_4c = (int *)0x1;
      FUN_004040a0();
    }
    iVar2 = *(int *)(param_1 + 0x28);
    piStack_4c = (int *)0x50e990;
    iVar4 = FUN_0044e4c0();
    if ((*(int *)(iVar2 + -4 + iVar4 * 4) != 0) && (local_34 != 0)) {
      piStack_4c = (int *)0x50e9b2;
      piStack_4c = (int *)FUN_0050eae0();
      piStack_4c = (int *)*piStack_4c;
      puStack_30 = (undefined1 *)&piStack_4c;
      if (piStack_4c != (int *)0x0) {
        piStack_4c[5] = piStack_4c[5] + 1;
      }
      local_4._0_1_ = 1;
      FUN_00421430();
      cVar1 = FUN_004fbca0();
      if (cVar1 == '\0') {
        piStack_4c = (int *)0x50e9e8;
        piStack_4c = (int *)FUN_0050eae0();
        piStack_4c = (int *)*piStack_4c;
        puStack_30 = (undefined1 *)&piStack_4c;
        if (piStack_4c != (int *)0x0) {
          piStack_4c[5] = piStack_4c[5] + 1;
        }
        local_4._0_1_ = 1;
        FUN_00421430();
        cVar1 = FUN_004fb310();
        if (cVar1 == '\0') {
          uVar5 = 0xffffffff;
          pcVar6 = &DAT_006b3f70;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          piStack_4c = (int *)(~uVar5 - 1);
          acStack_2c[0] = local_35;
          iStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          FUN_004040f0(&DAT_006b3f70);
          piStack_4c = (int *)acStack_2c;
          local_4 = CONCAT31(local_4._1_3_,5);
          pcVar3 = (code *)FUN_005a07f0(s_result_00691bc0,
                                        s_D__Work_RCHorror_AdamSource_Adam_0069ea74,0xcb);
          (*pcVar3)();
          if (iStack_28 != 0) {
            piStack_4c = (int *)(iStack_28 + -1);
            cVar1 = *(char *)(iStack_28 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0();
            }
            else {
              *(char *)piStack_4c = cVar1 + -1;
            }
          }
          iStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
        }
      }
    }
  }
  local_4 = 0xffffffff;
  if ((local_34 != 0) &&
     (iVar2 = *(int *)(local_34 + 0x14) + -1, *(int *)(local_34 + 0x14) = iVar2, iVar2 == 0)) {
    piStack_4c = (int *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

