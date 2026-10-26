/*
 * FUN_00406f70 at 00406f70
 * undefined FUN_00406f70(void)
 * Address ranges: 00406f70-004071fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a7d4 slot 1 for .?AVCRcShooterAttack@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a7d4 slot 1 for
   .?AVCRcShooterAttack@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00406f70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006201d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00402cf0();
  if (iVar2 == 0) {
    FUN_004288c0();
    cVar1 = FUN_00596c40();
    if (cVar1 != '\0') {
      cVar1 = FUN_00422f30(param_3);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x10))();
        ExceptionList = local_c;
        return;
      }
      FUN_00402d00();
      ExceptionList = local_c;
      return;
    }
    FUN_004288c0();
    cVar1 = FUN_00596d40();
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      FUN_00402a80(param_2,param_3);
      FUN_00402d20(param_2,param_3);
      FUN_00402a80();
      cVar1 = FUN_00402d10();
      if (cVar1 == '\0') {
        ExceptionList = local_c;
        return;
      }
      iVar2 = FUN_0060a4a0();
      iVar4 = FUN_00429fd0();
      if (*(float *)(iVar4 + 0x34) < (float)(iVar2 % 10000) * 0.0001) {
        iVar2 = *param_1;
        iVar4 = FUN_00429fd0();
        (**(code **)(iVar2 + 0x14))(*(undefined4 *)(iVar4 + 0x38));
        ExceptionList = local_10;
        return;
      }
      (**(code **)(*param_1 + 0xc))();
      ExceptionList = local_c;
      return;
    }
    if (iVar2 != 2) {
      local_1c[0] = (undefined1)param_3;
      uVar5 = 0xffffffff;
      pcVar7 = s_Unreachable_code_reached__0068d308;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = (void *)0x0;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        pcVar7 = s_Unreachable_code_reached__0068d308;
        pcVar8 = local_18;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        local_18[uVar5] = '\0';
        local_14 = uVar5;
      }
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcShoo_0068dd98,
                                    0x82,local_1c);
      (*pcVar3)();
      if (local_18 == (char *)0x0) {
        ExceptionList = local_c;
        return;
      }
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
    uVar9 = param_3;
    FUN_00402a80(param_2,param_3);
    FUN_00402d20(param_2,uVar9);
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return;
    }
    cVar1 = FUN_00422f70(param_3);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0xc))();
      ExceptionList = local_c;
      return;
    }
  }
  (**(code **)(*param_1 + 0x10))();
  ExceptionList = local_c;
  return;
}

