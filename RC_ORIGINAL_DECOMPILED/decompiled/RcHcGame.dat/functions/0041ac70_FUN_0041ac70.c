/*
 * FUN_0041ac70 at 0041ac70
 * undefined FUN_0041ac70(void)
 * Address ranges: 0041ac70-0041ae9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0041ac70(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621850;
  pvStack_c = ExceptionList;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_0041aea0(param_3);
  if (*(int *)(*(int *)(param_1 + 0xf8) + 0x114) == 0) {
    local_4c[0] = uVar1;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_48 = *puVar7;
        puVar7 = puVar7 + 1;
        local_48 = local_48 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)local_48 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        local_48 = (undefined4 *)((int)local_48 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,s___AdamSource_AdamActor_h_0068e778,0x18d,
                                  local_4c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_005b3af0();
  iVar4 = FUN_005b3fb0();
  if (iVar4 == 0) {
    uStack_5c = CONCAT31(uStack_5c._1_3_,uVar1);
    uVar5 = 0xffffffff;
    pcVar8 = s_TODO__max_does_not_have_the_corr_0068f23c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    pcStack_58 = (char *)0x0;
    uStack_54 = 0;
    uStack_50 = 0;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar8 = s_TODO__max_does_not_have_the_corr_0068f23c;
      pcVar9 = pcStack_58;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pcStack_58[uVar5] = '\0';
      uStack_54 = uVar5;
    }
    local_4 = 1;
    FUN_005035a0(&uStack_5c);
    if (pcStack_58 != (char *)0x0) {
      cVar2 = pcStack_58[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0(pcStack_58 + -1);
      }
      else {
        pcStack_58[-1] = cVar2 + -1;
      }
    }
  }
  else {
    FUN_005b44a0(auStack_3c);
    iVar4 = *(int *)(param_1 + 0xf8);
    uStack_5c = *(undefined4 *)(iVar4 + 0x150);
    pcStack_58 = *(char **)(iVar4 + 0x154);
    uStack_54 = *(undefined4 *)(iVar4 + 0x158);
    FUN_005b3470(&local_68);
  }
  *param_2 = local_68;
  param_2[1] = local_64;
  param_2[2] = local_60;
  ExceptionList = pvStack_c;
  return;
}

