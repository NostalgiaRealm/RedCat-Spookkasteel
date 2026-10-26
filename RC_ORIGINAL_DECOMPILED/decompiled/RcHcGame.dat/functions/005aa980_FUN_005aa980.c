/*
 * FUN_005aa980 at 005aa980
 * undefined FUN_005aa980(void)
 * Address ranges: 005aa980-005aab44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005aa980(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645aa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x4e6);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if (*param_2 == 0) {
    local_1c[0] = param_2._0_1_;
    uVar4 = 0xffffffff;
    local_18 = (char *)0x0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_Handle____0_006a8bf4,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x4e9,local_1c);
    (*pcVar3)();
    local_4._0_1_ = 0;
    if (local_18 != (char *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
  }
  piVar6 = *(int **)(param_1 + 0x90);
  if (piVar6 != *(int **)(param_1 + 0x94)) {
    puVar1 = (undefined4 *)*param_2;
    do {
      if (puVar1 == (undefined4 *)*piVar6) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *param_2 = 0;
        *piVar6 = 0;
        goto LAB_005aab1f;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0x94));
  }
  local_1c[0] = param_2._0_1_;
  uVar4 = 0xffffffff;
  pcVar7 = s_CDaviMainWindow__DestroyInputHan_006a8bb8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  cVar2 = FUN_00401940(uVar4,1);
  if (cVar2 != '\0') {
    pcVar7 = s_CDaviMainWindow__DestroyInputHan_006a8bb8;
    pcVar8 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_18[uVar4] = '\0';
    local_14 = uVar4;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x4f4,
                                local_1c);
  (*pcVar3)();
  if (local_18 != (char *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar2 + -1;
    }
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
LAB_005aab1f:
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

