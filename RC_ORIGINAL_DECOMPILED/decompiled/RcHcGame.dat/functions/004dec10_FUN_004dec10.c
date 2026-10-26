/*
 * FUN_004dec10 at 004dec10
 * undefined FUN_004dec10(void)
 * Address ranges: 004dec10-004def39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004dec10(int param_1,int param_2,char *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcStack_38;
  char local_21;
  undefined1 *local_20;
  char local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00632358;
  pvStack_c = ExceptionList;
  local_4 = 0;
  pcStack_38 = (char *)0x4dec39;
  ExceptionList = &pvStack_c;
  FUN_00518630();
  pcStack_38 = (char *)0x4dec40;
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    puVar9 = *(undefined1 **)(param_1 + 0x60);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_0064a3b4;
    }
    pcStack_38 = (char *)0x4dec59;
    pcStack_38 = (char *)FUN_005a2cf0();
    uVar4 = FUN_005ae390(local_1c,s_sprite__s_uses_bitmap__s_0069a05c,puVar9);
    local_4._0_1_ = 1;
    FUN_005aff00(uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_38 = (char *)0x1;
    FUN_004040a0();
  }
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_38 = (char *)0x4dec96;
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xd8) == 0) {
    pcStack_38 = &local_21;
    FUN_00409810(&DAT_006b3f70);
    pcStack_38 = local_1c;
    local_4._0_1_ = 2;
    pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar5)();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_38 = (char *)0x1;
    FUN_004040a0();
  }
  pcStack_38 = param_3;
  piVar6 = (int *)FUN_0050d730(&local_20);
  iVar3 = *(int *)(param_1 + 0x13c);
  piVar1 = (int *)(param_1 + 0x13c);
  local_4._0_1_ = 3;
  if (iVar3 != *piVar6) {
    if ((iVar3 != 0) &&
       (iVar7 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar7, iVar7 == 0)) {
      pcStack_38 = (char *)0x0;
      FUN_005abfc0();
    }
    *piVar1 = *piVar6;
    pcStack_38 = (char *)0x4ded31;
    FUN_005844b0();
  }
  local_4._0_1_ = 0;
  if (local_20 != (undefined1 *)0x0) {
    pcStack_38 = (char *)0x4ded42;
    FUN_004098d0();
  }
  if (*piVar1 == 0) {
    pcStack_38 = (char *)0x0;
    local_1c[0] = (char)param_3;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    pcStack_38 = (char *)(~uVar8 - 1);
    FUN_004040f0(&DAT_006b3f70);
    pcStack_38 = local_1c;
    local_4._0_1_ = 4;
    pcVar5 = (code *)FUN_005a07f0(s_m_Bitmap_IsNotNull____0069a044,
                                  s_D__Work_RCHorror_AdamSource_Adam_00699ff0,0xb1);
    (*pcVar5)();
    local_4._0_1_ = 0;
    pcStack_38 = (char *)0x1;
    FUN_004040a0();
  }
  local_20 = (undefined1 *)&pcStack_38;
  *(char **)(param_1 + 0x138) = param_3;
  pcStack_38 = (char *)*piVar1;
  if (pcStack_38 != (char *)0x0) {
    *(int *)(pcStack_38 + 0x14) = *(int *)(pcStack_38 + 0x14) + 1;
  }
  local_4._0_1_ = 0;
  FUN_00421430();
  cVar2 = FUN_004fbca0();
  if (cVar2 == '\0') {
    pcStack_38 = (char *)*piVar1;
    if (pcStack_38 != (char *)0x0) {
      *(int *)(pcStack_38 + 0x14) = *(int *)(pcStack_38 + 0x14) + 1;
    }
    local_4._0_1_ = 0;
    local_20 = (undefined1 *)&pcStack_38;
    FUN_00421430();
    cVar2 = FUN_004fb310();
    if (cVar2 == '\0') {
      pcStack_38 = (char *)0x0;
      local_1c[0] = (char)param_3;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      pcStack_38 = (char *)(~uVar8 - 1);
      FUN_004040f0(&DAT_006b3f70);
      pcStack_38 = local_1c;
      local_4._0_1_ = 7;
      pcVar5 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00699ff0,
                                    0xba);
      (*pcVar5)();
      local_4._0_1_ = 0;
      pcStack_38 = (char *)0x1;
      FUN_004040a0();
    }
    pcStack_38 = (char *)0x4dee71;
    iVar7 = FUN_00518630();
    iVar3 = *(int *)(iVar7 + 100);
    if (iVar3 == -0x80000000) {
      pcStack_38 = *(char **)(iVar7 + 0x18);
      if (pcStack_38 == (char *)0x0) {
        pcStack_38 = "";
      }
      iVar3 = FUN_0060af10();
      *(int *)(iVar7 + 100) = iVar3;
    }
    if (iVar3 != 0) {
      puVar9 = *(undefined1 **)(param_1 + 0x60);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_0064a3b4;
      }
      pcStack_38 = (char *)0x4deeae;
      pcStack_38 = (char *)FUN_005a2cf0();
      uVar4 = FUN_005ae390(local_1c,s_sprite__s_adds_bitmap__s_to_worl_0069a020,puVar9);
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_005aff00(uVar4);
      if (iStack_18 != 0) {
        pcStack_38 = (char *)(iStack_18 + -1);
        cVar2 = *(char *)(iStack_18 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *pcStack_38 = cVar2 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    pcStack_38 = (char *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

