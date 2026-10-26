/*
 * FUN_005e9da0 at 005e9da0
 * undefined FUN_005e9da0(void)
 * Address ranges: 005e9da0-005e9e41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005e9da0(int *param_1,byte param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00646d28;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  cVar2 = FUN_005e6020();
  if (cVar2 == '\0') {
    uVar6 = 4;
    goto LAB_005e9e75;
  }
  local_8 = 1;
  piVar4 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
  uVar6 = *(uint *)piVar4[8];
  if (uVar6 == 0) {
LAB_005e9e28:
    uVar3 = (**(code **)(*piVar4 + 4))(param_2);
  }
  else {
    iVar5 = *(int *)piVar4[0xc];
    if (iVar5 + uVar6 <= uVar6) goto LAB_005e9e28;
    *(int *)piVar4[0xc] = iVar5 + -1;
    pbVar1 = *(byte **)piVar4[8];
    *(byte **)piVar4[8] = pbVar1 + 1;
    *pbVar1 = param_2;
    uVar3 = (uint)param_2;
  }
  uVar6 = 0;
  if (uVar3 == 0xffffffff) {
    piVar4 = (int *)FUN_005e9e6e();
    return piVar4;
  }
LAB_005e9e75:
  local_8 = 0;
  if (uVar6 != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar6;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uVar6 = uVar6 | 4;
    }
    FUN_005fe7e4(uVar6,0);
  }
  local_8 = 0xffffffff;
  cVar2 = FUN_00600c43();
  if ((cVar2 == '\0') &&
     (iVar5 = *(int *)(*param_1 + 4), (*(byte *)(iVar5 + 0xc + (int)param_1) & 2) != 0)) {
    uVar6 = 0;
    if (((*(byte *)((int)param_1 + iVar5 + 4) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)((int)param_1 + iVar5 + 0x28) + 0x2c))(), iVar5 == -1)) {
      uVar6 = 4;
    }
    if (uVar6 != 0) {
      uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar6;
      if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
        uVar6 = uVar6 | 4;
      }
      FUN_005fe7e4(uVar6,0);
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}

