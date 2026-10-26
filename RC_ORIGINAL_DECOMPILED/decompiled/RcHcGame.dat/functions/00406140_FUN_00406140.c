/*
 * FUN_00406140 at 00406140
 * undefined FUN_00406140(void)
 * Address ranges: 00406140-0040635b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00406140(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620030;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00429970();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_004042e0(&local_20);
    local_4 = 0;
    if (*piVar2 == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        puVar4 = (undefined4 *)&DAT_006b3f70;
        puVar10 = local_18;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_004f3fd0();
    local_4 = 0xffffffff;
    if ((local_20 != 0) &&
       (iVar8 = *(int *)(local_20 + 0x14) + -1, *(int *)(local_20 + 0x14) = iVar8, iVar8 == 0)) {
      FUN_005abfc0(0);
    }
    puVar4 = (undefined4 *)FUN_00429940(&local_20);
    local_4 = 2;
    uVar5 = FUN_0059df90(*puVar4);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    local_4 = 0xffffffff;
    FUN_005630e0();
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      local_18 = (undefined4 *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        puVar4 = (undefined4 *)&DAT_006b3f70;
        puVar10 = local_18;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4 = 3;
      pcVar3 = (code *)FUN_005a07f0(s_m_Start_0068db74,s_D__Work_RCHorror_RCSource_RcMove_0068db7c,
                                    0x176,local_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      if (local_18 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)local_18 + -1));
        }
        else {
          *(char *)((int)local_18 + -1) = cVar1 + -1;
        }
      }
      local_18 = (undefined4 *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
  }
  FUN_004064d0();
  ExceptionList = pvStack_c;
  return;
}

