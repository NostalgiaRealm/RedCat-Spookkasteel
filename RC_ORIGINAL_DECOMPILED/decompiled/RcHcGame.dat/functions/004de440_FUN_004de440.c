/*
 * FUN_004de440 at 004de440
 * undefined FUN_004de440(void)
 * Address ranges: 004de440-004de631
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004de440(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint3 uVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006322b0;
  local_c = ExceptionList;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  uVar2 = local_4._1_3_;
  if (param_2 != 0) {
    iVar6 = *(int *)(param_1 + 0x13c);
    local_4._1_3_ = 0;
    uVar2 = local_4._1_3_;
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    ExceptionList = &local_c;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 0x14) + -1;
      ExceptionList = &local_c;
      *(int *)(iVar6 + 0x14) = iVar4;
      if (iVar4 == 0) {
        FUN_005abfc0();
      }
      *(undefined4 *)(param_1 + 0x13c) = 0;
      FUN_005844b0();
      uVar2 = local_4._1_3_;
    }
  }
  local_4._1_3_ = uVar2;
  local_4._0_1_ = 1;
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x138) == 0) {
      iVar6 = *(int *)(param_1 + 0x13c);
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
        local_4._0_1_ = 1;
        FUN_00421430();
        cVar3 = FUN_004fbca0();
        if (cVar3 == '\0') {
          if (*(int *)(param_1 + 0x13c) != 0) {
            piVar1 = (int *)(*(int *)(param_1 + 0x13c) + 0x14);
            *piVar1 = *piVar1 + 1;
          }
          local_4._0_1_ = 1;
          FUN_00421430();
          cVar3 = FUN_004fb310();
          if (cVar3 == '\0') {
            FUN_004040a0();
            uVar7 = 0xffffffff;
            pcVar10 = &DAT_006b3f70;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar3 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar3 != '\0');
            uVar7 = ~uVar7 - 1;
            cVar3 = FUN_00401940();
            if (cVar3 != '\0') {
              puVar9 = (undefined4 *)&DAT_006b3f70;
              puVar11 = local_18;
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar11 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              *(undefined1 *)((int)local_18 + uVar7) = 0;
            }
            local_4._0_1_ = 5;
            pcVar5 = (code *)FUN_005a07f0(s_result_00691bc0,
                                          s_D__Work_RCHorror_AdamSource_Adam_00699ff0);
            (*pcVar5)();
            local_4._0_1_ = 1;
            FUN_004040a0();
          }
        }
      }
    }
    else {
      FUN_00449760(&param_3);
      FUN_004dec10();
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_2 != 0) &&
     (iVar6 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0();
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar6 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

