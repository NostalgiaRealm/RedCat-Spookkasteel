/*
 * FUN_0049f410 at 0049f410
 * undefined FUN_0049f410(void)
 * Address ranges: 0049f410-0049f682
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049f410(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062cceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064e84c;
  local_4 = 1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_00695128,0xe);
  local_4._0_1_ = 2;
  iVar9 = 0;
LAB_0049f45a:
  do {
    if (param_1[6] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(param_1[7] - param_1[6]) >> 2;
    }
    if (iVar3 <= iVar9) {
      local_4._0_1_ = 1;
      FUN_005ae770();
      local_4._0_1_ = 6;
      FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
      FUN_005ae770();
      piVar2 = (int *)param_1[7];
      piVar8 = (int *)param_1[6];
      local_4 = (uint)local_4._1_3_ << 8;
      for (; piVar8 != piVar2; piVar8 = piVar8 + 1) {
        if (*piVar8 != 0) {
          FUN_004098d0();
          *piVar8 = 0;
        }
      }
      FUN_005fe5f0(param_1[6]);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      local_4 = 0xffffffff;
      FUN_005ab4d0();
      ExceptionList = local_c;
      return;
    }
    iVar3 = param_1[6];
    if (*(int *)(iVar3 + iVar9 * 4) == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 3;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_3c);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(iVar3 + iVar9 * 4) + 0x14) == 1) {
LAB_0049f5f0:
      iVar9 = iVar9 + 1;
      goto LAB_0049f45a;
    }
    if (*(int *)(param_1[6] + iVar9 * 4) == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 4;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_2c);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    iVar3 = FUN_0059bd20();
    puVar5 = *(undefined1 **)(iVar3 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(auStack_1c,s_actor_definition__s_is_still_in_u_00695104,puVar5);
    local_4._0_1_ = 5;
    pcVar4 = (code *)FUN_005a07f0(s_m_ActorDefs__i___>GetUseCount____006950e0,
                                  s_D__Work_RCHorror_AdamSource_Adam_00695128,0x16,uVar6);
    (*pcVar4)();
    local_4._0_1_ = 2;
    if (iStack_18 == 0) {
LAB_0049f5e4:
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      goto LAB_0049f5f0;
    }
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_18 + -1));
      goto LAB_0049f5e4;
    }
    iVar9 = iVar9 + 1;
    *(char *)(iStack_18 + -1) = cVar1 + -1;
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  } while( true );
}

