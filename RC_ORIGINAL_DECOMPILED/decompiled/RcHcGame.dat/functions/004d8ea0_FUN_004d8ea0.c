/*
 * FUN_004d8ea0 at 004d8ea0
 * undefined FUN_004d8ea0(void)
 * Address ranges: 004d8ea0-004d9298
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d8ea0(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  uint uVar7;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar8;
  char *pcVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_58;
  undefined1 *local_54;
  undefined1 *puStack_50;
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  void *apvStack_1c [2];
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00631c80;
  pvStack_c = ExceptionList;
  local_4 = 1;
  uStack_3 = 0;
  iVar8 = param_1;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    local_54 = (undefined1 *)((int)&uStack_70 + 4);
    uStack_70 = 2.51126403829241e-317;
    ExceptionList = &pvStack_c;
    FUN_00555180();
    uStack_70 = (double)CONCAT44(0x4d8ef2,(undefined1 *)uStack_70);
    FUN_0059b200();
    if (param_2 == 0) {
      uStack_70 = (double)CONCAT44((int)&uStack_58 + 1,&DAT_006b3f70);
      uStack_78 = (double)CONCAT44(0x4d8f0d,(undefined4)uStack_78);
      FUN_00409810();
      local_4 = 2;
      uStack_70 = (double)CONCAT44(local_4c,0xb6);
      uStack_78 = 1.1052739329061924e-306;
      pcVar3 = (code *)FUN_005a07f0();
      (*pcVar3)();
      local_4 = 1;
      uStack_70 = 2.12450709798728e-314;
      FUN_004040a0();
    }
    uStack_70 = 2.5113124567257e-317;
    FUN_004f41b0();
    iVar8 = extraout_ECX;
  }
  iVar1 = param_3;
  if (param_3 != 0) {
    local_54 = (undefined1 *)((int)&uStack_70 + 4);
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    uStack_70 = (double)CONCAT44(param_3,0x4d8f70);
    FUN_00555180();
    uStack_70 = (double)CONCAT44(0x4d8f7b,(undefined1 *)uStack_70);
    cVar2 = FUN_0059b1f0();
    if (cVar2 != '\0') {
      local_4c[0] = (undefined1)param_2;
      uStack_70 = 2.51134852351785e-317;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uStack_70 = (double)CONCAT44(~uVar7 - 1,&DAT_006b3f70);
      uStack_78 = (double)CONCAT44(0x4d8fb0,(undefined4)uStack_78);
      FUN_004040f0();
      local_4 = 3;
      uStack_70 = (double)CONCAT44(local_4c,0x4e1);
      uStack_78 = 1.1388130100685673e-306;
      pcVar3 = (code *)FUN_005a07f0();
      (*pcVar3)();
      local_4 = 1;
      uStack_70 = 2.12450717851998e-314;
      FUN_004040a0();
    }
    uStack_70 = (double)CONCAT44(param_1,0x4d8fe9);
    FUN_004f41b0();
    local_54 = (undefined1 *)((int)&uStack_70 + 4);
    uStack_70._0_4_ = (undefined1 *)((int)&uStack_70 + 4);
    uStack_78 = (double)CONCAT44(0x4d8ff6,(undefined4)uStack_78);
    uStack_70._4_4_ = extraout_ECX_00;
    FUN_00454200();
    uStack_78 = (double)CONCAT44(0x4d8ffd,(undefined4)uStack_78);
    FUN_004b0050();
    uStack_70 = (double)CONCAT44(uStack_70._4_4_,0x4d9004);
    FUN_004dbea0();
    uStack_70._4_4_ = *(int *)(param_1 + 0x10c);
    local_54 = (undefined1 *)((int)&uStack_70 + 4);
    if (uStack_70._4_4_ != 0) {
      *(int *)(uStack_70._4_4_ + 0x14) = *(int *)(uStack_70._4_4_ + 0x14) + 1;
    }
    local_4 = 1;
    uStack_70._0_4_ = (undefined1 *)0x4d9023;
    FUN_00454200();
    uStack_70 = (double)CONCAT44(uStack_70._4_4_,0x4d902a);
    FUN_00563d00();
    uStack_70._4_4_ = 0;
    uStack_70._0_4_ = (undefined1 *)0x4d9033;
    FUN_004f3d80();
    uStack_70 = (double)CONCAT44(uStack_70._4_4_,0x4d903a);
    FUN_004fed00();
    uStack_70._4_4_ = iVar1;
    uStack_70._0_4_ = (undefined1 *)0x4d9048;
    local_54 = (undefined1 *)((int)&uStack_70 + 4);
    FUN_005844b0();
    local_4 = 7;
    uStack_70._0_4_ = (undefined1 *)0x4d9054;
    piVar4 = (int *)FUN_00436db0();
    local_4 = 1;
    uStack_70 = (double)CONCAT44(uStack_70._4_4_,0x4d905f);
    (**(code **)(*piVar4 + 0x10))();
    uStack_70 = (double)CONCAT44(0x4d9069,(undefined1 *)uStack_70);
    iVar5 = FUN_004337e0();
    iVar8 = extraout_ECX_01;
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x10c) == 0) {
        uStack_70 = (double)CONCAT44((int)&uStack_58 + 1,&DAT_006b3f70);
        uStack_78 = (double)CONCAT44(0x4d908e,(undefined4)uStack_78);
        FUN_00409810();
        local_4 = 8;
        uStack_70 = (double)CONCAT44(local_4c,0xb6);
        uStack_78 = 1.1052739329061924e-306;
        pcVar3 = (code *)FUN_005a07f0();
        (*pcVar3)();
        local_4 = 1;
        uStack_70 = 2.12450728820255e-314;
        FUN_004040a0();
      }
      local_54 = *(undefined1 **)(param_1 + 0x10c);
      if (local_54 == (undefined1 *)0x0) {
        uStack_70 = (double)CONCAT44((int)&uStack_58 + 2,&DAT_006b3f70);
        uStack_78 = (double)CONCAT44(0x4d90e2,(undefined4)uStack_78);
        FUN_00409810();
        local_4 = 9;
        uStack_70 = (double)CONCAT44(auStack_3c,0xb6);
        uStack_78 = 1.1052739329061924e-306;
        pcVar3 = (code *)FUN_005a07f0();
        (*pcVar3)();
        local_4 = 1;
        uStack_70 = 2.12450732970406e-314;
        FUN_004040a0();
      }
      iVar8 = *(int *)(param_1 + 0x10c);
      if (iVar8 == 0) {
        uStack_70 = (double)CONCAT44((int)&uStack_58 + 3,&DAT_006b3f70);
        uStack_78 = (double)CONCAT44(0x4d9132,(undefined4)uStack_78);
        FUN_00409810();
        local_4 = 10;
        uStack_70 = (double)CONCAT44(auStack_2c,0xb6);
        uStack_78 = 1.1052739329061924e-306;
        pcVar3 = (code *)FUN_005a07f0();
        (*pcVar3)();
        local_4 = 1;
        uStack_70 = 2.12450736922932e-314;
        FUN_004040a0();
      }
      uStack_70 = (double)*(float *)((int)local_54 + 0x218);
      uStack_78 = (double)*(float *)(iVar8 + 0x214);
      uVar6 = FUN_005ae390(apvStack_1c,s_Player_starts_at___2f____2f____2_00699c34,
                           (double)*(float *)(*(int *)(param_1 + 0x10c) + 0x210));
      local_4 = 0xb;
      FUN_005aff00(uVar6);
      local_4 = 1;
      uStack_70 = 2.12450741468335e-314;
      FUN_004040a0();
      iVar8 = extraout_ECX_02;
    }
  }
  local_54 = (undefined1 *)((int)&uStack_70 + 4);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  puStack_50 = (undefined1 *)&uStack_70;
  uStack_70 = (double)CONCAT44(iVar1,iVar8);
  local_4 = 0xc;
  uStack_78 = (double)CONCAT44(&param_2,0x4d91e5);
  FUN_00449760();
  local_4 = 0xd;
  uStack_78 = (double)CONCAT44(0x4d91f1,(undefined4)uStack_78);
  piVar4 = (int *)FUN_00436db0();
  _local_4 = CONCAT31(uStack_3,1);
  uStack_78 = (double)CONCAT44(0x4d91fc,(undefined4)uStack_78);
  (**(code **)(*piVar4 + 0x18))();
  uStack_58 = (undefined1 *)((int)&uStack_78 + 4);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  uStack_78 = (double)CONCAT44(iVar1,extraout_ECX_03);
  pvStack_c._0_1_ = 0xe;
  FUN_00449760();
  pvStack_c._0_1_ = 0xf;
  piVar4 = (int *)FUN_00480cd0();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  (**(code **)(*piVar4 + 0x1c))();
  uStack_14 = uStack_14 & 0xffffff00;
  if (pvStack_c != (void *)0x0) {
    iVar8 = *(int *)((int)pvStack_c + 0x14) + -1;
    *(int *)((int)pvStack_c + 0x14) = iVar8;
    if (iVar8 == 0) {
      FUN_005abfc0();
    }
    pvStack_c = (void *)0x0;
  }
  uStack_14 = 0xffffffff;
  if ((iVar1 != 0) &&
     (iVar8 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = apvStack_1c[0];
  return;
}

