/*
 * FUN_00404cd0 at 00404cd0
 * undefined FUN_00404cd0(void)
 * Address ranges: 00404cd0-00404eac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a534 slot 1 for .?AVCRcStonedAlert@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a534 slot 1 for
   .?AVCRcStonedAlert@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00404cd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061fdb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00402cf0();
  if (iVar2 == 0) {
    FUN_00423700();
    cVar1 = FUN_004a0d00();
  }
  else {
    if (iVar2 == 1) {
      cVar1 = FUN_00422f70(param_3);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0xc))();
        ExceptionList = local_c;
        return;
      }
      cVar1 = FUN_00422f30(param_3);
      if (cVar1 != '\0') {
        ExceptionList = local_c;
        return;
      }
      cVar1 = (**(code **)(*(int *)param_1[9] + 0x88))(0);
      if (cVar1 != '\0') {
        (**(code **)(*(int *)param_1[9] + 0x8c))(0,0,0xbfd9999a);
      }
      FUN_00402d00();
      ExceptionList = local_10;
      return;
    }
    if (iVar2 != 2) {
      local_1c[0] = (undefined1)param_3;
      uVar4 = 0xffffffff;
      pcVar6 = s_Invalid_substate_in_CRcStonedAle_0068d934;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = (void *)0x0;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        pcVar6 = s_Invalid_substate_in_CRcStonedAle_0068d934;
        pcVar7 = local_18;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        local_18[uVar4] = '\0';
        local_14 = uVar4;
      }
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcKnig_0068d908,
                                    0x6c,local_1c);
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
    FUN_00402a80(param_2,param_3);
    FUN_00402d20(param_2,param_3);
    FUN_00402a80();
    cVar1 = FUN_00402d10();
  }
  if (cVar1 != '\0') {
    FUN_00402a10(1,0);
  }
  ExceptionList = local_c;
  return;
}

