/*
 * FUN_0051c510 at 0051c510
 * undefined FUN_0051c510(void)
 * Address ranges: 0051c510-0051c7d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0051c510(int param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puStack_64;
  int iStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006389a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x68) == 0) {
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    iVar4 = -1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_MenuCursor__0_0069f5c8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069f5d8,0x27);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar4 = FUN_004bc480();
  }
  FUN_004040a0();
  local_4 = 1;
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(*(int *)(param_1 + 0x68) + 0x28) == '\0') {
    while( true ) {
      FUN_005aaca0();
      cVar2 = FUN_005a9c30();
      if (cVar2 == '\0') break;
      FUN_0053a720();
    }
  }
  if (*(int **)(param_1 + 100) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 100) + 0x20))();
  }
  FUN_005630f0();
  if (*(int **)(param_1 + 100) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 100) + 0x1c))();
  }
  if (*(int *)(iVar4 + 0x3a4) == 0) {
    FUN_004040a0();
    iVar5 = -1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130)
    ;
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0();
  }
  if (*(int *)(*(int *)(iVar4 + 0x3a4) + 0x80c) == 0) {
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = puStack_64;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)puStack_64 + uVar6) = 0;
    }
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_app_GetGame___m_FontMenu_IsNotNu_0069f5a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069f5d8,0x51);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0();
  }
  iVar4 = FUN_0040cf10();
  if (*(int *)(iVar4 + 0x80c) != 0) {
    piVar1 = (int *)(*(int *)(iVar4 + 0x80c) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  FUN_0053a990(0x3dcccccd,0x3dcccccd);
  FUN_005637b0();
  if (iStack_34 != 0) {
    cVar2 = *(char *)(iStack_34 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_34 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

