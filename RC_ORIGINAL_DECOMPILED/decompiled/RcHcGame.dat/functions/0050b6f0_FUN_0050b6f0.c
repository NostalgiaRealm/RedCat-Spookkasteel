/*
 * FUN_0050b6f0 at 0050b6f0
 * undefined FUN_0050b6f0(void)
 * Address ranges: 0050b6f0-0050b9c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0050b6f0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_44 [4];
  char *local_40;
  uint local_3c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063695d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0xf9);
  local_4 = 1;
  FUN_005183f0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_44,s_CAdamBitmap__CreateFromFile___s___0069e7f8,puVar3);
    local_4._0_1_ = 2;
    FUN_005aff00(uVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  FUN_00515ff0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_44,s_CAdamBitmap__CreateFromFile___s___0069e7f8,puVar3);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar2 = 0;
  local_4._0_1_ = 4;
  FUN_005a3320();
  local_4._0_1_ = 5;
  uVar4 = FUN_005a3150(local_44,param_2);
  local_4._0_1_ = 6;
  cVar1 = FUN_005a3400(uVar4);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  if (cVar1 == '\0') {
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_44,s_AdamOpenGenesisFile___s___fails_0069e7d8,puVar3);
    local_4._0_1_ = 7;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x10b,uVar4);
    local_4._0_1_ = 5;
    FUN_004040a0(1);
  }
  else {
    FUN_005a36c0();
    iVar6 = FUN_005c41c0();
    if (iVar6 == 0) {
      local_44[0] = 0;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = s_geBitmap_CreateFromFile___fails_0069e7b8;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        pcVar10 = s_geBitmap_CreateFromFile___fails_0069e7b8;
        pcVar11 = local_40;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        local_40[uVar7] = '\0';
        local_3c = uVar7;
      }
      iVar2 = 0;
      local_4._0_1_ = 8;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x112,local_44);
      local_4._0_1_ = 5;
      FUN_004040a0(1);
    }
    else {
      pvVar5 = operator_new(0x78);
      local_4._0_1_ = 9;
      if (pvVar5 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0050a6c0(param_2,iVar6);
        if (iVar6 != 0) {
          *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
        }
      }
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
        iVar2 = iVar6;
      }
      local_4._0_1_ = 5;
      if ((iVar6 != 0) &&
         (iVar9 = *(int *)(iVar6 + 0x14) + -1, *(int *)(iVar6 + 0x14) = iVar9, iVar9 == 0)) {
        FUN_005abfc0(0);
      }
    }
  }
  *param_1 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  }
  local_4._0_1_ = 4;
  FUN_005a3370();
  local_4._0_1_ = 1;
  if ((iVar2 != 0) &&
     (iVar6 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = local_c;
  return param_1;
}

