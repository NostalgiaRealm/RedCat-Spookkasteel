/*
 * FUN_00542a20 at 00542a20
 * undefined FUN_00542a20(void)
 * Address ranges: 00542a20-00542c91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00542a20(undefined1 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  int local_34;
  int local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063ca90;
  local_c = ExceptionList;
  local_4 = 1;
  local_30 = 0;
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_3 - param_2 >> 2;
  }
  if (param_6 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_7 - param_6 >> 2;
  }
  if (iVar4 == iVar2) {
    local_34 = 0;
    ExceptionList = &local_c;
    while( true ) {
      if (param_2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_3 - param_2 >> 2;
      }
      if (iVar4 <= local_34) break;
      iVar4 = 0;
      while( true ) {
        if (param_6 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = param_7 - param_6 >> 2;
        }
        if (iVar2 <= iVar4) break;
        if (local_34 < 0) {
LAB_00542b22:
          local_2c[0] = param_1;
          FUN_004040a0(0);
          uVar5 = 0xffffffff;
          pcVar6 = &DAT_006b3f70;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
          local_4._0_1_ = 2;
          pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                        s___AdamSource_DaviList_h_0068f458,0x97,local_2c);
          (*pcVar3)();
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_004040a0(1);
        }
        else {
          iVar2 = FUN_0044e4c0();
          if (iVar2 <= local_34) goto LAB_00542b22;
        }
        if (iVar4 < 0) {
LAB_00542b98:
          auStack_1c[0] = param_1;
          FUN_004040a0(0);
          uVar5 = 0xffffffff;
          pcVar6 = &DAT_006b3f70;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
          local_4._0_1_ = 3;
          pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                        s___AdamSource_DaviList_h_0068f458,0x97,auStack_1c);
          (*pcVar3)();
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_004040a0(1);
        }
        else {
          iVar2 = FUN_0044e4c0();
          if (iVar2 <= iVar4) goto LAB_00542b98;
        }
        if (*(int *)(param_2 + local_34 * 4) == *(int *)(param_6 + iVar4 * 4)) {
          local_30 = local_30 + 1;
        }
        iVar4 = iVar4 + 1;
      }
      local_34 = local_34 + 1;
    }
    if (param_2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_3 - param_2 >> 2;
    }
    local_4 = local_4 & 0xffffff00;
    bVar7 = local_30 == iVar4;
    FUN_00587d50(param_2,param_3);
    FUN_005fe5f0(param_2);
    FUN_005fe5f0(param_6);
  }
  else {
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_00587d50(param_2,param_3);
    FUN_005fe5f0(param_2);
    local_4 = 0xffffffff;
    FUN_00587d50(param_6,param_7);
    FUN_005fe5f0(param_6);
    bVar7 = false;
  }
  ExceptionList = local_c;
  return bVar7;
}

