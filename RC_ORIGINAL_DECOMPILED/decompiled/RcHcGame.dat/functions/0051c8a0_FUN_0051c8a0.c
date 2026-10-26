/*
 * FUN_0051c8a0 at 0051c8a0
 * undefined FUN_0051c8a0(void)
 * Address ranges: 0051c8a0-0051cea4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0051c8a0(int param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  float10 fVar8;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  char *pcStack_5c;
  undefined1 auStack_58 [16];
  char acStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638a18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    puStack_8c = (undefined4 *)0x51c8ce;
    ExceptionList = &pvStack_c;
    FUN_0055b280();
  }
  if (DAT_006b915c == 0) {
    puStack_8c = (undefined4 *)0x51c8e1;
    FUN_004bc480();
  }
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    puStack_8c = (undefined4 *)0x51c8fb;
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    puStack_8c = (undefined4 *)0x0;
    local_68 = CONCAT31(local_68._1_3_,(char)param_2);
    puStack_90 = (undefined4 *)0x51c920;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    puStack_8c = (undefined4 *)(~uVar6 - 1);
    puStack_90 = (undefined4 *)&DAT_006b3f70;
    pcStack_94 = (char *)0x51c93d;
    FUN_004040f0();
    puStack_8c = &local_68;
    local_4 = 0;
    puStack_90 = (undefined4 *)0x130;
    pcStack_94 = s___AdamSource_AdamApplication_h_0068e58c;
    pcStack_98 = s_m_Game_0068e584;
    iStack_9c = 0x51c961;
    pcVar4 = (code *)FUN_005a07f0();
    iStack_9c = 0x51c963;
    (*pcVar4)();
    local_4 = 0xffffffff;
    puStack_8c = (undefined4 *)0x1;
    puStack_90 = (undefined4 *)0x51c978;
    FUN_004040a0();
  }
  iVar3 = *(int *)(iVar3 + 0x3a4);
  if ((char)param_2 != '\0') {
    puStack_8c = (undefined4 *)0x0;
    local_68 = CONCAT31(local_68._1_3_,(char)param_2);
    puStack_90 = (undefined4 *)0x51c9a7;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    puStack_8c = (undefined4 *)(~uVar6 - 1);
    puStack_90 = (undefined4 *)&DAT_006b3f70;
    pcStack_94 = (char *)0x51c9c4;
    FUN_004040f0();
    puStack_90 = &local_68;
    puStack_8c = (undefined4 *)0x0;
    pcStack_98 = acStack_48;
    pcStack_94 = (char *)0x2d;
    local_4 = 1;
    iStack_9c = 0x51c9e2;
    pcStack_94 = (char *)FUN_004e5980();
    puStack_8c = (undefined4 *)0xffffffff;
    puStack_90 = (undefined4 *)0x0;
    local_4._0_1_ = 2;
    pcStack_98 = (char *)0x51ca05;
    FUN_0040cc00();
    puStack_8c = (undefined4 *)0x1;
    local_4 = CONCAT31(local_4._1_3_,1);
    puStack_90 = (undefined4 *)0x51ca18;
    FUN_004040a0();
    puStack_8c = (undefined4 *)0x1;
    local_4 = 0xffffffff;
    puStack_90 = (undefined4 *)0x51ca2a;
    FUN_004040a0();
    if (*(int *)(iVar3 + 0x814) == 0) {
      puStack_8c = (undefined4 *)0x0;
      local_68 = CONCAT31(local_68._1_3_,(char)param_2);
      puStack_90 = (undefined4 *)0x51ca4a;
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      puStack_8c = (undefined4 *)(~uVar6 - 1);
      puStack_90 = (undefined4 *)&DAT_006b3f70;
      pcStack_94 = (char *)0x51ca67;
      FUN_004040f0();
      puStack_8c = &local_68;
      local_4 = 3;
      puStack_90 = (undefined4 *)0xb6;
      pcStack_94 = s___AdamSource_DaviRC_h_0068d638;
      pcStack_98 = s_m_Pointer_0068d62c;
      iStack_9c = 0x51ca8b;
      pcVar4 = (code *)FUN_005a07f0();
      iStack_9c = 0x51ca8d;
      (*pcVar4)();
      local_4 = 0xffffffff;
      puStack_8c = (undefined4 *)0x1;
      puStack_90 = (undefined4 *)0x51caa2;
      FUN_004040a0();
    }
    puStack_90 = (undefined4 *)0x51caae;
    puStack_8c = (undefined4 *)(param_1 + 100);
    fVar8 = (float10)FUN_004b21b0();
    param_2 = (int *)(float)fVar8;
    if (*(int *)(iVar3 + 0x814) == 0) {
      puStack_8c = (undefined4 *)0x0;
      local_68 = CONCAT31(local_68._1_3_,(char)param_2);
      puStack_90 = (undefined4 *)0x51cad5;
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      puStack_8c = (undefined4 *)(~uVar6 - 1);
      puStack_90 = (undefined4 *)&DAT_006b3f70;
      pcStack_94 = (char *)0x51caf2;
      FUN_004040f0();
      puStack_8c = &local_68;
      local_4 = 4;
      puStack_90 = (undefined4 *)0xb6;
      pcStack_94 = s___AdamSource_DaviRC_h_0068d638;
      pcStack_98 = s_m_Pointer_0068d62c;
      iStack_9c = 0x51cb16;
      pcVar4 = (code *)FUN_005a07f0();
      iStack_9c = 0x51cb18;
      (*pcVar4)();
      local_4 = 0xffffffff;
      puStack_8c = (undefined4 *)0x1;
      puStack_90 = (undefined4 *)0x51cb2d;
      FUN_004040a0();
    }
    puStack_90 = (undefined4 *)0x51cb39;
    puStack_8c = (undefined4 *)(param_1 + 100);
    fVar8 = (float10)FUN_004b1fc0();
    *(float *)(param_1 + 0x5c) = (1.0 - (float)param_2) * 0.5;
    *(float *)(param_1 + 0x60) = (float)(((float10)1.0 - fVar8) * (float10)0.5);
  }
  uVar1 = (char)param_2;
  while( true ) {
    puStack_8c = (undefined4 *)0x51cb78;
    FUN_005aaca0();
    puStack_8c = (undefined4 *)auStack_28;
    puStack_90 = (undefined4 *)0x51cb84;
    cVar2 = FUN_005a9c30();
    if (cVar2 == '\0') break;
    iVar5 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      puStack_8c = (undefined4 *)0x51cb9a;
      iVar5 = FUN_004bc480();
    }
    if (*(int *)(iVar5 + 0x3a8) == 0) {
      puStack_8c = (undefined4 *)0x0;
      local_68 = CONCAT31(local_68._1_3_,uVar1);
      puStack_90 = (undefined4 *)0x51cbb5;
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      puStack_8c = (undefined4 *)(~uVar6 - 1);
      puStack_90 = (undefined4 *)&DAT_006b3f70;
      pcStack_94 = (char *)0x51cbd2;
      FUN_004040f0();
      puStack_8c = &local_68;
      local_4 = 5;
      puStack_90 = (undefined4 *)0x136;
      pcStack_94 = s___AdamSource_AdamApplication_h_0068e58c;
      pcStack_98 = s_m_Input____0_00693a28;
      iStack_9c = 0x51cbf6;
      pcVar4 = (code *)FUN_005a07f0();
      iStack_9c = 0x51cbf8;
      (*pcVar4)();
      local_4 = 0xffffffff;
      puStack_8c = (undefined4 *)0x1;
      puStack_90 = (undefined4 *)0x51cc0d;
      FUN_004040a0();
    }
    puStack_8c = (undefined4 *)0x1b;
    puStack_90 = (undefined4 *)0x51cc1a;
    cVar2 = (**(code **)(**(int **)(iVar5 + 0x3a8) + 0x40))();
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
  }
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    puStack_8c = (undefined4 *)0x51cc3f;
    (**(code **)(**(int **)(param_1 + 0x74) + 0x20))();
  }
  puStack_8c = (undefined4 *)0x51cc48;
  FUN_005630f0();
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    puStack_8c = (undefined4 *)0x51cc54;
    (**(code **)(**(int **)(param_1 + 0x74) + 0x1c))();
  }
  if (*(int *)(iVar3 + 0xdc) != 0) {
    local_68 = 0;
    uStack_64 = 0x3f800000;
    iStack_60 = 0;
    pcStack_5c = (char *)0x3f800000;
    acStack_48[0] = '\0';
    acStack_48[1] = '\0';
    acStack_48[2] = '\0';
    acStack_48[3] = '\0';
    if (*(int *)(iVar3 + 0xdc) == 0) {
      puStack_8c = (undefined4 *)0x0;
      auStack_58[0] = (char)param_2;
      puStack_90 = (undefined4 *)0x51ccae;
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      puStack_8c = (undefined4 *)(~uVar6 - 1);
      puStack_90 = (undefined4 *)&DAT_006b3f70;
      pcStack_94 = (char *)0x51cccb;
      FUN_004040f0();
      puStack_8c = (undefined4 *)auStack_58;
      local_4 = 6;
      puStack_90 = (undefined4 *)0xb6;
      pcStack_94 = s___AdamSource_DaviRC_h_0068d638;
      pcStack_98 = s_m_Pointer_0068d62c;
      iStack_9c = 0x51ccef;
      pcVar4 = (code *)FUN_005a07f0();
      iStack_9c = 0x51ccf1;
      (*pcVar4)();
      local_4 = 0xffffffff;
      puStack_8c = (undefined4 *)0x1;
      puStack_90 = (undefined4 *)0x51cd06;
      FUN_004040a0();
    }
    puStack_8c = (undefined4 *)0x51cd11;
    uStack_44 = FUN_00439d60();
    uStack_40 = 0;
    if (*(int *)(iVar3 + 0xdc) == 0) {
      puStack_8c = &param_2;
      puStack_90 = (undefined4 *)&DAT_006b3f70;
      pcStack_94 = (char *)0x51cd39;
      FUN_00409810();
      puStack_8c = (undefined4 *)auStack_58;
      local_4 = 7;
      puStack_90 = (undefined4 *)0xb6;
      pcStack_94 = s___AdamSource_DaviRC_h_0068d638;
      pcStack_98 = s_m_Pointer_0068d62c;
      iStack_9c = 0x51cd5d;
      pcVar4 = (code *)FUN_005a07f0();
      iStack_9c = 0x51cd5f;
      (*pcVar4)();
      local_4 = 0xffffffff;
      puStack_8c = (undefined4 *)0x1;
      puStack_90 = (undefined4 *)0x51cd74;
      FUN_004040a0();
    }
    puStack_8c = (undefined4 *)0x51cd7b;
    uStack_3c = FUN_00439e20();
    puStack_8c = (undefined4 *)0x0;
    pcStack_94 = acStack_48;
    puStack_90 = (undefined4 *)0x437f0000;
    uStack_a4 = local_68;
    param_2 = &iStack_a8;
    iStack_a8 = iStack_60;
    uStack_a0 = uStack_64;
    iStack_9c = iStack_60;
    pcStack_98 = pcStack_5c;
    FUN_00449760((int *)(iVar3 + 0xdc));
    FUN_005614e0();
  }
  if (*(int *)(iVar3 + 0x814) != 0) {
    if (*(int *)(iVar3 + 0x814) == 0) {
      puStack_8c = (undefined4 *)0x0;
      auStack_38[0] = (char)param_2;
      puStack_90 = (undefined4 *)0x51cdec;
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      puStack_8c = (undefined4 *)(~uVar6 - 1);
      puStack_90 = (undefined4 *)&DAT_006b3f70;
      pcStack_94 = (char *)0x51ce09;
      FUN_004040f0();
      puStack_8c = (undefined4 *)auStack_38;
      local_4 = 8;
      puStack_90 = (undefined4 *)0xb6;
      pcStack_94 = s___AdamSource_DaviRC_h_0068d638;
      pcStack_98 = s_m_Pointer_0068d62c;
      iStack_9c = 0x51ce2d;
      pcVar4 = (code *)FUN_005a07f0();
      iStack_9c = 0x51ce2f;
      (*pcVar4)();
      local_4 = 0xffffffff;
      puStack_8c = (undefined4 *)0x1;
      puStack_90 = (undefined4 *)0x51ce44;
      FUN_004040a0();
    }
    puStack_8c = (undefined4 *)0x1;
    iStack_a8 = param_1 + 100;
    iStack_9c = 0x437f0000;
    pcStack_98 = (char *)0x437f0000;
    pcStack_94 = (char *)0x437f0000;
    uStack_a4 = *(undefined4 *)(param_1 + 0x5c);
    puStack_90 = (undefined4 *)0x437f0000;
    uStack_a0 = *(undefined4 *)(param_1 + 0x60);
    FUN_004b15c0();
  }
  puStack_8c = (undefined4 *)0x51ce90;
  FUN_005637b0();
  ExceptionList = pvStack_c;
  return;
}

