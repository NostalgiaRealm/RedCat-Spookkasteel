/*
 * FUN_00575430 at 00575430
 * undefined FUN_00575430(void)
 * Address ranges: 00575430-005756c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00575430(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  char cVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641660;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x15d) == '\0') || (*(char *)(param_1 + 0x15c) == '\0')) {
    ExceptionList = &local_c;
    FUN_00576f00();
    if (param_2 == -1) {
      local_1c[0] = 0xff;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    fVar2 = (float)param_2;
    piVar5 = (int *)FUN_004042e0(&param_2);
    local_4 = 1;
    if (*piVar5 == 0) {
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    iVar1 = *(int *)(*piVar5 + 0x360);
    if ((param_2 != 0) &&
       (iVar9 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar9, iVar9 == 0)) {
      FUN_005abfc0(0);
    }
    if (iVar1 == 0) {
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6 - 1;
      puStack_28 = (undefined4 *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      auStack_2c[0] = (undefined1)param_2;
      cVar3 = FUN_00401940(uVar6,1);
      if (cVar3 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        puVar11 = puStack_28;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4 = 3;
      pcVar4 = (code *)FUN_005a07f0(s_player_00699d94,s_D__Work_RCHorror_AdamSource_Adam_006a4908,
                                    0x16a,auStack_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      if (puStack_28 != (undefined4 *)0x0) {
        cVar3 = *(char *)((int)puStack_28 + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0((char *)((int)puStack_28 + -1));
        }
        else {
          *(char *)((int)puStack_28 + -1) = cVar3 + -1;
        }
      }
      puStack_28 = (undefined4 *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
    }
    FUN_00503fc0(fVar2 * 0.001 * *(float *)(param_1 + 0x144),param_1,param_3);
    if (*(int *)(param_1 + 0x148) != 3) {
      if (*(int *)(param_1 + 0x164) == 0) {
        FUN_005756d0();
      }
      else {
        *(undefined1 *)(param_1 + 0x168) = 1;
        *(undefined4 *)(param_1 + 0x160) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x15d) = 1;
  }
  ExceptionList = local_c;
  return;
}

