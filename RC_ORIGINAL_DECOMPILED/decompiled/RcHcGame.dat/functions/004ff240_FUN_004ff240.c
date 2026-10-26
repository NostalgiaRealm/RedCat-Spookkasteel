/*
 * FUN_004ff240 at 004ff240
 * undefined FUN_004ff240(void)
 * Address ranges: 004ff240-004ff30e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004ff240(int param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635963;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x14) == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x20);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ff340(param_1);
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
    }
    iVar4 = *(int *)(param_1 + 0x14);
    local_4 = 1;
    if (iVar4 != iVar2) {
      if ((iVar4 != 0) &&
         (iVar3 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar3, iVar3 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0x14) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((iVar2 != 0) &&
       (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
      FUN_005abfc0(0);
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  }
  ExceptionList = local_c;
  return;
}

