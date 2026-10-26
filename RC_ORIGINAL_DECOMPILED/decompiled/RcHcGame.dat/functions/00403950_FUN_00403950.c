/*
 * FUN_00403950 at 00403950
 * undefined FUN_00403950(void)
 * Address ranges: 00403950-00403b1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00403950(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061fc18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00402cf0();
  if (iVar3 == 0) {
    FUN_00423700();
    cVar2 = FUN_004a0d00();
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  else {
    if (iVar3 == 1) {
      iVar3 = param_1[10];
      cVar2 = '\x01';
      if (iVar3 != -1) {
        iVar1 = param_1[0xb];
        if (iVar1 == -1) {
          param_1[0xc] = 0x3f800000;
          param_1[0xb] = iVar3 + param_3;
        }
        else if (iVar1 < param_3) {
          param_1[0xc] = 0;
          cVar2 = '\0';
        }
        else if (iVar3 < 1) {
          param_1[0xc] = 0;
        }
        else {
          param_1[0xc] = (int)((float)(iVar1 - param_3) / (float)iVar3);
        }
      }
      *(char *)(param_1 + 0xd) = cVar2;
      if (cVar2 != '\0') {
        (**(code **)(*(int *)param_1[9] + 0xac))((float)param_1[0xc] * 255.0);
        ExceptionList = local_10;
        return;
      }
      (**(code **)(*(int *)param_1[9] + 0xb0))();
      ExceptionList = local_c;
      return;
    }
    local_1c[0] = (undefined1)param_3;
    uVar5 = 0xffffffff;
    pcVar7 = s_Invalid_state_in_CRcMoveDie_0068d6cc;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = (void *)0x0;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar7 = s_Invalid_state_in_CRcMoveDie_0068d6cc;
      pcVar8 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_18[uVar5] = '\0';
      local_14 = uVar5;
    }
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcEnem_0068d584,0x1ec
                                  ,local_1c);
    (*pcVar4)();
    if (local_18 != (char *)0x0) {
      cVar2 = local_18[-1];
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        local_18[-1] = cVar2 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0(local_18 + -1);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

