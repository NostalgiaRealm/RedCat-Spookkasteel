/*
 * FUN_00429fe0 at 00429fe0
 * undefined FUN_00429fe0(void)
 * Address ranges: 00429fe0-0042a210
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00429fe0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  undefined1 auStack_4c [4];
  char *pcStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00622f90;
  pvStack_c = ExceptionList;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc0))();
  iVar2 = (**(code **)(*param_1 + 0xa4))();
  if (*(int *)(iVar2 + 0x114) == 0) {
    uStack_5c = CONCAT31(uStack_5c._1_3_,param_2._0_1_);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puStack_58 = *puVar6;
        puVar6 = puVar6 + 1;
        puStack_58 = puStack_58 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puStack_58 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puStack_58 = (undefined4 *)((int)puStack_58 + 1);
      }
      FUN_00404190(uVar4);
    }
    uStack_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,s___AdamSource_AdamActor_h_0068e778,0x18d,
                                  &uStack_5c);
    (*pcVar3)();
    uStack_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_005b3af0();
  iVar2 = FUN_005b3fb0();
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
    pcVar7 = s_TODO__enemy_does_not_have_the_co_0068fee4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    auStack_4c[0] = param_2._0_1_;
    pcStack_48 = (char *)0x0;
    uStack_44 = 0;
    uStack_40 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar7 = s_TODO__enemy_does_not_have_the_co_0068fee4;
      pcVar8 = pcStack_48;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      pcStack_48[uVar4] = '\0';
      uStack_44 = uVar4;
    }
    uStack_4 = 1;
    FUN_005035a0(auStack_4c);
    if (pcStack_48 != (char *)0x0) {
      cVar1 = pcStack_48[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(pcStack_48 + -1);
      }
      else {
        pcStack_48[-1] = cVar1 + -1;
      }
    }
  }
  else {
    FUN_005b44a0(auStack_3c);
    iVar2 = (**(code **)(*param_1 + 0xa4))();
    uStack_5c = *(undefined4 *)(iVar2 + 0x150);
    puStack_58 = *(undefined4 **)(iVar2 + 0x154);
    uStack_54 = *(undefined4 *)(iVar2 + 0x158);
    FUN_005b3470(&local_68);
  }
  *param_2 = local_68;
  param_2[1] = local_64;
  param_2[2] = local_60;
  ExceptionList = pvStack_c;
  return;
}

