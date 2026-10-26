/*
 * FUN_004bfd60 at 004bfd60
 * undefined FUN_004bfd60(void)
 * Address ranges: 004bfd60-004c0140
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004bfd60(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_162;
  undefined1 uStack_161;
  undefined1 auStack_160 [4];
  undefined4 *puStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 local_150 [4];
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140 [20];
  undefined1 local_12c [16];
  undefined1 auStack_11c [16];
  undefined4 auStack_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fddd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x326);
  local_4 = 0;
  local_150[0] = local_162;
  FUN_004040a0(0);
  local_4._0_1_ = 1;
  FUN_00519cb0();
  iVar5 = FUN_004337e0();
  if (iVar5 != 0) {
    iVar5 = FUN_004337e0();
    cVar3 = FUN_00592e60();
    if ((iVar5 != 0) != (bool)cVar3) {
      local_140[0] = local_162;
      FUN_004040a0(0);
      local_4._0_1_ = 2;
      FUN_004c97e0(local_140);
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
  }
  cVar3 = *(char *)(param_1 + 0x3e);
  do {
    if ((cVar3 != '\0') || (FUN_004bef70(1,local_150), *(char *)(param_1 + 0x3e) != '\0')) {
      uVar4 = FUN_00592e60();
      puVar9 = auStack_10c;
      for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      FUN_0060af1b(auStack_10c,0xff,&DAT_00690818,uVar4);
      FUN_005acdb0(auStack_10c);
      if (iStack_14c != 0) {
        cVar3 = *(char *)(iStack_14c + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0((char *)(iStack_14c + -1));
        }
        else {
          *(char *)(iStack_14c + -1) = cVar3 + -1;
        }
      }
      iStack_14c = 0;
      uStack_148 = 0;
      uStack_144 = 0;
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = pvStack_c;
      return;
    }
    FUN_004c0170(0,local_150);
    if (*(char *)(*(int *)(param_1 + 0x58) + 0x59) != '\0') {
      iVar5 = *(int *)(param_1 + 0x3a4);
      iVar1 = *(int *)(iVar5 + 0x98);
      if ((iVar1 < 0) || (7 < iVar1)) {
        local_140[0] = local_162;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4._0_1_ = 3;
        pcVar6 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f5,local_140);
        (*pcVar6)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(iVar5 + 0x8c) + iVar1 * 4) == 0) {
        FUN_00409810(&DAT_006b3f70,&local_162);
        local_4._0_1_ = 4;
        pcVar6 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_12c);
        (*pcVar6)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(*(int *)(iVar5 + 0x8c) + iVar1 * 4) + 0x24) != iVar1) {
        FUN_00409810(&DAT_006b3f70,&uStack_161);
        local_4._0_1_ = 5;
        pcVar6 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_11c);
        (*pcVar6)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      FUN_0040cc00(local_150,0,0xffffffff);
      FUN_0052af50();
      piVar2 = *(int **)(param_1 + 0x3a4);
      if (piVar2[0x1c] != 0) {
        (**(code **)(*piVar2 + 0x1c))(piVar2 + 0x1a);
        auStack_160[0] = uStack_161;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        uVar7 = ~uVar7 - 1;
        cVar3 = FUN_00401940(uVar7,1);
        if (cVar3 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          puVar11 = puStack_15c;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          FUN_00404190(uVar7);
        }
        local_4._0_1_ = 6;
        FUN_0040cc00(auStack_160,0,0xffffffff);
        local_4._0_1_ = 1;
        if (puStack_15c != (undefined4 *)0x0) {
          cVar3 = *(char *)((int)puStack_15c + -1);
          if ((cVar3 == '\0') || (cVar3 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_15c + -1));
          }
          else {
            *(char *)((int)puStack_15c + -1) = cVar3 + -1;
          }
        }
        puStack_15c = (undefined4 *)0x0;
        uStack_158 = 0;
        uStack_154 = 0;
      }
    }
    cVar3 = *(char *)(param_1 + 0x3e);
  } while( true );
}

