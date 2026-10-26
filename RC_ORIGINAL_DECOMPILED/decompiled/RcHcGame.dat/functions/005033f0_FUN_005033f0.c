/*
 * FUN_005033f0 at 005033f0
 * undefined FUN_005033f0(void)
 * Address ranges: 005033f0-00503598
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005033f0(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00635c60;
  pvStack_c = ExceptionList;
  local_2c[0] = param_3._0_1_;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_3 == (char *)0x0) {
    local_1c[0] = param_3._0_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_DefaultPrefix____0_0069dc58,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x2b9,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
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
  if (param_2 != (char *)0x0) {
    iVar5 = -1;
    pcVar8 = param_2;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      uVar3 = 0xffffffff;
      pcVar8 = param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      cVar1 = FUN_00401940(uVar3,1);
      param_3 = param_2;
      goto joined_r0x0050352d;
    }
  }
  uVar3 = 0xffffffff;
  pcVar8 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
joined_r0x0050352d:
  if (cVar1 != '\0') {
    pcVar8 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *param_3;
      param_3 = param_3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_28[uVar3] = '\0';
    local_24 = uVar3;
  }
  FUN_005033a0(param_1,local_2c);
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

