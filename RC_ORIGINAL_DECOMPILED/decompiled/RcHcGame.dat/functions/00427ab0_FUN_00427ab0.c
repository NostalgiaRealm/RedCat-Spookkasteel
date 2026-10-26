/*
 * FUN_00427ab0 at 00427ab0
 * undefined FUN_00427ab0(void)
 * Address ranges: 00427ab0-00427c88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00427b56) */
/* WARNING: Removing unreachable block (ram,0x00427b60) */
/* WARNING: Removing unreachable block (ram,0x00427b6a) */
/* WARNING: Removing unreachable block (ram,0x00427b64) */

void __thiscall FUN_00427ab0(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00622c38;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_00422b10();
  if (*(int *)(param_1 + 0x17c) == 0) {
    iVar3 = -1;
    local_18 = (undefined4 *)0x0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,
                                  s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,0x5b);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
  }
  if (param_2 == 0) {
    FUN_004040a0();
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_18 = *puVar6;
        puVar6 = puVar6 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190();
    }
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  FUN_004f41c0();
  FUN_00502350();
  FUN_00502350();
  FUN_004969a0();
  FUN_0042d130();
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

