/*
 * FUN_0042aa20 at 0042aa20
 * undefined FUN_0042aa20(void)
 * Address ranges: 0042aa20-0042ac5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0042aac9) */
/* WARNING: Removing unreachable block (ram,0x0042aad3) */
/* WARNING: Removing unreachable block (ram,0x0042aadd) */
/* WARNING: Removing unreachable block (ram,0x0042aad7) */

void __thiscall FUN_0042aa20(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 *local_18;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00623078;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_00422b10();
  if (*(int *)(param_1 + 0x17c) == 0) {
    iVar4 = -1;
    local_18 = (undefined4 *)0x0;
    pcVar8 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    local_10 = (void *)0x0;
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,
                                  s_D__Work_RCHorror_RCSource_RcStan_0068ff88,0x9e);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
  }
  if (param_2 == 0) {
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_18 = *puVar7;
        puVar7 = puVar7 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190();
    }
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  FUN_004f41c0();
  FUN_00502350();
  (**(code **)(**(int **)(param_1 + 0x17c) + 0x4c))();
  fVar9 = (float10)FUN_005b17e0(*(undefined4 *)(*(int *)(param_1 + 0x180) + 0x14));
  FUN_0049cd90((float)(fVar9 + (float10)1.5707964));
  FUN_00502350(*(int *)(*(int *)(param_1 + 0x180) + 0x18) != 0);
  fVar1 = *(float *)(*(int *)(param_1 + 0x180) + 0x1c);
  if (0.0 < fVar1) {
    FUN_0049cca0(fVar1,fVar1,fVar1);
  }
  uVar10 = *(undefined4 *)(param_1 + 0x17c);
  FUN_004969a0(uVar10);
  FUN_0042d130(uVar10);
  puStack_8 = (undefined1 *)0xffffffff;
  if ((param_2 != 0) &&
     (iVar4 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_10;
  return;
}

