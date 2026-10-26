/*
 * FUN_004e48a0 at 004e48a0
 * undefined FUN_004e48a0(void)
 * Address ranges: 004e48a0-004e4bb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ec04 slot 2 for .?AVCAdamSpark@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ec04 slot 2 for
   .?AVCAdamSpark@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004e48a0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 *puStack_4c;
  undefined1 local_35;
  int local_34;
  undefined1 *puStack_30;
  undefined1 auStack_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632b08;
  pvStack_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x168);
  ExceptionList = &pvStack_c;
  if ((*(int *)(param_1 + 0x168) == 0) &&
     (ExceptionList = &pvStack_c, *(int *)(param_1 + 0x174) != 0)) {
    iVar4 = DAT_006c8de0;
    ExceptionList = &pvStack_c;
    if (DAT_006c8de0 == 0) {
      puStack_4c = (undefined1 *)0x4e48ef;
      ExceptionList = &pvStack_c;
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      puStack_4c = &local_35;
      FUN_00409810(&DAT_006b3f70);
      puStack_4c = local_1c;
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar5)();
      local_4 = 0xffffffff;
      puStack_4c = (undefined1 *)0x1;
      FUN_004040a0();
    }
    puStack_4c = (undefined1 *)(param_1 + 0x16c);
    piVar6 = (int *)FUN_0050d980(&local_34);
    iVar4 = *piVar1;
    local_4 = 1;
    if (iVar4 != *piVar6) {
      if ((iVar4 != 0) &&
         (iVar7 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar7, iVar7 == 0)) {
        puStack_4c = (undefined1 *)0x0;
        FUN_005abfc0();
      }
      *piVar1 = *piVar6;
      puStack_4c = (undefined1 *)0x4e4991;
      FUN_005844b0();
    }
    local_4 = 0xffffffff;
    if (local_34 != 0) {
      puStack_4c = (undefined1 *)0x4e49a5;
      FUN_004098d0();
    }
    puStack_4c = (undefined1 *)*piVar1;
    if (puStack_4c == (undefined1 *)0x0) {
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      puStack_4c = (undefined1 *)(~uVar8 - 1);
      FUN_004040f0(&DAT_006b3f70);
    }
    else {
      puStack_30 = (undefined1 *)&puStack_4c;
      if (puStack_4c != (undefined1 *)0x0) {
        *(int *)(puStack_4c + 0x14) = *(int *)(puStack_4c + 0x14) + 1;
      }
      local_4 = 2;
      FUN_004042e0(&local_34);
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_00421430();
      cVar3 = FUN_004fbca0();
      local_4 = 0xffffffff;
      if (local_34 != 0) {
        puStack_4c = (undefined1 *)0x4e4a53;
        FUN_004098d0();
      }
      if (cVar3 == '\0') {
        puStack_4c = (undefined1 *)*piVar1;
        puStack_30 = (undefined1 *)&puStack_4c;
        if (puStack_4c != (undefined1 *)0x0) {
          *(int *)(puStack_4c + 0x14) = *(int *)(puStack_4c + 0x14) + 1;
        }
        local_4 = 5;
        FUN_004042e0(&local_34);
        local_4 = CONCAT31(local_4._1_3_,7);
        FUN_00421430();
        FUN_004fb310();
        local_4 = 0xffffffff;
        if ((local_34 != 0) &&
           (iVar4 = *(int *)(local_34 + 0x14) + -1, *(int *)(local_34 + 0x14) = iVar4, iVar4 == 0))
        {
          puStack_4c = (undefined1 *)0x0;
          FUN_005abfc0();
        }
      }
    }
  }
  local_34 = *(int *)(param_1 + 0xf8);
  bVar2 = true;
  if (local_34 != -1) {
    iVar4 = *(int *)(param_1 + 0xfc);
    if (iVar4 == -1) {
      *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
      *(int *)(param_1 + 0xfc) = local_34 + param_2;
    }
    else if (iVar4 < param_2) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      bVar2 = false;
    }
    else if (local_34 < 1) {
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    else {
      param_2 = iVar4 - param_2;
      *(float *)(param_1 + 0x100) = (float)param_2 / (float)local_34;
    }
  }
  *(bool *)(param_1 + 0x104) = bVar2;
  if (bVar2) {
    if (param_3 == -1) {
      puStack_4c = (undefined1 *)0x0;
      auStack_2c[0] = (undefined1)param_2;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      puStack_4c = (undefined1 *)(~uVar8 - 1);
      FUN_004040f0(&DAT_006b3f70);
      puStack_4c = auStack_2c;
      local_4 = 8;
      pcVar5 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a);
      (*pcVar5)();
      local_4 = 0xffffffff;
      puStack_4c = (undefined1 *)0x1;
      FUN_004040a0();
    }
    puStack_4c = (undefined1 *)((float)param_3 * 0.001);
    FUN_004e4bc0();
    *(undefined1 *)(param_1 + 0x160) = 1;
  }
  else {
    puStack_4c = (undefined1 *)0x4e4b11;
    FUN_00502220();
  }
  ExceptionList = pvStack_c;
  return;
}

