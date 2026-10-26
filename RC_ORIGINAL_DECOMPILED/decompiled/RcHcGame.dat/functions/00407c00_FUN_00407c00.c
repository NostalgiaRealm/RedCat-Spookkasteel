/*
 * FUN_00407c00 at 00407c00
 * undefined FUN_00407c00(void)
 * Address ranges: 00407c00-00407da2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a858 slot 1 for .?AVCRcSkeletonMotionState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a858 slot 1 for
   .?AVCRcSkeletonMotionState@@. Original bytes unchanged; names and types still inferred. */

void FUN_00407c00(undefined4 param_1,undefined4 param_2)

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
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00402cf0();
  if (iVar2 == 0) {
    FUN_00423700();
    cVar1 = FUN_004a0d00();
    if (cVar1 != '\0') {
      FUN_00407dc0();
    }
  }
  else if (iVar2 == 1) {
    FUN_00402a80(param_1,param_2);
    FUN_00402d20(param_1,param_2);
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      thunk_FUN_00402d00();
      ExceptionList = local_c;
      return;
    }
  }
  else if (iVar2 == 2) {
    FUN_00423700();
    cVar1 = FUN_004a0d00();
    if (cVar1 != '\0') {
      FUN_00402d00();
      ExceptionList = local_c;
      return;
    }
  }
  else {
    local_1c[0] = (undefined1)param_2;
    uVar4 = 0xffffffff;
    pcVar6 = s_Invalid_substate_for_CRcSkeleton_0068deb8;
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
      pcVar6 = s_Invalid_substate_for_CRcSkeleton_0068deb8;
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
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcSkel_0068de88,0xa4,
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

