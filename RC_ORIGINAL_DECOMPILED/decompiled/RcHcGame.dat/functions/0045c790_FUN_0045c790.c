/*
 * FUN_0045c790 at 0045c790
 * undefined FUN_0045c790(void)
 * Address ranges: 0045c790-0045c8ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0045c790(int param_1)

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
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627130;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = param_1;
  FUN_0045c8d0(1);
  piVar3 = (int *)FUN_004042e0(&local_24);
  local_4 = 0;
  if (*piVar3 == 0) {
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
      param_1 = local_20;
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
  if (local_24 != 0) {
    iVar7 = *(int *)(local_24 + 0x14) + -1;
    *(int *)(local_24 + 0x14) = iVar7;
    if (iVar7 == 0) {
      FUN_005abfc0(0);
    }
    local_24 = 0;
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x168);
    FUN_004d6920(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20),
                 *(undefined4 *)(iVar1 + 0x24));
  }
  ExceptionList = pvStack_c;
  return;
}

