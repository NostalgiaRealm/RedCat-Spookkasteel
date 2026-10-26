/*
 * FUN_0050b9d0 at 0050b9d0
 * undefined FUN_0050b9d0(void)
 * Address ranges: 0050b9d0-0050bd79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0050b9d0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 local_e0 [4];
  char *local_dc;
  undefined1 local_d0 [20];
  int local_bc;
  undefined4 local_b8;
  undefined1 local_b4 [16];
  void *local_a4;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636a06;
  local_c = ExceptionList;
  local_b8 = 0;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x122);
  local_4 = 1;
  FUN_005183f0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    uVar3 = FUN_005a2cf0();
    uVar3 = FUN_005ae390(local_d0,s_CAdamBitmap__CreateFromFile___s___0069e7f8,uVar3);
    local_4._0_1_ = 2;
    FUN_005aff00(uVar3);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s___Settings_Bitmaps_ini_0069e684;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s___Settings_Bitmaps_ini_0069e684,~uVar6 - 1);
  local_4._0_1_ = 3;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_0069e67c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_0069e67c,~uVar6 - 1);
  local_4._0_1_ = 4;
  pcVar4 = (char *)FUN_005a2cf0();
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = pcVar4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(pcVar4,~uVar6 - 1);
  local_4._0_1_ = 5;
  FUN_005ac9d0(local_e0,local_b4,0,local_d0,0);
  FUN_005acca0();
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  iVar2 = 0;
  local_bc = 0;
  local_4._0_1_ = 6;
  FUN_005a3320();
  puVar10 = local_a0;
  uVar3 = 1;
  local_4._0_1_ = 7;
  FUN_005a2980(param_2,puVar10,1);
  cVar1 = FUN_005a27d0(param_2,puVar10,uVar3);
  if (cVar1 == '\0') {
    uVar3 = FUN_005a2cf0();
    uVar3 = FUN_005ae390(local_d0,s_AdamOpenGenesisFile___s___fails_0069e7d8,uVar3);
    local_4._0_1_ = 8;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x130,uVar3);
    local_4._0_1_ = 7;
    FUN_004040a0(1);
  }
  else {
    FUN_005a36c0();
    iVar5 = FUN_005c41c0();
    if (iVar5 == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = s_geBitmap_CreateFromFile___fails_0069e7b8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        pcVar9 = s_geBitmap_CreateFromFile___fails_0069e7b8;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)local_dc = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          local_dc = local_dc + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_dc = *pcVar9;
          pcVar9 = pcVar9 + 1;
          local_dc = local_dc + 1;
        }
        FUN_00404190(uVar6);
      }
      local_4._0_1_ = 9;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x138,local_e0);
      local_4._0_1_ = 7;
      FUN_004040a0(1);
    }
    else {
      local_a4 = operator_new(0x78);
      local_4._0_1_ = 10;
      if (local_a4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar3 = FUN_005a1d60(iVar5);
        iVar5 = FUN_0050a6c0(uVar3,iVar5);
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        }
      }
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        iVar2 = iVar5;
        local_bc = iVar5;
      }
      local_4._0_1_ = 7;
      if ((iVar5 != 0) &&
         (iVar8 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar8, iVar8 == 0)) {
        FUN_005abfc0(0);
      }
    }
  }
  *param_1 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  }
  local_b8 = 1;
  local_4._0_1_ = 6;
  FUN_005a3370();
  local_4._0_1_ = 1;
  if ((iVar2 != 0) &&
     (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = local_c;
  return param_1;
}

