/*
 * FUN_004e0f70 at 004e0f70
 * undefined FUN_004e0f70(void)
 * Address ranges: 004e0f70-004e110f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004e0f70(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006326c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f274;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  if (param_1[0xbd] != 0) {
    if (param_1[0xbd] == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar3)();
      local_4._0_1_ = 4;
      FUN_004040a0(1);
    }
    FUN_00553130();
    iVar2 = param_1[0xbd];
    local_4._0_1_ = 6;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x14) + -1;
      *(int *)(iVar2 + 0x14) = iVar4;
      if (iVar4 == 0) {
        FUN_005abfc0(0);
      }
      param_1[0xbd] = 0;
    }
  }
  local_4._0_1_ = 3;
  FUN_004a05f0();
  iVar2 = param_1[0xbd];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0xbd] = 0;
  }
  iVar2 = param_1[0xaf];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  iVar2 = param_1[0xaa];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  local_4 = 0xffffffff;
  FUN_0049b720();
  ExceptionList = pvStack_c;
  return;
}

