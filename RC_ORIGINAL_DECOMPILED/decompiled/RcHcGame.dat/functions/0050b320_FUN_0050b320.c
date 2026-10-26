/*
 * FUN_0050b320 at 0050b320
 * undefined FUN_0050b320(void)
 * Address ranges: 0050b320-0050b6e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0050b320(int *param_1,int param_2,undefined1 param_3,char *param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  undefined4 param_10,undefined4 param_11,void *param_12)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006368e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0xd0);
  local_4 = 1;
  FUN_005183f0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_40,s_CAdamBitmap__Create___s___0069e79c,puVar3);
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
    uVar4 = FUN_005ae390(local_40,s_CAdamBitmap__Create___s___0069e79c,puVar3);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  iVar2 = FUN_005c01d0(param_7,5);
  if (iVar2 == 0) {
    param_3 = (char)param_12;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = s_geBitmap_CreateFromInfo___fails_0069e77c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      pcVar10 = s_geBitmap_CreateFromInfo___fails_0069e77c;
      pcVar11 = param_4;
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
      FUN_00404190(uVar7);
    }
    iVar5 = 0;
    local_4._0_1_ = 5;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0xdf,&param_3);
    local_4._0_1_ = 4;
    FUN_004040a0(1);
  }
  else {
    iVar5 = FUN_005c3880(param_9,param_10,param_11);
    if (iVar5 == 0) {
      param_3 = (char)param_12;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        pcVar10 = &DAT_006b3f70;
        pcVar11 = param_4;
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
        FUN_00404190(uVar7);
      }
      local_4._0_1_ = 6;
      pcVar6 = (code *)FUN_005a07f0(s_geBitmap_SetFormat__bitmap__a_In_0069e718,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069e554,0xe3,&param_3);
      (*pcVar6)();
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_004040a0(1);
    }
    if ((char)param_12 != '\0') {
      iVar5 = FUN_005c3350(0);
      if (iVar5 == 0) {
        param_3 = (char)param_12;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7 - 1;
        cVar1 = FUN_00401940(uVar7,1);
        if (cVar1 != '\0') {
          pcVar10 = &DAT_006b3f70;
          pcVar11 = param_4;
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
          FUN_00404190(uVar7);
        }
        local_4._0_1_ = 7;
        pcVar6 = (code *)FUN_005a07f0(s_geBitmap_GetInfo__bitmap___bitma_0069e6ec,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069e554,0xe8,&param_3);
        (*pcVar6)();
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004040a0(1);
      }
      FUN_005c0240();
      FUN_005c4120();
    }
    param_12 = operator_new(0x78);
    local_4._0_1_ = 8;
    if (param_12 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0050a6c0(param_2,iVar2);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      }
    }
    iVar5 = 0;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      iVar5 = iVar2;
    }
    local_4._0_1_ = 4;
    if ((iVar2 != 0) &&
       (iVar9 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar9, iVar9 == 0)) {
      FUN_005abfc0(0);
    }
  }
  *param_1 = iVar5;
  if (iVar5 != 0) {
    *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
  }
  local_4._0_1_ = 1;
  if ((iVar5 != 0) &&
     (iVar2 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = local_c;
  return param_1;
}

