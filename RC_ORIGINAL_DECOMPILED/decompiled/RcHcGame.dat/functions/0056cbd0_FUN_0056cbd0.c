/*
 * FUN_0056cbd0 at 0056cbd0
 * undefined FUN_0056cbd0(void)
 * Address ranges: 0056cbd0-0056ce98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056cbd0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 auStack_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640b08;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_2 + 4);
  if (((((iVar1 == 0) || ((*(int *)(param_2 + 8) - iVar1) / 0x18 != 4)) ||
       (*(int *)(iVar1 + 8) != 3)) ||
      ((*(int *)(iVar1 + 0x20) != 2 || (*(int *)(iVar1 + 0x38) != 2)))) ||
     (ExceptionList = &pvStack_c, *(int *)(iVar1 + 0x50) != 1)) {
    local_3c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar5 = FUN_00401940(uVar7,1);
    if (cVar5 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_38 = *puVar9;
        puVar9 = puVar9 + 1;
        local_38 = local_38 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)local_38 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        local_38 = (undefined4 *)((int)local_38 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 0;
    pcVar6 = (code *)FUN_005a07f0(s__args_size______4______args_0__I_006a4494,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x20c,local_3c);
    (*pcVar6)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_0045da10(local_1c);
  iVar1 = *(int *)(param_2 + 4);
  local_4 = 1;
  if (*(int *)(iVar1 + 0x20) != 2) {
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 2;
    pcVar6 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                  0x42,local_3c);
    (*pcVar6)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar2 = *(int *)(param_2 + 4);
  bVar3 = 0 < *(int *)(iVar1 + 0x28);
  param_2 = (uint)bVar3;
  if (*(int *)(iVar2 + 0x38) != 2) {
    local_3c[0] = bVar3;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 3;
    pcVar6 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                  0x42,local_3c);
    (*pcVar6)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar1 = *(int *)(iVar4 + 4);
  uVar12 = *(undefined4 *)(iVar2 + 0x40);
  if (*(int *)(iVar1 + 0x50) != 1) {
    auStack_2c[0] = bVar3;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 4;
    pcVar6 = (code *)FUN_005a07f0(s_IsDbl___00695008,s___Libs_daviscript_Include_Davi_S_00692284,
                                  0x41,auStack_2c);
    (*pcVar6)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  fVar13 = (float)*(double *)(iVar1 + 0x58);
  puVar11 = local_1c;
  FUN_00514140(puVar11,param_2,uVar12,fVar13);
  FUN_00513460(puVar11,param_2,uVar12,fVar13);
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  if (iStack_18 != 0) {
    cVar5 = *(char *)(iStack_18 + -1);
    if ((cVar5 == '\0') || (cVar5 == -1)) {
      FUN_005fe5f0(iStack_18 + -1);
    }
    else {
      *(char *)(iStack_18 + -1) = cVar5 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

