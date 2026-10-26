/*
 * FUN_0043e7a0 at 0043e7a0
 * undefined FUN_0043e7a0(void)
 * Address ranges: 0043e7a0-0043e944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_0043e7a0(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624888;
  local_c = ExceptionList;
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
    ExceptionList = &local_c;
    *param_1 = param_1._0_1_;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar8 = s_IHealthS_act_00690b04;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar6 = ~uVar4 - 1;
    pcVar8 = s_IHealthS_act_00690b04;
  }
  else if (param_2 == 1) {
    uVar4 = 0xffffffff;
    ExceptionList = &local_c;
    *param_1 = param_1._0_1_;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar8 = s_IHealthM_act_00690b14;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar6 = ~uVar4 - 1;
    pcVar8 = s_IHealthM_act_00690b14;
  }
  else {
    if (param_2 != 2) {
      ExceptionList = &local_c;
      uVar2 = FUN_005ae390(local_1c,s_Unknown_health_item_type___i___00690964,param_2);
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcItem_00690b34,
                                    0x24,uVar2);
      (*pcVar3)();
      local_4 = 0xffffffff;
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      *param_1 = param_1._0_1_;
      uStack_10 = 0;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar8 = s_unknown_act_0069092c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        pcVar8 = s_unknown_act_0069092c;
        pcVar7 = *(char **)(param_1 + 4);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        }
        *(uint *)(param_1 + 8) = uVar4;
        *(undefined1 *)(uVar4 + *(int *)(param_1 + 4)) = 0;
      }
      ExceptionList = local_c;
      return param_1;
    }
    ExceptionList = &local_c;
    *param_1 = param_1._0_1_;
    uVar4 = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar8 = s_IHealthL_act_00690b24;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar6 = ~uVar4 - 1;
    pcVar8 = s_IHealthL_act_00690b24;
  }
  FUN_004040f0(pcVar8,iVar6);
  ExceptionList = local_c;
  return param_1;
}

