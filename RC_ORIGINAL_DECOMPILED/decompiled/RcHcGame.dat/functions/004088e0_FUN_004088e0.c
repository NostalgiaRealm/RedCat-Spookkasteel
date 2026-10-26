/*
 * FUN_004088e0 at 004088e0
 * undefined FUN_004088e0(void)
 * Address ranges: 004088e0-00408a06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a898 slot 1 for .?AVCRcSkeletonHit@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a898 slot 1 for
   .?AVCRcSkeletonHit@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004088e0(int param_1)

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
  puStack_8 = &LAB_00620518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00402cf0();
  if (iVar2 == 0) {
    FUN_00423700();
    cVar1 = FUN_004a0d00();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x8c))(4,0,0x7f7fffff);
      FUN_00402a10(1,0);
    }
  }
  else if (iVar2 == 1) {
    FUN_00423700();
    cVar1 = FUN_004a0d00();
    if (cVar1 != '\0') {
      FUN_00402d00();
      ExceptionList = local_c;
      return;
    }
  }
  else {
    uVar3 = FUN_00402cf0();
    uVar3 = FUN_005ae390(local_1c,s_Invalid_substate__d_in_CRcSkelet_0068dfb8,uVar3);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcSkel_0068de88,0x1fb
                                  ,uVar3);
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

