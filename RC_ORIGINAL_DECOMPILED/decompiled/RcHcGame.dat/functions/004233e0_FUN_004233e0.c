/*
 * FUN_004233e0 at 004233e0
 * undefined FUN_004233e0(void)
 * Address ranges: 004233e0-0042364a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004233e0(int *param_1,int param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 local_3c [4];
  undefined4 *puStack_38;
  uint uStack_34;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006225d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (3.4028235e+38 <= param_4) {
    ExceptionList = &pvStack_c;
    fVar9 = (float10)FUN_00424950();
    param_4 = (float)fVar9;
  }
  if ((6 < param_2) || (cVar1 = (**(code **)(*param_1 + 0x88))(param_2), cVar1 == '\0')) {
    local_3c[0] = param_4._0_1_;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = puStack_38;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)puStack_38 + uVar3) = 0;
      uStack_34 = uVar3;
    }
    uStack_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Type_<_NR_MOTION_&&_HasMotion(_0068f8c4,
                                  s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,0x176,local_3c);
    (*pcVar2)();
    uStack_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (param_2 == 4) {
    auStack_1c[0] = param_4._0_1_;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = (char *)&DAT_0068f7cc;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar6 = &DAT_0068f7cc;
      puVar8 = puStack_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)puStack_18 + uVar3) = 0;
      uStack_14 = uVar3;
    }
    uStack_4 = 1;
    (**(code **)(*param_1 + 0x9c))();
    FUN_004a0660(auStack_1c,param_3,param_4 * (float)param_1[0x55]);
    if (puStack_18 == (undefined4 *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    pcVar5 = (char *)((int)puStack_18 + -1);
    cVar1 = *(char *)((int)puStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *pcVar5 = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
  }
  else {
    pcVar5 = (&PTR_s_start_0064bca4)[param_2];
    auStack_2c[0] = param_4._0_1_;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar7 = pcVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar7 = pcStack_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcStack_28[uVar3] = '\0';
      uStack_24 = uVar3;
    }
    uStack_4 = 2;
    (**(code **)(*param_1 + 0x9c))();
    FUN_004a0660(auStack_2c,param_3,param_4);
    if (pcStack_28 == (char *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    pcVar5 = pcStack_28 + -1;
    cVar1 = pcStack_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *pcVar5 = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
  }
  FUN_005fe5f0(pcVar5);
  ExceptionList = pvStack_c;
  return;
}

