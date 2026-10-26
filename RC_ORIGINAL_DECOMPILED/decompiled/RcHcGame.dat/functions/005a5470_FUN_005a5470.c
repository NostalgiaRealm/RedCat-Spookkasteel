/*
 * FUN_005a5470 at 005a5470
 * undefined FUN_005a5470(void)
 * Address ranges: 005a5470-005a56dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005a5470(int param_1,int *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645550;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == (int *)0x0) {
    local_1c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Section____0_006a7fdc,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7d84,0x104,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  cVar1 = FUN_005b0ba0(param_2 + 1);
  if (cVar1 != '\0') {
    puVar3 = *(undefined1 **)(param_1 + 0x1c);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_File___s__006a7fd0,puVar3);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s__EmptyOrSpacesOnly_a_Section_>Ge_006a7fa4,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7d84,0x107,uVar4);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar5 = FUN_005a56e0(param_2 + 1);
  if (iVar5 != 0) {
    puVar3 = *(undefined1 **)(param_1 + 0x1c);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    puVar6 = (undefined1 *)param_2[2];
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_Section___s__already_exists_in_f_006a7f78,puVar6,puVar3);
    local_4 = 2;
    FUN_00444d70(*(undefined4 *)(param_1 + 0x40),1,uVar4);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return 0;
      }
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
    ExceptionList = pvStack_c;
    return 0;
  }
  if (*param_2 != 0) {
    auStack_2c[0] = param_2._0_1_;
    uVar7 = 0xffffffff;
    iStack_28 = 0;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 3;
    pcVar2 = (code *)FUN_005a07f0(s_a_Section_>m_File__0_006a7f60,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7d84,0x110,auStack_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
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
  }
  FUN_0053cff0(*(undefined4 *)(param_1 + 0x30),1,&param_2);
  *param_2 = param_1;
  ExceptionList = pvStack_c;
  return 1;
}

