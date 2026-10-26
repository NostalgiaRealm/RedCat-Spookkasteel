/*
 * FUN_005a0030 at 005a0030
 * undefined FUN_005a0030(void)
 * Address ranges: 005a0030-005a028f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005a0030(int param_1)

{
  char cVar1;
  DWORD DVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  bool bVar9;
  int local_44;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644cdf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006a7290 != -1) {
    ExceptionList = &pvStack_c;
    DVar2 = timeGetTime();
    local_44 = DAT_006a7290;
    if ((DVar2 == 0xffffffff) || (DAT_006a7290 == -1)) {
      local_44 = 0;
    }
    else {
      if ((int)DVar2 < (int)DAT_006a7290) {
        local_3c[0] = (undefined1)param_1;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar1 = FUN_00401940(uVar5,1);
        if (cVar1 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *local_38 = *puVar7;
            puVar7 = puVar7 + 1;
            local_38 = local_38 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)local_38 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            local_38 = (undefined4 *)((int)local_38 + 1);
          }
          FUN_00404190(uVar5);
        }
        local_4 = 0;
        pcVar3 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,local_3c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      local_44 = DVar2 - local_44;
      if (local_44 == -1) {
        local_2c[0] = (undefined1)param_1;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar1 = FUN_00401940(uVar5,1);
        if (cVar1 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puStack_28 = *puVar7;
            puVar7 = puVar7 + 1;
            puStack_28 = puStack_28 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puStack_28 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puStack_28 = (undefined4 *)((int)puStack_28 + 1);
          }
          FUN_00404190(uVar5);
        }
        local_4 = 1;
        pcVar3 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_2c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
    }
    if ((float)local_44 * 0.001 <= 2.0) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  DAT_006a7290 = timeGetTime();
  bVar9 = param_1 != 0;
  if (bVar9) {
    FUN_00599450(&param_1);
    local_4 = 2;
    uVar4 = FUN_0059b1e0();
  }
  else {
    uVar4 = 0xffffffff;
  }
  uVar4 = FUN_005ae390(auStack_1c,s_Processing_waypoint___d_006a7758,uVar4);
  local_4 = 3;
  FUN_005aff00(uVar4);
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
  uStack_10 = 0;
  local_4 = 0xffffffff;
  if (bVar9) {
    FUN_005630e0();
  }
  ExceptionList = pvStack_c;
  return;
}

