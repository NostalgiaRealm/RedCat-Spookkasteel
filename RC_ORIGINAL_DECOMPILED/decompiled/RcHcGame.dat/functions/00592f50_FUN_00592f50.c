/*
 * FUN_00592f50 at 00592f50
 * undefined FUN_00592f50(void)
 * Address ranges: 00592f50-005932aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00592f50(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  undefined *local_4c;
  int local_48;
  int local_44;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_00643970;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x2ec);
  local_4c = &DAT_006b3f70;
  iVar3 = iVar1 + -1;
  iVar8 = DAT_006a669c;
  if (DAT_006a669c == -1) {
    iVar8 = iVar1 + -0xf;
  }
  if (iVar1 <= iVar8) {
    iVar8 = iVar3;
  }
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  local_48 = 0;
  ExceptionList = &pvStack_c;
  if (iVar8 <= iVar3) {
    puVar11 = (undefined4 *)(param_1 + 0x14 + iVar8 * 4);
    local_44 = (iVar3 - iVar8) + 1;
    ExceptionList = &pvStack_c;
    do {
      pcVar12 = (char *)*puVar11;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar13 = pcVar12;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar2 = FUN_00401940(uVar9,1);
      if (cVar2 != '\0') {
        pcVar13 = local_38;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar13 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_00404190(uVar9);
      }
      local_4 = 0;
      iVar3 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar3 = FUN_0055b280();
      }
      iVar3 = *(int *)(iVar3 + 0x108) * local_48;
      local_48 = local_48 + 1;
      if (DAT_006c8de0 == 0) {
        FUN_0055b280();
      }
      FUN_005600c0(5,iVar3,local_3c,1);
      local_4 = -1;
      FUN_004040a0(1);
      puVar11 = puVar11 + 1;
      local_44 = local_44 + -1;
    } while (local_44 != 0);
  }
  cVar2 = FUN_00592e60();
  if (cVar2 != '\0') {
    iVar3 = __ftol();
    DVar4 = timeGetTime();
    local_44 = DAT_006a66a0;
    if ((DVar4 == 0xffffffff) || (DAT_006a66a0 == -1)) {
      local_44 = 0;
    }
    else {
      if ((int)DVar4 < DAT_006a66a0) {
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 1;
        pcVar5 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,local_3c);
        (*pcVar5)();
        local_4 = -1;
        FUN_004040a0(1);
      }
      local_44 = DVar4 - local_44;
      if (local_44 == -1) {
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 2;
        pcVar5 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_2c);
        (*pcVar5)();
        local_4 = local_44;
        FUN_004040a0(1);
      }
    }
    if ((float)iVar3 <= (float)local_44 * 0.001) {
      local_4c = &DAT_006a66e8;
      bVar14 = *(char *)(param_1 + 0x308) == '\0';
      *(bool *)(param_1 + 0x308) = bVar14;
      if (!bVar14) {
        local_4c = &DAT_006b3f70;
      }
    }
  }
  puVar6 = *(undefined1 **)(param_1 + 0x2fc);
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_0064a3b4;
  }
  uVar7 = FUN_005ae390(local_1c,s_>>__s_s_006a66e0,puVar6,local_4c);
  local_4 = 3;
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar3 = FUN_0055b280();
  }
  iVar3 = *(int *)(iVar3 + 0x108);
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  FUN_005600c0(5,iVar3 * 0xf,uVar7,1);
  if (iStack_18 != 0) {
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(iStack_18 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}

