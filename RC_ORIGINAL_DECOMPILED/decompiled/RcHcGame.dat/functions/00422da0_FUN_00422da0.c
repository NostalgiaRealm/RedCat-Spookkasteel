/*
 * FUN_00422da0 at 00422da0
 * undefined FUN_00422da0(void)
 * Address ranges: 00422da0-00422f2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00422da0(int *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00622580;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 0xa4))();
  if (*(int *)(iVar2 + 0x108) == 0) {
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
      puVar8 = puStack_18;
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
      *(undefined1 *)((int)puStack_18 + uVar4) = 0;
      uStack_14 = uVar4;
    }
    uStack_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,s___AdamSource_AdamActor_h_0068e778,
                                  0x141,auStack_1c);
    (*pcVar3)();
    uStack_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar2 = *(int *)(iVar2 + 0x108);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = puStack_28;
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
      *(undefined1 *)((int)puStack_28 + uVar4) = 0;
      uStack_24 = uVar4;
    }
    uStack_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_settings____0_0068f890,
                                  s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,0xcb,auStack_2c);
    (*pcVar3)();
    if (puStack_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_28 + -1));
      }
      else {
        *(char *)((int)puStack_28 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return iVar2;
}

