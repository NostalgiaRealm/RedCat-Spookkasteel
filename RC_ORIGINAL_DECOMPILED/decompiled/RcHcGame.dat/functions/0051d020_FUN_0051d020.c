/*
 * FUN_0051d020 at 0051d020
 * undefined FUN_0051d020(void)
 * Address ranges: 0051d020-0051d2f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0051d020(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float10 fVar10;
  float10 fVar11;
  undefined1 local_3c [4];
  undefined4 *puStack_38;
  uint uStack_34;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638a78;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_3c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar2 = *(int *)(iVar2 + 0x3a4);
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    puVar7 = (undefined4 *)&DAT_006b3f70;
    puVar8 = puStack_38;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)puStack_38 + uVar5) = 0;
    uStack_34 = uVar5;
  }
  local_4 = 1;
  uVar4 = FUN_004e5980(auStack_2c,0x2d,local_3c,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0040cc00(uVar4,0,0xffffffff);
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_28 + -1));
    }
    else {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
    }
  }
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_4 = 0xffffffff;
  if (puStack_38 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)puStack_38 + -1));
    }
    else {
      *(char *)((int)puStack_38 + -1) = cVar1 + -1;
    }
  }
  if (*(int *)(iVar2 + 0x814) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  fVar10 = (float10)FUN_004b21b0(param_1 + 100);
  if (*(int *)(iVar2 + 0x814) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  fVar11 = (float10)FUN_004b1fc0(param_1 + 100);
  *(float *)(param_1 + 0x5c) = (1.0 - (float)fVar10) * 0.5;
  *(float *)(param_1 + 0x60) = (float)(((float10)1.0 - fVar11) * (float10)0.5);
  ExceptionList = pvStack_c;
  return;
}

