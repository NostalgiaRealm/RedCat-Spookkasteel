/*
 * FUN_00542030 at 00542030
 * undefined FUN_00542030(void)
 * Address ranges: 00542030-0054256d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00542030(undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined1 local_140;
  int local_13c;
  int local_138;
  undefined4 local_130;
  undefined1 local_12c [16];
  undefined1 local_11c;
  int local_114;
  undefined1 local_10c [4];
  undefined1 *local_108;
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined1 local_dc [16];
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [124];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ca12;
  local_c = ExceptionList;
  local_130 = 0;
  ExceptionList = &local_c;
  FUN_0044e4a0(&local_142);
  local_4 = 1;
  FUN_00549830(0);
  local_12c[0] = local_142;
  local_4 = 2;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = &DAT_006a1464;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006a1464,~uVar9 - 1);
  local_4._0_1_ = 3;
  uVar2 = FUN_00436f90(local_10c);
  local_4._0_1_ = 4;
  uVar3 = FUN_00548d70(local_fc);
  local_4 = CONCAT31(local_4._1_3_,5);
  iVar4 = FUN_005ac9d0(local_12c,uVar3,0,uVar2,0);
  iVar6 = *(int *)(iVar4 + 100);
  if (iVar6 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar6 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar6;
  }
  FUN_005acca0();
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  if (iVar6 < 1) {
    FUN_00545030(param_1);
    local_130 = 1;
    local_4 = (uint)local_4._1_3_ << 8;
    for (iVar6 = local_13c; iVar6 != local_138; iVar6 = iVar6 + 0x14) {
      FUN_005497d0(0);
    }
    FUN_005fe5f0(local_13c);
  }
  else {
    FUN_0044e4a0(&local_143);
    local_4._0_1_ = 6;
    local_fc[0] = local_143;
    FUN_004040a0(0);
    local_11c = local_143;
    local_4._0_1_ = 7;
    FUN_004040a0(0);
    local_4._0_1_ = 8;
    local_10c[0] = local_143;
    FUN_004040a0(0);
    iVar4 = 0;
    local_4._0_1_ = 9;
    if (0 < iVar6) {
      do {
        iVar4 = iVar4 + 1;
        uVar2 = FUN_005ae390(local_a8,s_Key_i_006a1474,iVar4);
        local_4._0_1_ = 10;
        FUN_0040cc00(uVar2,0,0xffffffff);
        local_4._0_1_ = 9;
        FUN_004040a0(1);
        uVar2 = FUN_00436f90(local_c8);
        local_4._0_1_ = 0xb;
        uVar3 = FUN_00548d70(local_98);
        local_4._0_1_ = 0xc;
        iVar7 = FUN_005acaf0(local_fc,uVar3,&DAT_006b3f70,uVar2,0);
        local_12c[0] = *(undefined1 *)(iVar7 + 0x14);
        local_4._0_1_ = 0xd;
        FUN_004040a0(0);
        FUN_0040cc00(iVar7 + 0x14,0,0xffffffff);
        local_ec[0] = local_12c[0];
        local_4._0_1_ = 0xe;
        FUN_004040a0(0);
        FUN_0040cc00(local_12c,0,0xffffffff);
        local_4._0_1_ = 0xf;
        FUN_0040cc00(local_ec,0,0xffffffff);
        local_4._0_1_ = 0xe;
        FUN_004040a0(1);
        local_4._0_1_ = 0xd;
        FUN_004040a0(1);
        local_4._0_1_ = 0xc;
        FUN_005acca0();
        local_4._0_1_ = 0xb;
        FUN_004040a0(1);
        local_4._0_1_ = 9;
        FUN_004040a0(1);
        local_141 = 0x2c;
        iVar7 = FUN_00548ba0(&local_141,0,1);
        uVar2 = FUN_004eed60(local_88,0,iVar7);
        local_4._0_1_ = 0x10;
        FUN_0040cc00(uVar2,0,0xffffffff);
        local_4._0_1_ = 9;
        FUN_004040a0(1);
        uVar2 = FUN_004eed60(local_b8,iVar7 + 1,(local_114 - iVar7) + -1);
        local_4._0_1_ = 0x11;
        FUN_0040cc00(uVar2,0,0xffffffff);
        local_4._0_1_ = 9;
        FUN_004040a0(1);
        puVar5 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        local_cc = FUN_0060af10(puVar5);
        FUN_00549b10(local_138,local_dc);
      } while (iVar4 < iVar6);
    }
    local_4._0_1_ = 8;
    FUN_004040a0(1);
    local_4._0_1_ = 7;
    FUN_004040a0(1);
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    *param_1 = local_140;
    iVar6 = FUN_00548c30();
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    pvVar8 = operator_new(iVar6 * 0x14);
    *(void **)(param_1 + 4) = pvVar8;
    uVar2 = FUN_00548c60(local_13c,local_138,pvVar8);
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    local_130 = 1;
    local_4 = (uint)local_4._1_3_ << 8;
    for (iVar6 = local_13c; iVar6 != local_138; iVar6 = iVar6 + 0x14) {
      FUN_005497d0(0);
    }
    FUN_005fe5f0(local_13c);
  }
  ExceptionList = local_c;
  return param_1;
}

