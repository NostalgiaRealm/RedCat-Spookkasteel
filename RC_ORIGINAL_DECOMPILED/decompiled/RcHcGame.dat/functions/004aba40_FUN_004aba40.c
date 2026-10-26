/*
 * FUN_004aba40 at 004aba40
 * undefined FUN_004aba40(void)
 * Address ranges: 004aba40-004abc10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004aba40(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e060;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x78) == 0) {
    local_2c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_28;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar4) = 0;
      local_24 = uVar4;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Portrait____0_006960c4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006960d4,0x1f,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x78) + 0x28);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x78) + 0x2c) - iVar6 >> 2;
  }
  iVar3 = __ftol();
  if (iVar3 == -1) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = __ftol();
  if (((0 < iVar3) && (1 < iVar6)) && (*(int *)(*(int *)(param_1 + 0x78) + 0x20) != 0)) {
    if (iVar3 < *(int *)(param_1 + 0x80)) {
      do {
        FUN_0050e470();
        iVar6 = *(int *)(param_1 + 0x80) - iVar3;
        *(int *)(param_1 + 0x80) = iVar6;
      } while (iVar3 < iVar6);
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    else {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + param_2;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

