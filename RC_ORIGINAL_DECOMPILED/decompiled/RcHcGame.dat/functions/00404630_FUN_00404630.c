/*
 * FUN_00404630 at 00404630
 * undefined FUN_00404630(void)
 * Address ranges: 00404630-00404823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a50c slot 1 for .?AVCRcJmVisualState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a50c slot 1 for
   .?AVCRcJmVisualState@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00404630(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
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
  puStack_8 = &LAB_0061fd18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00402cf0();
  if (iVar3 == 0) {
    FUN_00402a80(param_2,param_3);
    FUN_00402d20(param_2,param_3);
    FUN_00402a80();
    cVar2 = FUN_00402d10();
    if (cVar2 != '\0') {
      FUN_00404830();
      FUN_0041e820(1);
    }
  }
  else if (iVar3 == 1) {
    FUN_00402a80(param_2,param_3);
    FUN_00402d20(param_2,param_3);
    FUN_00402a80();
    cVar2 = FUN_00402d10();
    if (cVar2 != '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x178);
      iVar3 = FUN_00422d90();
      iVar3 = *(int *)(iVar3 + 0x2c);
      iVar5 = FUN_0060a4a0();
      if ((float)(iVar5 % 10000) * 0.0001 < (float)iVar1 / (float)iVar3) {
        FUN_004048a0();
        ExceptionList = local_c;
        return;
      }
      FUN_00404830();
      ExceptionList = local_c;
      return;
    }
  }
  else {
    local_1c[0] = (undefined1)param_3;
    uVar6 = 0xffffffff;
    pcVar8 = s_Unreachable_code__invalid_Jester_0068d898;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar8 = s_Unreachable_code__invalid_Jester_0068d898;
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
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcJest_0068d868,0x62,
                                  local_1c);
    (*pcVar4)();
    if (local_18 != (char *)0x0) {
      cVar2 = local_18[-1];
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        local_18[-1] = cVar2 + -1;
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

