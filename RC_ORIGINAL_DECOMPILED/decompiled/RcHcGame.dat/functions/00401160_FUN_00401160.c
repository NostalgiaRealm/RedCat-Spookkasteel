/*
 * FUN_00401160 at 00401160
 * undefined FUN_00401160(void)
 * Address ranges: 00401160-004013bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a2b8 slot 1 for .?AVCRcBoneBrutusAttackState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a2b8 slot 1 for
   .?AVCRcBoneBrutusAttackState@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00401160(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061f818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00402cf0();
  switch(uVar2) {
  case 0:
    FUN_004288c0();
    cVar1 = FUN_00596c40();
    if (cVar1 == '\0') {
      FUN_004288c0();
      cVar1 = FUN_00596d40();
      if (cVar1 == '\0') {
        ExceptionList = local_c;
        return;
      }
      FUN_004013d0();
      ExceptionList = local_c;
      return;
    }
    break;
  case 1:
    uVar2 = param_3;
    FUN_00402a80(param_2,param_3);
    FUN_00402d20(param_2,uVar2);
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return;
    }
    FUN_00401440(param_3);
    (**(code **)(**(int **)(param_1 + 0x28) + 200))();
    ExceptionList = local_c;
    return;
  case 2:
    FUN_00423700();
    cVar1 = FUN_004a0d00();
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return;
    }
    iVar3 = FUN_0060a4a0();
    iVar4 = FUN_00429fd0();
    if ((float)(iVar3 % 10000) * 0.0001 <= *(float *)(iVar4 + 0x34)) goto LAB_00401284;
    goto LAB_004012da;
  case 3:
    uVar2 = param_3;
    FUN_00402a80(param_2,param_3);
    FUN_00402d20(param_2,uVar2);
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return;
    }
    break;
  default:
    local_1c[0] = (undefined1)param_3;
    uVar6 = 0xffffffff;
    pcVar8 = s_Unreachable_code_reached__0068d308;
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
      pcVar8 = s_Unreachable_code_reached__0068d308;
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
    pcVar5 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcBone_0068d2d8,0x84,
                                  local_1c);
    (*pcVar5)();
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_18[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0(local_18 + -1);
    }
    ExceptionList = local_c;
    return;
  }
  cVar1 = FUN_00422f70(param_3);
  if (cVar1 == '\0') {
LAB_00401284:
    FUN_004014b0();
    ExceptionList = local_c;
    return;
  }
LAB_004012da:
  FUN_004013d0();
  ExceptionList = local_c;
  return;
}

