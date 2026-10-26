/*
 * FUN_004e1d00 at 004e1d00
 * undefined FUN_004e1d00(void)
 * Address ranges: 004e1d00-004e1ed5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e1d00(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int local_34 [2];
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632798;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(local_34);
  local_4 = 0;
  if (*piVar3 == 0) {
    local_1c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_18 = *puVar8;
        puVar8 = puVar8 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  iVar1 = *(int *)(*piVar3 + 0x360);
  if (local_34[0] != 0) {
    iVar7 = *(int *)(local_34[0] + 0x14) + -1;
    *(int *)(local_34[0] + 0x14) = iVar7;
    if (iVar7 == 0) {
      FUN_005abfc0(0);
    }
    local_34[0] = 0;
  }
  if (param_1 == iVar1) {
    cVar2 = FUN_004e1ee0();
    if ((cVar2 != '\0') && (iVar1 != 0)) {
      if (*(int *)(iVar1 + 500) == 0) {
        auStack_2c[0] = (undefined1)param_1;
        uVar5 = 0xffffffff;
        iStack_28 = 0;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        uStack_24 = 0;
        uStack_20 = 0;
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4 = 2;
        pcVar4 = (code *)FUN_005a07f0(s_m_HUD____0_00690410,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x161,auStack_2c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        if (iStack_28 != 0) {
          cVar2 = *(char *)(iStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)(iStack_28 + -1));
          }
          else {
            *(char *)(iStack_28 + -1) = cVar2 + -1;
          }
        }
        iStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
      }
      (**(code **)(**(int **)(iVar1 + 500) + 0xc))();
    }
  }
  ExceptionList = pvStack_c;
  return;
}

