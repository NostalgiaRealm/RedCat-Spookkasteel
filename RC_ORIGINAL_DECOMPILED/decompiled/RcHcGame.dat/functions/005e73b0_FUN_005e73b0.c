/*
 * FUN_005e73b0 at 005e73b0
 * undefined FUN_005e73b0(void)
 * Address ranges: 005e73b0-005e743a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005e73b0(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006469c8;
  pvStack_10 = ExceptionList;
  uVar4 = 0;
  ExceptionList = &pvStack_10;
  if ((*(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) == 0) &&
     (ExceptionList = &pvStack_10, *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x2c) != 0)) {
    ExceptionList = &pvStack_10;
    FUN_005e7510();
  }
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4) == 0) {
    local_8 = 1;
    iVar3 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x1c))
                      (param_2,param_3);
    if (iVar3 != param_3) {
      piVar2 = (int *)FUN_005e7468();
      return piVar2;
    }
  }
  else {
    uVar4 = 4;
  }
  local_8 = 0;
  if (uVar4 != 0) {
    uVar4 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar4;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uVar4 = uVar4 | 4;
    }
    FUN_005fe7e4(uVar4,0);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_00600c43();
  if ((cVar1 == '\0') &&
     (iVar3 = *(int *)(*param_1 + 4), (*(byte *)(iVar3 + 0xc + (int)param_1) & 2) != 0)) {
    uVar4 = 0;
    if (((*(byte *)((int)param_1 + iVar3 + 4) & 6) == 0) &&
       (iVar3 = (**(code **)(**(int **)((int)param_1 + iVar3 + 0x28) + 0x2c))(), iVar3 == -1)) {
      uVar4 = 4;
    }
    if (uVar4 != 0) {
      uVar4 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar4;
      if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
        uVar4 = uVar4 | 4;
      }
      FUN_005fe7e4(uVar4,0);
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}

