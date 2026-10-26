/*
 * FUN_00513c70 at 00513c70
 * undefined FUN_00513c70(void)
 * Address ranges: 00513c70-0051413d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00513c70(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  char *local_94;
  char *local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined1 uStack_71;
  undefined1 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  char *local_60;
  undefined1 local_5c [16];
  undefined1 auStack_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006378b0;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x1da) == '\0') {
    return;
  }
  local_70 = (undefined1 *)0x0;
  iVar6 = 0;
  ExceptionList = &local_c;
  while( true ) {
    puVar8 = local_70;
    if (*(int *)(param_1 + 0x1ec) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 0x1f0) - *(int *)(param_1 + 0x1ec)) / 0x24;
    }
    if (iVar5 <= (int)local_70) break;
    if (iVar6 < 0) {
LAB_00513ce2:
      local_88 = (undefined1 *)0x0;
      local_5c[0] = (undefined1)param_2;
      local_8c = (undefined1 *)0x513cf8;
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_88 = (undefined1 *)(~uVar4 - 1);
      local_8c = &DAT_006b3f70;
      local_90 = (char *)0x513d16;
      FUN_004040f0();
      local_88 = local_5c;
      local_4 = 0;
      local_8c = (undefined1 *)0x97;
      local_90 = s___AdamSource_DaviList_h_0068f458;
      local_94 = s_a_Index>_0____a_Index<Count()_0068f470;
      fStack_98 = 7.460639e-39;
      pcVar3 = (code *)FUN_005a07f0();
      fStack_98 = 7.460642e-39;
      (*pcVar3)();
      local_4 = 0xffffffff;
      local_88 = (undefined1 *)0x1;
      local_8c = (undefined1 *)0x513d55;
      FUN_004040a0();
      puVar8 = local_70;
    }
    else {
      local_88 = (undefined1 *)0x513cde;
      iVar5 = FUN_00515010();
      if (iVar5 <= (int)puVar8) goto LAB_00513ce2;
    }
    local_6c = *(undefined4 *)(*(int *)(param_1 + 0x1ec) + 4 + iVar6);
    if (iVar6 < 0) {
LAB_00513d73:
      local_88 = (undefined1 *)0x0;
      auStack_4c[0] = (undefined1)param_2;
      local_8c = (undefined1 *)0x513d89;
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_88 = (undefined1 *)(~uVar4 - 1);
      local_8c = &DAT_006b3f70;
      local_90 = (char *)0x513da7;
      FUN_004040f0();
      local_88 = auStack_4c;
      local_4 = 1;
      local_8c = (undefined1 *)0x97;
      local_90 = s___AdamSource_DaviList_h_0068f458;
      local_94 = s_a_Index>_0____a_Index<Count()_0068f470;
      fStack_98 = 7.460842e-39;
      pcVar3 = (code *)FUN_005a07f0();
      fStack_98 = 7.460845e-39;
      (*pcVar3)();
      local_4 = 0xffffffff;
      local_88 = (undefined1 *)0x1;
      local_8c = (undefined1 *)0x513de6;
      FUN_004040a0();
      puVar8 = local_70;
    }
    else {
      local_88 = (undefined1 *)0x513d6f;
      iVar5 = FUN_00515010();
      if (iVar5 <= (int)puVar8) goto LAB_00513d73;
    }
    local_68 = *(undefined4 *)(*(int *)(param_1 + 0x1ec) + 8 + iVar6);
    if (iVar6 < 0) {
LAB_00513e04:
      local_88 = (undefined1 *)0x0;
      local_3c[0] = (undefined1)param_2;
      local_8c = (undefined1 *)0x513e1a;
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_88 = (undefined1 *)(~uVar4 - 1);
      local_8c = &DAT_006b3f70;
      local_90 = (char *)0x513e38;
      FUN_004040f0();
      local_88 = local_3c;
      local_4 = 2;
      local_8c = (undefined1 *)0x97;
      local_90 = s___AdamSource_DaviList_h_0068f458;
      local_94 = s_a_Index>_0____a_Index<Count()_0068f470;
      fStack_98 = 7.461046e-39;
      pcVar3 = (code *)FUN_005a07f0();
      fStack_98 = 7.461048e-39;
      (*pcVar3)();
      local_4 = 0xffffffff;
      local_88 = (undefined1 *)0x1;
      local_8c = (undefined1 *)0x513e77;
      FUN_004040a0();
      puVar8 = local_70;
    }
    else {
      local_88 = (undefined1 *)0x513e00;
      iVar5 = FUN_00515010();
      if (iVar5 <= (int)puVar8) goto LAB_00513e04;
    }
    local_64 = *(float *)(*(int *)(param_1 + 0x1ec) + 0xc + iVar6) + *(float *)(param_1 + 0x1d0);
    if (iVar6 < 0) {
LAB_00513e9b:
      local_88 = &uStack_71;
      local_8c = &DAT_006b3f70;
      local_90 = (char *)0x513eae;
      FUN_00409810();
      local_88 = auStack_1c;
      local_4 = 3;
      local_8c = (undefined1 *)0x97;
      local_90 = s___AdamSource_DaviList_h_0068f458;
      local_94 = s_a_Index>_0____a_Index<Count()_0068f470;
      fStack_98 = 7.461211e-39;
      pcVar3 = (code *)FUN_005a07f0();
      fStack_98 = 7.461214e-39;
      (*pcVar3)();
      local_4 = 0xffffffff;
      local_88 = (undefined1 *)0x1;
      local_8c = (undefined1 *)0x513eed;
      FUN_004040a0();
    }
    else {
      local_88 = (undefined1 *)0x513e97;
      iVar5 = FUN_00515010();
      if (iVar5 <= (int)puVar8) goto LAB_00513e9b;
    }
    local_88 = (undefined1 *)0x0;
    local_8c = (undefined1 *)0x437f0000;
    local_60 = (char *)(*(float *)(*(int *)(param_1 + 0x1ec) + 0x10 + iVar6) +
                       *(float *)(param_1 + 0x1d0));
    local_94 = (char *)0x513f0d;
    local_90 = puVar8;
    iVar5 = FUN_005149e0();
    local_90 = (char *)(iVar5 + 0x14);
    uStack_a0 = local_6c;
    local_70 = (undefined1 *)&fStack_a4;
    fStack_a4 = local_64;
    uStack_9c = local_68;
    fStack_98 = local_64;
    local_94 = local_60;
    FUN_00449760(param_1 + 0x174);
    FUN_005622c0();
    local_70 = (undefined1 *)((int)puVar8 + 1);
    iVar6 = iVar6 + 0x24;
  }
  if (*(int *)(param_1 + 0x1b8) == 4) {
    iVar6 = *(int *)(param_1 + 0x1c8);
    if (iVar6 < 0) {
LAB_00513f85:
      local_88 = (undefined1 *)0x0;
      local_3c[0] = (undefined1)param_2;
      local_8c = (undefined1 *)0x513f9b;
      FUN_004040a0();
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_88 = (undefined1 *)(~uVar4 - 1);
      local_8c = &DAT_006b3f70;
      local_90 = (char *)0x513fb9;
      FUN_004040f0();
      local_88 = local_3c;
      local_4 = 4;
      local_8c = (undefined1 *)0x97;
      local_90 = s___AdamSource_DaviList_h_0068f458;
      local_94 = s_a_Index>_0____a_Index<Count()_0068f470;
      fStack_98 = 7.461585e-39;
      pcVar3 = (code *)FUN_005a07f0();
      fStack_98 = 7.461588e-39;
      (*pcVar3)();
      local_4 = 0xffffffff;
      local_88 = (undefined1 *)0x1;
      local_8c = (undefined1 *)0x513ff8;
      FUN_004040a0();
    }
    else {
      local_88 = (undefined1 *)0x513f81;
      iVar5 = FUN_0044e4c0();
      if (iVar5 <= iVar6) goto LAB_00513f85;
    }
    local_94 = *(char **)(param_1 + 0x1fc);
    local_90 = *(char **)(param_1 + 0x200);
    local_8c = *(undefined1 **)(param_1 + 0x204);
    local_88 = *(undefined1 **)(param_1 + 0x208);
    fStack_98 = *(float *)(param_1 + 0x1e4);
    uStack_9c = param_2;
    uStack_a0 = 0x514033;
    FUN_0050df00();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x20c);
  local_68 = *(undefined4 *)(param_1 + 0x210);
  local_64 = *(float *)(param_1 + 0x214) + *(float *)(param_1 + 0x1d0);
  local_60 = (char *)(*(float *)(param_1 + 0x218) + *(float *)(param_1 + 0x1d0));
  iVar6 = *(int *)(param_1 + 0x1cc);
  if (-1 < iVar6) {
    local_88 = (undefined1 *)0x514083;
    iVar5 = FUN_0044e4c0();
    if (iVar6 < iVar5) goto LAB_005140fa;
  }
  local_88 = (undefined1 *)0x0;
  auStack_2c[0] = (undefined1)param_2;
  local_8c = (undefined1 *)0x51409d;
  FUN_004040a0();
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_88 = (undefined1 *)(~uVar4 - 1);
  local_8c = &DAT_006b3f70;
  local_90 = (char *)0x5140bb;
  FUN_004040f0();
  local_88 = auStack_2c;
  local_4 = 5;
  local_8c = (undefined1 *)0x97;
  local_90 = s___AdamSource_DaviList_h_0068f458;
  local_94 = s_a_Index>_0____a_Index<Count()_0068f470;
  fStack_98 = 7.461947e-39;
  pcVar3 = (code *)FUN_005a07f0();
  fStack_98 = 7.46195e-39;
  (*pcVar3)();
  local_4 = 0xffffffff;
  local_88 = (undefined1 *)0x1;
  local_8c = (undefined1 *)0x5140fa;
  FUN_004040a0();
LAB_005140fa:
  local_90 = (char *)local_68;
  local_8c = (undefined1 *)local_64;
  fStack_98 = (float)param_2;
  local_88 = local_60;
  uStack_9c = 0x514129;
  local_94 = (char *)uVar2;
  FUN_0050e290();
  ExceptionList = local_c;
  return;
}

