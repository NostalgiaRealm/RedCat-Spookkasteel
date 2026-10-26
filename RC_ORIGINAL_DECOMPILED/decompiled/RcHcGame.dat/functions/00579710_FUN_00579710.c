/*
 * FUN_00579710 at 00579710
 * undefined FUN_00579710(void)
 * Address ranges: 00579710-005799b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fa54 slot 6 for .?AVCAdamEffectBolt@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fa54 slot 6 for
   .?AVCAdamEffectBolt@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_00579710(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641ad8;
  local_c = ExceptionList;
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  ExceptionList = &local_c;
  iVar4 = __strcmpi(pcVar3,s_enable_0068f0e4);
  if (iVar4 == 0) {
    FUN_00502350(1);
    ExceptionList = local_c;
    return 1;
  }
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar4 = __strcmpi(pcVar3,s_disable_0068f0dc);
  if (iVar4 != 0) {
    uVar7 = FUN_005027d0(param_2,param_3,param_4);
    ExceptionList = local_c;
    return uVar7;
  }
  FUN_00502350(0);
  piVar5 = (int *)FUN_004042e0(&param_4);
  local_4 = 0;
  if (*piVar5 == 0) {
    param_2._0_1_ = SUB41(piVar5,0);
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8,1);
    if (cVar2 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *local_18 = *puVar10;
        puVar10 = puVar10 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190(uVar8);
    }
    local_4._0_1_ = 1;
    pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar4 = *piVar5;
  if (*(int *)(iVar4 + 0x5c) == 0) {
    param_2._0_1_ = (undefined1)iVar4;
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8,1);
    if (cVar2 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar11 = puStack_28;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)puStack_28 + uVar8) = 0;
      uStack_24 = uVar8;
    }
    local_4._0_1_ = 2;
    pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_2c);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uVar7 = *(undefined4 *)(iVar4 + 0x5c);
  local_4 = 0xffffffff;
  if ((param_4 != 0) &&
     (iVar4 = *(int *)(param_4 + 0x14) + -1, *(int *)(param_4 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  piVar5 = *(int **)(param_1 + 0x10c);
  iVar4 = 0;
  if (0 < piVar5[0xb]) {
    do {
      iVar1 = *(int *)(*(int *)(*piVar5 + 0xd4) + iVar4 * 4);
      if (iVar1 != 0) {
        FUN_005b6ee0(uVar7,iVar1);
        *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x10c) + 0xd4) + iVar4 * 4) = 0;
      }
      piVar5 = *(int **)(param_1 + 0x10c);
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar5[0xb]);
  }
  *(undefined4 *)(**(int **)(param_1 + 0x10c) + 0xcc) = 0;
  *(undefined4 *)(**(int **)(param_1 + 0x10c) + 0xd0) = 0;
  ExceptionList = local_c;
  return 1;
}

