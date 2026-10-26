/*
 * FUN_0040ae80 at 0040ae80
 * undefined FUN_0040ae80(void)
 * Address ranges: 0040ae80-0040b05c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aa6c slot 3 for .?AVCRcToucherAttackState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aa6c slot 3 for
   .?AVCRcToucherAttackState@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0040ae80(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620943;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0060a4a0();
  iVar2 = iVar2 % 3;
  if (iVar2 == 0) {
    uVar5 = 0;
    FUN_004288c0(0);
    FUN_005967f0(uVar5);
  }
  else if (iVar2 == 1) {
    uVar10 = 2000;
    uVar5 = 0;
    FUN_004288c0(0,2000);
    FUN_00596780(uVar5,uVar10);
  }
  else if (iVar2 == 2) {
    uVar10 = 2000;
    uVar5 = 0;
    FUN_004288c0(0,2000);
    FUN_00596710(uVar5,uVar10);
  }
  else {
    uVar6 = 0xffffffff;
    pcVar8 = s_Unreachable_code_reached_0068d350;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      pcVar8 = s_Unreachable_code_reached_0068d350;
      pcVar9 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_18[uVar6] = '\0';
      local_14 = uVar6;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcTouc_0068e354,0x7f,
                                  local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_18[-1] = cVar1 + -1;
        local_18 = (void *)0x0;
        local_14 = 0;
        local_10 = 0;
        goto LAB_0040afc5;
      }
      FUN_005fe5f0(local_18 + -1);
    }
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
LAB_0040afc5:
  FUN_004288c0();
  cVar1 = FUN_00596d40();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))(2,1,0x7f7fffff);
    uVar5 = 0;
    uVar10 = 0;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))(1,1,0x7f7fffff);
    pvVar4 = operator_new(0x3c);
    local_10 = 1;
    if (pvVar4 == (void *)0x0) {
      local_10 = 0xffffffff;
      uVar5 = 0;
      uVar10 = 1;
    }
    else {
      uVar5 = FUN_00405c20(*(undefined4 *)(param_1 + 0x28),1000);
      local_10 = 0xffffffff;
      uVar10 = 1;
    }
  }
  FUN_00402a10(uVar10,uVar5);
  ExceptionList = local_18;
  return;
}

