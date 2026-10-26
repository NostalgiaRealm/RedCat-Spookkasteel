/*
 * FUN_0056bcf0 at 0056bcf0
 * undefined FUN_0056bcf0(void)
 * Address ranges: 0056bcf0-0056bfd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056bcf0(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_45;
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640967;
  pvStack_c = ExceptionList;
  local_40 = 0;
  local_44 = 0;
  ExceptionList = &pvStack_c;
  FUN_005844b0();
  local_4 = 1;
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar4 = FUN_004bc480();
  }
  if (*(int *)(iVar4 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_45);
    local_4._0_1_ = 2;
    pcVar5 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_3c);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar3 = param_2;
  iVar4 = *(int *)(param_2 + 4);
  if ((((iVar4 == 0) || ((*(int *)(param_2 + 8) - iVar4) / 0x18 != 3)) || (*(int *)(iVar4 + 8) != 3)
      ) || ((*(int *)(iVar4 + 0x20) != 3 || (*(int *)(iVar4 + 0x38) != 2)))) {
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 3;
    pcVar5 = (code *)FUN_005a07f0(s__args_size____3______args_0__IsS_006a4368,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x188,local_3c);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  piVar6 = (int *)FUN_00453d20(&param_2);
  local_4._0_1_ = 4;
  if (local_44 != *piVar6) {
    if (local_44 != 0) {
      FUN_004098d0();
    }
    local_44 = *piVar6;
    FUN_005844b0();
  }
  local_4._0_1_ = 1;
  FUN_0057d310();
  if ((local_44 != 0) && (*(int *)(local_44 + 0x360) != 0)) {
    if (*(int *)(*(int *)(local_44 + 0x360) + 0x1f8) == 0) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4._0_1_ = 6;
      pcVar5 = (code *)FUN_005a07f0(s_m_Communicator____0_006934bc,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x167,local_3c);
      (*pcVar5)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    iVar4 = *(int *)(iVar3 + 4);
    if (*(int *)(iVar4 + 0x38) != 2) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4._0_1_ = 7;
      pcVar5 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                    0x42,local_3c);
      (*pcVar5)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x40);
    uVar7 = FUN_0045da10(auStack_1c);
    local_4._0_1_ = 8;
    uVar8 = FUN_0045da10(auStack_2c);
    local_4._0_1_ = 9;
    FUN_005120b0(uVar8,uVar7,uVar2);
    local_4._0_1_ = 8;
    FUN_004040a0(1);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    FUN_005117a0();
  }
  local_40 = 1;
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_44 != 0) &&
     (iVar4 = *(int *)(local_44 + 0x14) + -1, *(int *)(local_44 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

