/*
 * FUN_0042c280 at 0042c280
 * undefined FUN_0042c280(void)
 * Address ranges: 0042c280-0042c611
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_0042c280(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6,int *param_7)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623310;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_RCSource_RCTarg_00690034,0x4b);
  *param_6 = 0;
  *param_7 = 0;
  local_4 = 0;
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    local_1c[0] = param_7._0_1_;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_1c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar3 = FUN_00565870();
  if ((*(char *)(param_1 + 0x44) == '\0') && (iVar3 - *(int *)(param_1 + 0x48) < DAT_00690028)) {
    if (*(int *)(param_1 + 0x4c) == 1) {
      if (*(int *)(param_1 + 0x50) == 0) {
        local_1c[0] = param_7._0_1_;
        uVar6 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6 - 1;
        puStack_18 = (undefined4 *)0x0;
        uStack_14 = 0;
        uStack_10 = 0;
        cVar2 = FUN_00401940(uVar6,1);
        if (cVar2 != '\0') {
          puVar8 = (undefined4 *)&DAT_006b3f70;
          puVar10 = puStack_18;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          FUN_00404190(uVar6);
        }
        local_4._0_1_ = 2;
        pcVar4 = (code *)FUN_005a07f0(s_m_Cache_m_Actor____0_00690060,
                                      s_D__Work_RCHorror_RCSource_RCTarg_00690034,0x59,local_1c);
        (*pcVar4)();
        local_4 = (uint)local_4._1_3_ << 8;
        if (puStack_18 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)puStack_18 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_18 + -1));
          }
          else {
            *(char *)((int)puStack_18 + -1) = cVar2 + -1;
          }
        }
        puStack_18 = (undefined4 *)0x0;
        uStack_14 = 0;
        uStack_10 = 0;
      }
      piVar1 = (int *)(param_1 + 0x50);
      cVar2 = FUN_0042bfc0(piVar1);
      if (cVar2 == '\0') {
        *piVar1 = 0;
        *param_6 = 0;
      }
      else {
        *param_6 = *piVar1;
      }
    }
    else if (*(int *)(param_1 + 0x4c) == 2) {
      if (*(int *)(param_1 + 0x54) == 0) {
        uVar6 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6 - 1;
        auStack_2c[0] = param_7._0_1_;
        puStack_28 = (undefined4 *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
        cVar2 = FUN_00401940(uVar6,1);
        if (cVar2 != '\0') {
          puVar8 = (undefined4 *)&DAT_006b3f70;
          puVar10 = puStack_28;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          *(undefined1 *)(uVar6 + (int)puStack_28) = 0;
          uStack_24 = uVar6;
        }
        local_4._0_1_ = 3;
        pcVar4 = (code *)FUN_005a07f0(s_m_Cache_m_Button____0_00690078,
                                      s_D__Work_RCHorror_RCSource_RCTarg_00690034,100,auStack_2c);
        (*pcVar4)();
        local_4 = (uint)local_4._1_3_ << 8;
        if (puStack_28 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)puStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_28 + -1));
          }
          else {
            *(char *)((int)puStack_28 + -1) = cVar2 + -1;
          }
        }
        puStack_28 = (undefined4 *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
      }
      piVar1 = (int *)(param_1 + 0x54);
      cVar2 = FUN_0042c120(piVar1);
      if (cVar2 == '\0') {
        *piVar1 = 0;
        *param_7 = 0;
      }
      else {
        *param_7 = *piVar1;
      }
    }
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    local_4 = 0xffffffff;
    FUN_005ae770();
  }
  else {
    *(int *)(param_1 + 0x48) = iVar3;
    *(undefined1 *)(param_1 + 0x44) = 0;
    FUN_0042cb60(param_2,param_3,param_4,param_5,param_6);
    if (*param_6 == 0) {
      FUN_0042cf40(param_2,param_3,param_4,param_5,param_7);
      if (*param_7 == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x54) = 0;
        local_4 = 0xffffffff;
        FUN_005ae770();
        uVar5 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 2;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(int *)(param_1 + 0x54) = *param_7;
        local_4 = 0xffffffff;
        FUN_005ae770();
        uVar5 = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      *(int *)(param_1 + 0x50) = *param_6;
      *(undefined4 *)(param_1 + 0x54) = 0;
      local_4 = 0xffffffff;
      FUN_005ae770();
      uVar5 = 1;
    }
  }
  ExceptionList = pvStack_c;
  return uVar5;
}

