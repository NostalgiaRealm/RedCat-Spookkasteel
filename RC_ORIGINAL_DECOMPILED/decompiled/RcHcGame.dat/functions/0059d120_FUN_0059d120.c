/*
 * FUN_0059d120 at 0059d120
 * undefined FUN_0059d120(void)
 * Address ranges: 0059d120-0059d413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0059d120(int param_1,int param_2,float param_3,undefined8 *param_4)

{
  uint3 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00644950;
  pvStack_c = ExceptionList;
  local_30 = 0;
  local_4._1_3_ = 0;
  uVar1 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  local_34 = param_1;
  if (param_2 == 0) {
    local_2c[0] = 0;
    uStack_50 = 2.9082279983626e-317;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar10 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10 - 1;
    uStack_50 = (double)CONCAT44(1,uVar10);
    uStack_58 = (double)CONCAT44(0x59d18c,(undefined4)uStack_58);
    cVar2 = FUN_00401940();
    if (cVar2 != '\0') {
      puVar12 = (undefined4 *)&DAT_006b3f70;
      puVar14 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      uStack_50 = (double)CONCAT44(uVar10,0x59d1b3);
      FUN_00404190();
    }
    local_4._0_1_ = 2;
    uStack_50 = (double)CONCAT44(local_2c,0x13b);
    uStack_58 = 1.176993995464313e-306;
    pcVar3 = (code *)FUN_005a07f0();
    (*pcVar3)();
    local_4._0_1_ = 1;
    uStack_50 = 2.12490407775745e-314;
    FUN_004040a0();
    uVar1 = local_4._1_3_;
  }
  local_4._1_3_ = uVar1;
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_50 = (double)CONCAT44(0x59d1f0,(int *)uStack_50);
  iVar4 = FUN_005195f0();
  iVar6 = *(int *)(iVar4 + 100);
  if (iVar6 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uStack_50 = (double)CONCAT44(puVar5,0x59d20e);
    iVar6 = FUN_0060af10();
    *(int *)(iVar4 + 100) = iVar6;
  }
  if (iVar6 != 0) {
    uStack_50 = (double)(float)param_4;
    uStack_58 = (double)param_3;
    uVar7 = FUN_005ae390(auStack_1c,s_CAdamWayPointSystem__CreateLinks_006a73dc);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar7);
    local_4 = (uint)local_4._1_3_ << 8;
    uStack_50 = 2.124904134575e-314;
    FUN_004040a0();
  }
  puVar5 = (undefined1 *)param_4;
  iStack_38 = 0;
  while( true ) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    if (iVar6 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 8) - iVar6 >> 2;
    }
    if (iVar4 <= iStack_38) break;
    param_4 = (undefined8 *)((int)&uStack_50 + 4);
    uStack_50._0_4_ = &iStack_38;
    uStack_58 = (double)CONCAT44(0x59d296,(undefined4)uStack_58);
    uStack_50._4_4_ = iVar6;
    FUN_0059b1d0();
    uStack_50 = (double)CONCAT44(uStack_50._4_4_,0x59d29d);
    uVar8 = FUN_0059df90();
    bVar15 = false;
    uStack_50 = (double)CONCAT44(uVar8,0x59d2ad);
    FUN_005a0030();
    uStack_50 = (double)CONCAT44(0x59d2b4,(int *)uStack_50);
    iVar6 = FUN_00598540();
    uVar7 = extraout_ECX;
    while ((iVar6 < 8 && (!bVar15))) {
      uStack_50 = (double)CONCAT44(puVar5,param_3);
      param_4 = &uStack_58;
      uStack_58 = (double)CONCAT44(uVar8,uVar7);
      FUN_00449760(&param_2);
      iVar6 = FUN_0059db40();
      bVar15 = iVar6 == 0;
      if (!bVar15) {
        uStack_50 = (double)CONCAT44(puVar5,iVar6);
        param_4 = &uStack_58;
        uStack_58 = (double)CONCAT44(uVar8,extraout_ECX_00);
        FUN_00449760(&param_2);
        FUN_0059d5d0();
      }
      uStack_50 = (double)CONCAT44(0x59d306,(int *)uStack_50);
      iVar6 = FUN_00598540();
      uVar7 = extraout_ECX_01;
    }
    uStack_50 = (double)CONCAT44(0x59d312,SUB84(uStack_50,0));
    iVar6 = FUN_00598540();
    if (iVar6 == 0) {
      uStack_50 = (double)CONCAT44(auStack_1c,0x59d326);
      iVar6 = FUN_0059a1b0();
      puVar9 = *(undefined1 **)(iVar6 + 4);
      local_4._0_1_ = 4;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_0064a3b4;
      }
      uStack_58._4_4_ = local_2c;
      uStack_50 = (double)CONCAT44(puVar9,s_Could_not_create_any_link_for__s_006a73b8);
      uStack_58._0_4_ = 0x59d349;
      uVar7 = FUN_005ae390();
      uStack_58 = (double)CONCAT44(uStack_58._4_4_,uVar7);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_005aff00();
      if (local_28 != (undefined4 *)0x0) {
        cVar2 = *(char *)((int)local_28 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          uStack_50 = (double)CONCAT44((char *)((int)local_28 + -1),0x59d379);
          FUN_005fe5f0();
        }
        else {
          *(char *)((int)local_28 + -1) = cVar2 + -1;
        }
      }
      local_28 = (undefined4 *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      local_4 = local_4 & 0xffffff00;
      if (iStack_18 != 0) {
        cVar2 = *(char *)(iStack_18 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          uStack_50 = (double)CONCAT44((char *)(iStack_18 + -1),0x59d3af);
          FUN_005fe5f0();
        }
        else {
          *(char *)(iStack_18 + -1) = cVar2 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    iStack_38 = iStack_38 + 1;
    param_1 = local_34;
  }
  uStack_50 = (double)CONCAT44(0x59d3d7,(int *)uStack_50);
  FUN_0059c5a0();
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar6 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar6, iVar6 == 0)) {
    uStack_50 = 2.90855210542627e-317;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

