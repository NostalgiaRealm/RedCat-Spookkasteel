/*
 * FUN_00406550 at 00406550
 * undefined FUN_00406550(void)
 * Address ranges: 00406550-004067ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00406603) */
/* WARNING: Removing unreachable block (ram,0x0040660d) */
/* WARNING: Removing unreachable block (ram,0x00406617) */
/* WARNING: Removing unreachable block (ram,0x00406611) */

void __fastcall FUN_00406550(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  undefined4 uStack_3c;
  undefined4 *puStack_34;
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  uint uStack_20;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006200a0;
  pvStack_c = ExceptionList;
  uStack_3c = 0x7f7fffff;
  uVar9 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))(2,1);
  cVar1 = FUN_00429970();
  if (cVar1 == '\0') {
    FUN_00402d00();
    ExceptionList = pvStack_18;
    return;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar4 = 0xffffffff;
    puStack_34 = (undefined4 *)0x0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    uStack_10 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Start____0_0068dc14,
                                  s_D__Work_RCHorror_RCSource_RcMove_0068db7c,0x1a7,&stack0xffffffc8
                                 );
    (*pcVar2)();
    uStack_10 = 0xffffffff;
  }
  iVar3 = FUN_00598540();
  if (iVar3 < 1) {
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
      puVar8 = puStack_34;
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
      *(undefined1 *)((int)puStack_34 + uVar4) = 0;
    }
    uStack_10 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_Start_>CountLinks___>_0_0068dbf8,
                                  s_D__Work_RCHorror_RCSource_RcMove_0068db7c,0x1a8,&stack0xffffffc8
                                 );
    (*pcVar2)();
    uStack_10 = 0xffffffff;
    if (puStack_34 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_34 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_34 + -1));
      }
      else {
        *(char *)((int)puStack_34 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_00598310(&uStack_3c,0);
  uStack_10 = 2;
  iVar3 = FUN_0059b1e0();
  if (iVar3 == -1) {
    auStack_28[0] = uVar9;
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
      puVar8 = puStack_24;
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
      *(undefined1 *)((int)puStack_24 + uVar4) = 0;
      uStack_20 = uVar4;
    }
    uStack_10._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_id____INVALID_MOVEPOINT_0068dbe0,
                                  s_D__Work_RCHorror_RCSource_RcMove_0068db7c,0x1ab,auStack_28);
    (*pcVar2)();
    uStack_10 = CONCAT31(uStack_10._1_3_,2);
    FUN_004040a0(1);
  }
  puVar6 = &uStack_3c;
  FUN_004288c0(puVar6);
  FUN_005968d0(puVar6);
  FUN_00402a10(1,0);
  uStack_10 = 0xffffffff;
  FUN_005630e0();
  ExceptionList = pvStack_18;
  return;
}

