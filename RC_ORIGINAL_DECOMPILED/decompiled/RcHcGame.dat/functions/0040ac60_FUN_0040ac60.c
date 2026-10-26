/*
 * FUN_0040ac60 at 0040ac60
 * undefined FUN_0040ac60(void)
 * Address ranges: 0040ac60-0040ae61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aa6c slot 1 for .?AVCRcToucherAttackState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aa6c slot 1 for
   .?AVCRcToucherAttackState@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0040ac60(int param_1,undefined4 param_2,undefined4 param_3)

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
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620923;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_00422f30(param_3);
  if (cVar1 == '\0') {
    FUN_00402d00();
    ExceptionList = local_c;
    return;
  }
  iVar2 = FUN_00402cf0();
  if (iVar2 == 0) {
    FUN_004288c0();
    cVar1 = FUN_00596c40();
    if (cVar1 != '\0') {
      FUN_0040ae70();
      ExceptionList = local_c;
      return;
    }
    FUN_004288c0();
    cVar1 = FUN_00596d40();
    if (cVar1 != '\0') {
      pvVar4 = operator_new(0x3c);
      local_4 = 0;
      if (pvVar4 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00405c20(*(undefined4 *)(param_1 + 0x28),1000);
      }
      local_4 = 0xffffffff;
      FUN_00402a10(1,uVar5);
    }
  }
  else if (iVar2 == 1) {
    FUN_00402a80(param_2,param_3);
    FUN_00402d20(param_2,param_3);
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      FUN_0040ae70();
      ExceptionList = local_c;
      return;
    }
  }
  else {
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
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcTouc_0068e354,0x5d,
                                  local_1c);
    (*pcVar3)();
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_18[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0(local_18 + -1);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

