/*
 * FUN_00446750 at 00446750
 * undefined FUN_00446750(void)
 * Address ranges: 00446750-004467d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00446750(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00625158;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x24c);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar2 != param_2) {
    ExceptionList = &local_c;
    if ((iVar2 != 0) &&
       (iVar1 = *(int *)(iVar2 + 0x14) + -1, ExceptionList = &local_c,
       *(int *)(iVar2 + 0x14) = iVar1, iVar1 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x24c) = param_2;
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

