/*
 * FUN_004e34e0 at 004e34e0
 * undefined FUN_004e34e0(void)
 * Address ranges: 004e34e0-004e3924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004e34e0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 unaff_retaddr;
  char *pcVar10;
  undefined4 *puVar11;
  float fVar12;
  void *local_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006329ba;
  pvStack_c = ExceptionList;
  piVar7 = (int *)0x0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069a274,0x1fa);
  local_4 = 0;
  local_30 = operator_new(500);
  bVar9 = local_30 != (void *)0x0;
  local_4._0_1_ = 1;
  if (bVar9) {
    uVar2 = FUN_005033f0(local_1c,*param_1,s_DynamicLight_0069a348);
    local_4 = CONCAT31(local_4._1_3_,2);
    piVar7 = (int *)FUN_004e22a0(uVar2);
  }
  local_4 = 0;
  if (bVar9) {
    FUN_004040a0(1);
  }
  FUN_004e2c70(param_1[2],param_1[3],param_1[4]);
  (**(code **)(*piVar7 + 0x4c))(param_1 + 2);
  iVar5 = param_1[0x1b];
  *(bool *)(piVar7 + 0x6d) = iVar5 != 0;
  if (iVar5 != 0) {
    puVar11 = param_1 + 0xe;
  }
  else {
    puVar11 = param_1 + 10;
  }
  FUN_004e3090(puVar11);
  if (param_1[0x18] == 0) {
    FUN_00502350(0);
    fVar12 = 0.0;
  }
  else {
    FUN_00502350(1);
    if ((char)piVar7[0x6d] == '\0') {
      fVar12 = (float)(int)param_1[5];
    }
    else {
      fVar12 = (float)(int)param_1[6];
    }
  }
  FUN_004e2d60(fVar12);
  pcVar10 = (char *)*param_1;
  FUN_004040a0(0);
  puStack_8._0_1_ = 4;
  if (pcVar10 == (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    pcVar10 = &DAT_006b3f70;
  }
  else {
    uVar4 = 0xffffffff;
    pcVar8 = pcVar10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar10,~uVar4 - 1);
  FUN_00503ae0(&local_30);
  puStack_8._0_1_ = 0;
  FUN_004040a0(1);
  pcVar10 = (char *)param_1[1];
  local_30 = (void *)CONCAT31(local_30._1_3_,unaff_retaddr);
  FUN_004040a0(0);
  puStack_8._0_1_ = 5;
  if (pcVar10 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar8 = pcVar10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar10,~uVar4 - 1);
  }
  FUN_0040cc00(&local_30,0,0xffffffff);
  puStack_8._0_1_ = 0;
  FUN_004040a0(1);
  FUN_004e30d0(param_1[0x15] != 0);
  FUN_004e3120(param_1[0x17]);
  FUN_004e3100(param_1[0x16] != 0);
  FUN_004e3180((float)(int)param_1[5],(float)(int)param_1[6]);
  FUN_004e3290(param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],
               param_1[0x10],param_1[0x11]);
  uVar2 = FUN_005ae4b0(&local_30,param_1[8]);
  puStack_8._0_1_ = 6;
  FUN_004e32f0(uVar2,param_1[9],param_1[7]);
  puStack_8._0_1_ = 0;
  FUN_004040a0(1);
  uVar2 = FUN_005ae4b0(&local_30,param_1[0x13]);
  puStack_8._0_1_ = 7;
  FUN_004e3490(uVar2,param_1[0x14],param_1[0x12]);
  puStack_8._0_1_ = 0;
  if (pcStack_2c != (char *)0x0) {
    cVar1 = *(char *)((int)pcStack_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)pcStack_2c + -1));
    }
    else {
      *(char *)((int)pcStack_2c + -1) = cVar1 + -1;
    }
  }
  puVar11 = (undefined4 *)param_1[0x1a];
  if (puVar11 != (undefined4 *)0x0) {
    if ((char *)*puVar11 != (char *)0x0) {
      iVar5 = -1;
      pcVar10 = (char *)*puVar11;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (iVar5 != -2) {
        pcVar10 = (char *)*puVar11;
        uVar4 = 0xffffffff;
        local_30 = (void *)CONCAT31(local_30._1_3_,unaff_retaddr);
        pcStack_2c = (char *)0x0;
        uStack_28 = 0;
        uStack_24 = 0;
        pcVar8 = pcVar10;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4 - 1;
        cVar1 = FUN_00401940(uVar4,1);
        if (cVar1 != '\0') {
          pcVar8 = pcStack_2c;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar8 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar8 = pcVar8 + 1;
          }
          FUN_00404190(uVar4);
        }
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
        FUN_0040cc00(&local_30,0,0xffffffff);
        if (pcStack_2c != (char *)0x0) {
          cVar1 = pcStack_2c[-1];
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            pcStack_2c[-1] = cVar1 + -1;
            pcStack_2c = (char *)0x0;
            uStack_28 = 0;
            uStack_24 = 0;
            goto LAB_004e38ff;
          }
          FUN_005fe5f0(pcStack_2c + -1);
        }
        pcStack_2c = (char *)0x0;
        uStack_28 = 0;
        uStack_24 = 0;
        goto LAB_004e38ff;
      }
    }
    puVar3 = (undefined1 *)piVar7[0x1c];
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar2 = FUN_005ae390(auStack_20,s_Dynamiclight___s__cannot_update_C_0069a310,puVar3);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    FUN_005035a0(uVar2);
    if (local_1c[0] != 0) {
      cVar1 = *(char *)(local_1c[0] + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_1c[0] + -1));
      }
      else {
        *(char *)(local_1c[0] + -1) = cVar1 + -1;
      }
    }
  }
LAB_004e38ff:
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_10;
  return piVar7;
}

