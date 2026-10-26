/*
 * FUN_005b1e20 at 005b1e20
 * undefined FUN_005b1e20(void)
 * Address ranges: 005b1e20-005b2006
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005b1f8e) */
/* WARNING: Removing unreachable block (ram,0x005b1f98) */
/* WARNING: Removing unreachable block (ram,0x005b1fa2) */
/* WARNING: Removing unreachable block (ram,0x005b1f9c) */

int FUN_005b1e20(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00646243;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_18 = *puVar8;
        puVar8 = puVar8 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190();
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_GO____0_0069db1c,s_D__Work_RCHorror_AdamSource_Adam_006a9274,
                                  0x27);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  pvVar3 = operator_new(0x34);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    if (param_1 != 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    iVar4 = FUN_005b2090();
  }
  local_4._0_1_ = 0;
  FUN_0040cc00(param_2 + 0x6c,0);
  if (*(int *)(iVar4 + 0x28) == 0) {
    iVar7 = -1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_result_>m_DaviName_length______0_006a9250,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a9274,0x2a);
    (*pcVar2)();
    local_4._0_1_ = 0;
  }
  *(int *)(iVar4 + 0x30) = param_2;
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
  }
  FUN_005045c0();
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar7 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar7, iVar7 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return iVar4;
}

