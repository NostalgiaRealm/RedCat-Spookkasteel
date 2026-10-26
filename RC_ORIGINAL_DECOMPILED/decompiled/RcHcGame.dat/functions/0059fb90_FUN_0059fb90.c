/*
 * FUN_0059fb90 at 0059fb90
 * undefined FUN_0059fb90(void)
 * Address ranges: 0059fb90-0059fe82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_0059fb90(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  int local_e8;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  char local_bc [32];
  undefined1 auStack_9c [144];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644c81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0();
  local_4 = 0;
  uVar2 = FUN_0059f300();
  local_4._0_1_ = 1;
  FUN_0040cc00(uVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0();
  iVar3 = FUN_0060d46b();
  if (iVar3 == 0) {
    local_4 = 0xffffffff;
    uVar4 = FUN_004040a0();
    ExceptionList = local_c;
    return uVar4 & 0xffffff00;
  }
  FUN_00457240(param_2);
  local_c8 = FUN_0041e8e0();
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (iVar3 == 0) {
    local_cc = 0;
  }
  else {
    local_cc = *(int *)(*(int *)(param_1 + 0x18) + 8) - iVar3 >> 2;
  }
  FUN_00457240(param_2);
  local_c4 = FUN_0041e8e0();
  local_c0 = FUN_0059ff00();
  uVar4 = 0xffffffff;
  pcVar10 = s_Amsterdoom_WPS_file_version_7_006a76ec;
  do {
    pcVar11 = pcVar10;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar10 = pcVar11 + -uVar4;
  pcVar11 = local_bc;
  for (uVar9 = uVar4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  iVar3 = FUN_0060d47e(&local_cc,0x30);
  if (iVar3 == 1) {
    iVar3 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x18);
      if (*(int *)(iVar6 + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 2;
      }
      if (iVar5 <= iVar3) {
        FUN_0060d30d();
        uVar8 = extraout_var;
        if (local_e8 != 0) {
          cVar1 = *(char *)(local_e8 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0();
            uVar8 = extraout_var_00;
          }
          else {
            *(char *)(local_e8 + -1) = cVar1 + -1;
          }
        }
        ExceptionList = local_c;
        return CONCAT31(uVar8,1);
      }
      if (iVar3 < 0) {
LAB_0059fd66:
        FUN_004040a0();
        iVar6 = -1;
        pcVar10 = &DAT_006b3f70;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0();
        local_4._0_1_ = 2;
        pcVar7 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458);
        (*pcVar7)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0();
      }
      else {
        if (*(int *)(iVar6 + 4) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 2;
        }
        if (iVar6 <= iVar3) goto LAB_0059fd66;
      }
      FUN_00599600();
      iVar6 = FUN_0060d47e(auStack_9c,0x90);
      if (iVar6 != 1) goto LAB_0059fe02;
      iVar3 = iVar3 + 1;
    } while( true );
  }
  uVar4 = FUN_0060d30d();
  if (local_e8 == 0) goto LAB_0059fe31;
  cVar1 = *(char *)(local_e8 + -1);
  if ((cVar1 != '\0') && (cVar1 != -1)) {
    *(char *)(local_e8 + -1) = cVar1 + -1;
    ExceptionList = local_c;
    return uVar4 & 0xffffff00;
  }
LAB_0059fe27:
  uVar4 = FUN_005fe5f0();
LAB_0059fe31:
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
LAB_0059fe02:
  uVar4 = FUN_0060d30d();
  if (local_e8 == 0) goto LAB_0059fe31;
  cVar1 = *(char *)(local_e8 + -1);
  if ((cVar1 != '\0') && (cVar1 != -1)) {
    *(char *)(local_e8 + -1) = cVar1 + -1;
    ExceptionList = local_c;
    return uVar4 & 0xffffff00;
  }
  goto LAB_0059fe27;
}

