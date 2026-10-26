/*
 * FUN_00431260 at 00431260
 * undefined FUN_00431260(void)
 * Address ranges: 00431260-0043177e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00431260(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int iStack_48;
  int iStack_44;
  undefined4 *local_40;
  char *local_38;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062392a;
  pvStack_c = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    FUN_004bc480();
  }
  iVar4 = FUN_004337e0();
  if (iVar4 == 0) {
    local_40 = operator_new(500);
    local_4 = 0;
    if (local_40 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      FUN_004040a0();
      iVar4 = -1;
      pcVar11 = s_weapon_glow_0069039c;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(s_weapon_glow_0069039c);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_005033a0(local_1c);
      bVar2 = true;
      bVar1 = true;
      local_4 = 2;
      iVar4 = FUN_004e22a0();
    }
    piVar10 = (int *)(param_1 + 0x390);
    local_4 = 3;
    *piVar10 = iVar4;
    if (bVar1) {
      FUN_004040a0();
    }
    local_4 = 0xffffffff;
    if (bVar2) {
      FUN_004040a0();
    }
    if (*piVar10 != 0) {
      FUN_004e3140();
      FUN_004e3160();
      FUN_004e2d60();
      FUN_004e3090();
      FUN_004e30d0();
      FUN_004e3120();
      FUN_004e3100();
      FUN_00502350();
      FUN_00509a90(*piVar10);
    }
  }
  bVar2 = false;
  bVar1 = false;
  puVar5 = operator_new(0x198);
  local_4 = 5;
  local_40 = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar11 = s_glowsprite_00690390;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar3 = FUN_00401940(uVar8);
    if (cVar3 != '\0') {
      pcVar11 = s_glowsprite_00690390;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)local_38 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        local_38 = local_38 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_38 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        local_38 = local_38 + 1;
      }
      FUN_00404190();
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    uVar6 = FUN_005033a0(local_1c);
    bVar2 = true;
    bVar1 = true;
    local_4 = 7;
    FUN_004370c0(uVar6);
    local_4 = 8;
    puVar5[0x50] = 0;
    puVar5[0x51] = 0;
    *(undefined1 *)(puVar5 + 0x52) = 1;
    *(undefined1 *)((int)puVar5 + 0x149) = 0;
    *(undefined1 *)((int)puVar5 + 0x14a) = 0;
    *(undefined1 *)((int)puVar5 + 0x14b) = 0;
    *(undefined1 *)(puVar5 + 0x53) = 0;
    FUN_004041b0();
    puVar5[0x5f] = 0x42c80000;
    puVar5[0x60] = 0x42c80000;
    puVar5[0x61] = 0x42c80000;
    puVar5[0x62] = 0x42c80000;
    puVar5[0x5e] = 0;
    *puVar5 = &PTR_FUN_0064c4a8;
    puVar5[0x54] = 0;
    puVar5[0x55] = 0;
    puVar5[0x56] = 0;
    puVar5[99] = 0;
    puVar5[100] = 0;
    puVar5[0x65] = 0;
    puVar5[0x57] = 0;
    puVar5[0x58] = 0;
    puVar5[0x59] = 0;
  }
  local_4 = 9;
  piVar10 = (int *)(param_1 + 0x330);
  *piVar10 = (int)puVar5;
  if (bVar1) {
    FUN_004040a0();
  }
  local_4 = 0xffffffff;
  if (bVar2) {
    FUN_004040a0();
  }
  FUN_00431050();
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(int *)(iVar4 + 0xd8) == 0) {
    FUN_004040a0();
    iVar4 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4 = 0xb;
    pcVar7 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar7)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  FUN_0050d730(&iStack_48);
  local_4 = 0xc;
  FUN_00431050();
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(int *)(iVar4 + 0xd8) == 0) {
    FUN_004040a0();
    iVar4 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 0xd;
    pcVar7 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar7)();
    local_4 = CONCAT31(local_4._1_3_,0xc);
    FUN_004040a0();
  }
  FUN_0050d730(&iStack_44);
  local_4._0_1_ = 0xe;
  if (*piVar10 != 0) {
    FUN_004041b0();
    FUN_00502350();
    local_40 = (undefined4 *)&stack0xffffff98;
    *(undefined1 *)(*piVar10 + 0xa8) = 0;
    *(undefined4 *)(*piVar10 + 0x130) = 0x3c23d70a;
    if (iStack_48 != 0) {
      *(int *)(iStack_48 + 0x14) = *(int *)(iStack_48 + 0x14) + 1;
    }
    FUN_00437280();
    FUN_00509a90(*piVar10);
  }
  local_4 = CONCAT31(local_4._1_3_,0xc);
  if (iStack_44 != 0) {
    iVar4 = *(int *)(iStack_44 + 0x14) + -1;
    *(int *)(iStack_44 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0();
    }
    iStack_44 = 0;
  }
  local_4 = 0xffffffff;
  if ((iStack_48 != 0) &&
     (iVar4 = *(int *)(iStack_48 + 0x14) + -1, *(int *)(iStack_48 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

