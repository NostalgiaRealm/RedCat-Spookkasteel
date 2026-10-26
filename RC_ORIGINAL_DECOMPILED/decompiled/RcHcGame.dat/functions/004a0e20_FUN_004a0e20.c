/*
 * FUN_004a0e20 at 004a0e20
 * undefined FUN_004a0e20(void)
 * Address ranges: 004a0e20-004a1056
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004a0e20(int param_1,float param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cf38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_004a0640();
  if (cVar1 == '\0') {
    local_2c[0] = param_2._0_1_;
    uVar4 = 0xffffffff;
    local_28 = (char *)0x0;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_24 = 0;
    local_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_IsInitialized___0069532c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069533c,0x126,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_28 != (char *)0x0) {
      cVar1 = local_28[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_28 + -1);
      }
      else {
        local_28[-1] = cVar1 + -1;
      }
    }
  }
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      auStack_1c[0] = 0;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar6 = s_Setting_motion_to_part_>_1_0f_00695388;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        pcVar6 = s_Setting_motion_to_part_>_1_0f_00695388;
        pcVar7 = pcStack_18;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        pcStack_18[uVar4] = '\0';
        uStack_14 = uVar4;
      }
      local_4 = 2;
      FUN_005035a0(auStack_1c);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  else {
    local_2c[0] = 0;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar6 = s_Setting_motion_to_part_<_0_0f_006953a8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar6 = s_Setting_motion_to_part_<_0_0f_006953a8;
      pcVar7 = local_28;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_28[uVar4] = '\0';
      local_24 = uVar4;
    }
    local_4 = 1;
    FUN_005035a0(local_2c);
    if (local_28 != (char *)0x0) {
      cVar1 = local_28[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_28 + -1);
      }
      else {
        local_28[-1] = cVar1 + -1;
      }
    }
  }
  uVar3 = __ftol();
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  ExceptionList = pvStack_c;
  return;
}

