/*
 * FUN_004bc790 at 004bc790
 * undefined FUN_004bc790(void)
 * Address ranges: 004bc790-004bcb69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004bc790(int *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  undefined1 uStack_bd;
  undefined1 auStack_bc [4];
  undefined4 *puStack_b8;
  float fStack_ac;
  undefined1 auStack_a8 [4];
  char *pcStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062f8b2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 4))();
  param_1[0xe9] = iVar2;
  if (iVar2 == 0) {
    auStack_bc[0] = uStack_bd;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    uStack_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game__0_006976e4,s_D__Work_RCHorror_AdamSource_Adam_006975f0,
                                  0xb8,auStack_bc);
    (*pcVar3)();
    uStack_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((float)param_1[0x103] == 0.0) {
    fVar12 = (float10)FUN_005ad390(param_1 + 0xf0,&uStack_bd);
    param_1[0x103] = (int)(float)fVar12;
    fStack_ac = (float)fVar12;
  }
  else {
    fStack_ac = (float)param_1[0x103];
  }
  FUN_00565ae0(fStack_ac);
  iVar2 = (**(code **)(*param_1 + 8))();
  param_1[0xea] = iVar2;
  if (iVar2 == 0) {
    auStack_bc[0] = uStack_bd;
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
      puVar9 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puStack_b8 = *puVar9;
        puVar9 = puVar9 + 1;
        puStack_b8 = puStack_b8 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puStack_b8 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puStack_b8 = (undefined4 *)((int)puStack_b8 + 1);
      }
      FUN_00404190(uVar7);
    }
    uStack_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,
                                  s_D__Work_RCHorror_AdamSource_Adam_006975f0,0xbe,auStack_bc);
    (*pcVar3)();
    uStack_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (param_1[0xea] == 0) {
    auStack_bc[0] = uStack_bd;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    uStack_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,s___AdamSource_AdamApplication_h_0068e58c,
                                  0x136,auStack_bc);
    (*pcVar3)();
    uStack_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_0053d320();
  FUN_00592cb0();
  FUN_005afda0(&LAB_004c4110);
  FUN_00515b70();
  iVar2 = FUN_004337e0();
  if (iVar2 == 0) {
    auStack_a8[0] = uStack_bd;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = s_General_00690810;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      pcVar10 = s_General_00690810;
      pcVar11 = pcStack_a4;
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
    uStack_4 = 3;
    auStack_98[0] = uStack_bd;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = s_Console_00697634;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Console_00697634,~uVar7 - 1);
    uStack_4._0_1_ = 4;
    uVar4 = FUN_0043b0a0(auStack_88);
    uStack_4 = CONCAT31(uStack_4._1_3_,5);
    iVar5 = FUN_005ac9d0(auStack_98,auStack_a8,0,uVar4,0);
    iVar2 = *(int *)(iVar5 + 100);
    if (iVar2 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar2 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 100) = iVar2;
    }
    *(bool *)(param_1 + 0xe7) = iVar2 != 0;
    FUN_005acca0();
    uStack_4._0_1_ = 4;
    FUN_004040a0(1);
    uStack_4 = CONCAT31(uStack_4._1_3_,3);
    FUN_004040a0(1);
    uStack_4 = 0xffffffff;
    if (pcStack_a4 != (char *)0x0) {
      cVar1 = pcStack_a4[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(pcStack_a4 + -1);
      }
      else {
        pcStack_a4[-1] = cVar1 + -1;
      }
    }
    pcStack_a4 = (char *)0x0;
    uStack_a0 = 0;
    uStack_9c = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe7) = 1;
  }
  (**(code **)(*param_1 + 0xc))();
  ExceptionList = pvStack_c;
  return;
}

