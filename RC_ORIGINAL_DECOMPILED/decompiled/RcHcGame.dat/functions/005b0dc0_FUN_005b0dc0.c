/*
 * FUN_005b0dc0 at 005b0dc0
 * undefined FUN_005b0dc0(void)
 * Address ranges: 005b0dc0-005b0fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005b0dc0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  char *local_28;
  int local_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646190;
  pvStack_c = ExceptionList;
  local_2c[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  pcVar6 = local_28;
  if (local_28 == (char *)0x0) {
    pcVar6 = "";
  }
  if (pcVar6 == (char *)0x0) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_String_006a7bb8,s___AdamSource_DaviUtils_h_006a7bc4,0x98,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uVar4 = 0xffffffff;
  pcVar7 = pcVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  if (0 < (int)(~uVar4 - 1)) {
    pcVar6 = pcVar6 + (~uVar4 - 2);
  }
  if (*pcVar6 != '\\') {
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006a1548;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    if (-local_24 - 1U <= uVar4) {
      FUN_005fe5fb();
    }
    if (uVar4 != 0) {
      iVar1 = local_24 + uVar4;
      cVar2 = FUN_00401940(iVar1,0);
      if (cVar2 != '\0') {
        pcVar6 = &DAT_006a1548;
        pcVar7 = local_28 + local_24;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        local_28[iVar1] = '\0';
        local_24 = iVar1;
      }
    }
  }
  uVar4 = 0xffffffff;
  if (*(uint *)(param_3 + 8) != 0xffffffff) {
    uVar4 = *(uint *)(param_3 + 8);
  }
  if (-local_24 - 1U <= uVar4) {
    FUN_005fe5fb();
  }
  if (uVar4 != 0) {
    iVar1 = local_24 + uVar4;
    cVar2 = FUN_00401940(iVar1,0);
    if (cVar2 != '\0') {
      pcVar6 = *(char **)(param_3 + 4);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = "";
      }
      pcVar7 = local_28 + local_24;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_00404190(iVar1);
    }
  }
  *param_1 = local_2c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_2c,0,0xffffffff);
  if (local_28 != (char *)0x0) {
    cVar2 = local_28[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      local_28[-1] = cVar2 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_005fe5f0(local_28 + -1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

