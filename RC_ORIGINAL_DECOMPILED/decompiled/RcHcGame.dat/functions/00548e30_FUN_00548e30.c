/*
 * FUN_00548e30 at 00548e30
 * undefined FUN_00548e30(void)
 * Address ranges: 00548e30-00548f46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_00548e30(undefined1 *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0063d419;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (undefined1)param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  uStack_3 = 0;
  if (param_2 != 0) {
    iVar1 = param_2;
    if (param_2 < 0) {
      iVar1 = 0;
    }
    pvVar2 = operator_new(iVar1 << 4);
    iVar1 = *(int *)(param_1 + 8);
    pvVar3 = pvVar2;
    for (iVar4 = *(int *)(param_1 + 4); iVar4 != iVar1; iVar4 = iVar4 + 0x10) {
      local_4 = 1;
      if (pvVar3 != (void *)0x0) {
        FUN_00548a70(iVar4);
      }
      pvVar3 = (void *)((int)pvVar3 + 0x10);
      local_4 = 0;
    }
    iVar1 = *(int *)(param_1 + 8);
    for (iVar4 = *(int *)(param_1 + 4); iVar4 != iVar1; iVar4 = iVar4 + 0x10) {
      FUN_00587d50(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      FUN_005fe5f0(*(undefined4 *)(iVar4 + 4));
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)(param_2 * 0x10 + (int)pvVar2);
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
    }
    *(void **)(param_1 + 4) = pvVar2;
    *(void **)(param_1 + 8) = (void *)(iVar1 * 0x10 + (int)pvVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

