/*
 * FUN_0049df30 at 0049df30
 * undefined FUN_0049df30(void)
 * Address ranges: 0049df30-0049e27c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0049e025) */
/* WARNING: Removing unreachable block (ram,0x0049e044) */
/* WARNING: Removing unreachable block (ram,0x0049e046) */
/* WARNING: Removing unreachable block (ram,0x0049e059) */
/* WARNING: Removing unreachable block (ram,0x0049e069) */
/* WARNING: Removing unreachable block (ram,0x0049e06b) */
/* WARNING: Removing unreachable block (ram,0x0049e070) */
/* WARNING: Removing unreachable block (ram,0x0049e072) */
/* WARNING: Removing unreachable block (ram,0x0049e07e) */

void __thiscall FUN_0049df30(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char local_4c [4];
  undefined4 *local_48;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cb30;
  pvStack_c = ExceptionList;
  if ((char)param_2 == '\0') {
    ExceptionList = &pvStack_c;
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xfffffff7;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x14c) | 8;
    ExceptionList = &pvStack_c;
    *(uint *)(param_1 + 0x14c) = uVar8;
    if (((byte)(uVar8 >> 3) & 1) != 1) {
      local_4c[0] = (char)param_2;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar2 = FUN_00401940(uVar8,1);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *local_48 = *puVar6;
          puVar6 = puVar6 + 1;
          local_48 = local_48 + 1;
        }
        for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)local_48 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          local_48 = (undefined4 *)((int)local_48 + 1);
        }
        FUN_00404190(uVar8);
      }
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_GetAllowActorCollision______true_00694f10,
                                    s_D__Work_RCHorror_AdamSource_Adam_00694c70,1099,local_4c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  if (*(char *)(param_1 + 0x118) != '\0') {
    if (*(int *)(param_1 + 0x114) == 0) {
      local_3c[0] = (char)param_2;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,
                                    s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x18d,local_3c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x114);
    piVar4 = (int *)FUN_004042e0(&param_2);
    local_4 = 3;
    if (*piVar4 == 0) {
      auStack_2c[0] = (char)param_2;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 4;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_2c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    iVar7 = *piVar4;
    if (*(int *)(iVar7 + 0x5c) == 0) {
      auStack_1c[0] = (char)param_2;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,auStack_1c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    FUN_005b9b00(*(undefined4 *)(iVar7 + 0x5c),uVar1,*(undefined4 *)(param_1 + 0x14c));
    local_4 = 0xffffffff;
    if ((param_2 != 0) &&
       (iVar7 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

