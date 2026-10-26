/*
 * FUN_005045c0 at 005045c0
 * undefined FUN_005045c0(void)
 * Address ranges: 005045c0-00504640
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005045c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635df8;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0xc0);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar2 != param_2) {
    ExceptionList = &local_c;
    if ((iVar2 != 0) &&
       (iVar1 = *(int *)(iVar2 + 0x14) + -1, ExceptionList = &local_c,
       *(int *)(iVar2 + 0x14) = iVar1, iVar1 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0xc0) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar2 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

