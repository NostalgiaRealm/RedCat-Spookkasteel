/*
 * FUN_0059aed0 at 0059aed0
 * undefined FUN_0059aed0(void)
 * Address ranges: 0059aed0-0059b0cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0059aed0(void)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644593;
  local_c = ExceptionList;
  if (DAT_006c9f7c == 0) {
    ExceptionList = &local_c;
    FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a7000,0x2c);
    local_4._0_1_ = 0;
    local_4._1_3_ = 0;
    if (DAT_006c9f80 != '\0') {
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar8 = local_18;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4._0_1_ = 1;
      pcVar2 = (code *)FUN_005a07f0(s___m_Created_006a178c,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a7000,0x2d,local_1c);
      (*pcVar2)();
      local_4._0_1_ = 0;
      if (local_18 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)local_18 + -1));
        }
        else {
          *(char *)((int)local_18 + -1) = cVar1 + -1;
        }
      }
    }
    pvVar3 = operator_new(0x360);
    local_4._0_1_ = 2;
    if (pvVar3 == (void *)0x0) {
      DAT_006c9f7c = 0;
    }
    else {
      DAT_006c9f7c = FUN_0059a730();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (DAT_006c9f7c == 0) {
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar8 = local_18;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      pcVar2 = (code *)FUN_005a07f0(s_m_Instance_006976b0,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a7000,0x2f,local_1c);
      (*pcVar2)();
      if (local_18 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)local_18 + -1));
        }
        else {
          *(char *)((int)local_18 + -1) = cVar1 + -1;
        }
      }
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
    }
    DAT_006c9f80 = '\x01';
    local_4 = 0xffffffff;
    FUN_005ae770();
  }
  ExceptionList = local_c;
  return DAT_006c9f7c;
}

