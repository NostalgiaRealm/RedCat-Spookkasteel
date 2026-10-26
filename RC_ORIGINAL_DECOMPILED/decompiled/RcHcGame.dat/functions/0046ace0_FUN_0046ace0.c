/*
 * FUN_0046ace0 at 0046ace0
 * undefined FUN_0046ace0(void)
 * Address ranges: 0046ace0-0046ad79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046ace0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00627c48;
  local_c = ExceptionList;
  iVar2 = param_1[3];
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      ExceptionList = &local_c;
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      ExceptionList = &local_c;
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[1] = 0;
  }
  iVar2 = *param_1;
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *param_1 = 0;
  }
  ExceptionList = local_c;
  return;
}

