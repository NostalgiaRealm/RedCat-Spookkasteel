/*
 * FUN_004fb9f0 at 004fb9f0
 * undefined FUN_004fb9f0(void)
 * Address ranges: 004fb9f0-004fbc90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004fb9f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006353d8;
  pvStack_c = ExceptionList;
  local_30 = 0;
  local_34 = 0;
  ExceptionList = &pvStack_c;
  do {
    if (*(int *)(param_1 + 0x42c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x42c) >> 4;
    }
    if (iVar2 <= local_30) {
      local_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = s_Texture_was_not_locked___0069d594;
      break;
    }
    if (local_34 < 0) {
LAB_004fba56:
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,local_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    else {
      if (*(int *)(param_1 + 0x42c) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x42c) >> 4;
      }
      if (iVar2 <= local_30) goto LAB_004fba56;
    }
    uVar6 = *(uint *)(param_2 + 8);
    pbVar4 = *(byte **)(param_2 + 4);
    if (pbVar4 == (byte *)0x0) {
      pbVar4 = &DAT_0064a3b4;
    }
    uVar8 = *(uint *)(local_34 + 8 + *(int *)(param_1 + 0x42c));
    uVar7 = uVar8;
    if (uVar6 <= uVar8) {
      uVar7 = uVar6;
    }
    bVar12 = false;
    iVar2 = 0;
    bVar13 = true;
    pbVar9 = *(byte **)(local_34 + 4 + *(int *)(param_1 + 0x42c));
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      bVar12 = *pbVar9 < *pbVar4;
      bVar13 = *pbVar9 == *pbVar4;
      pbVar9 = pbVar9 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar13);
    if (!bVar13) {
      iVar2 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
    }
    if (((iVar2 == 0) && (uVar6 <= uVar8)) && (uVar8 == uVar6)) goto LAB_004fbb23;
    local_30 = local_30 + 1;
    local_34 = local_34 + 0x10;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    if (cVar1 == '\0') break;
    if (uVar6 == 0) break;
  }
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar10 = s_Texture_was_not_locked___0069d594;
    pcVar11 = local_28;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    local_28[uVar6] = '\0';
    local_24 = uVar6;
  }
  local_4 = 2;
  pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x7e5,
                                local_2c);
  (*pcVar3)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return;
LAB_004fbb23:
  iVar2 = FUN_00442d80();
  if (iVar2 <= local_30) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_Index<Count()_0068f448,s___AdamSource_DaviList_h_0068f458,0xbb
                                  ,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  uVar5 = FUN_004fe730();
  FUN_004fe620(local_30);
  FUN_0040cc00(uVar5,0,0xffffffff);
  iVar2 = *(int *)(param_1 + 0x430);
  FUN_004fe460(iVar2,iVar2,iVar2 + -0x10);
  FUN_00442da0(*(int *)(param_1 + 0x430) + -0x10,*(int *)(param_1 + 0x430));
  *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + -0x10;
  ExceptionList = pvStack_c;
  return;
}

