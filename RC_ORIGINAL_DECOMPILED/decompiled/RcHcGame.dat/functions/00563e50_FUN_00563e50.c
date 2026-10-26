/*
 * FUN_00563e50 at 00563e50
 * undefined FUN_00563e50(void)
 * Address ranges: 00563e50-0056408a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_00563e50(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int local_28 [2];
  void *local_20;
  undefined1 local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063fe52;
  pvStack_c = ExceptionList;
  local_28[1] = 0;
  local_28[0] = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  local_20 = operator_new(0x21c);
  local_4._0_1_ = 2;
  if (local_20 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00555440(param_3);
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
  }
  local_4._0_1_ = 3;
  if (local_28[0] != iVar3) {
    if ((local_28[0] != 0) &&
       (iVar7 = *(int *)(local_28[0] + 0x14) + -1, *(int *)(local_28[0] + 0x14) = iVar7, iVar7 == 0)
       ) {
      FUN_005abfc0(0);
    }
    local_28[0] = iVar3;
    FUN_005844b0();
  }
  local_4._0_1_ = 1;
  if (iVar3 != 0) {
    FUN_004098d0();
  }
  FUN_004fdb90(*(undefined4 *)(param_1 + 0x1c),local_28);
  uVar1 = *(undefined1 *)(param_1 + 0x121);
  if (local_28[0] == 0) {
    local_1c[0] = uVar1;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar4)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  cVar2 = FUN_00555a20(param_4,param_5,uVar1);
  if (cVar2 == '\0') {
    local_1c[0] = uVar1;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = s_CAdamEngine__CreateNewCamera___f_006a3770;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar8 = s_CAdamEngine__CreateNewCamera___f_006a3770;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcStack_18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcStack_18 = pcStack_18 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcStack_18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcStack_18 = pcStack_18 + 1;
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 5;
    pcVar4 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_006a26f8,
                                  0x7d3,local_1c);
    (*pcVar4)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  *param_2 = local_28[0];
  if (local_28[0] != 0) {
    *(int *)(local_28[0] + 0x14) = *(int *)(local_28[0] + 0x14) + 1;
  }
  local_28[1] = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_28[0] != 0) &&
     (iVar3 = *(int *)(local_28[0] + 0x14) + -1, *(int *)(local_28[0] + 0x14) = iVar3, iVar3 == 0))
  {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_2;
}

