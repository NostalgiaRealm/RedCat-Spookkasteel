/*
 * FUN_00401d00 at 00401d00
 * undefined FUN_00401d00(void)
 * Address ranges: 00401d00-00401ed1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a318 slot 1 for .?AVCRcDmAttackState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a318 slot 1 for
   .?AVCRcDmAttackState@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00401d00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061f928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = param_3;
  FUN_00402a80(param_2,param_3);
  FUN_00402d20(param_2,uVar2);
  uVar2 = FUN_00402cf0();
  switch(uVar2) {
  case 0:
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x10))();
      ExceptionList = local_c;
      return;
    }
    break;
  case 1:
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x14))();
      ExceptionList = local_c;
      return;
    }
    break;
  case 2:
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x18))();
      ExceptionList = local_c;
      return;
    }
    break;
  case 3:
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xc))();
      ExceptionList = local_c;
      return;
    }
    break;
  default:
    local_1c[0] = (undefined1)param_3;
    uVar4 = 0xffffffff;
    pcVar6 = s_Unreachable_code_0068d420;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar6 = s_Unreachable_code_0068d420;
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
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcDung_0068d3f0,0x5f,
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
    }
  }
  ExceptionList = local_c;
  return;
}

