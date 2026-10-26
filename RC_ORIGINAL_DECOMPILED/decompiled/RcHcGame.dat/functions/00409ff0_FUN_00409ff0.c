/*
 * FUN_00409ff0 at 00409ff0
 * undefined FUN_00409ff0(void)
 * Address ranges: 00409ff0-0040a14d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00409ff0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00402cf0();
  if (iVar2 == 0) {
    cVar1 = FUN_00422f30(param_3);
    if (cVar1 == '\0') {
      FUN_00402d00();
      ExceptionList = local_c;
      return;
    }
    cVar1 = FUN_00422f70(param_3);
    if (cVar1 != '\0') {
      (**(code **)(*(int *)param_1[10] + 0xbc))(2);
      (**(code **)(*param_1 + 0xc))();
    }
  }
  else if (iVar2 == 1) {
    FUN_00402a80(param_2,param_3);
    FUN_00402d20(param_2,param_3);
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      FUN_00402a10(0,0);
      ExceptionList = local_c;
      return;
    }
  }
  else {
    uVar3 = FUN_00402cf0();
    uVar3 = FUN_005ae390(local_1c,s_Invalid_substate__d_in_CRcStandS_0068e278,uVar3);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcStan_0068e248,0x43,
                                  uVar3);
    (*pcVar4)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(iStack_18 + -1));
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

