/*
 * FUN_0050e1c0 at 0050e1c0
 * undefined FUN_0050e1c0(void)
 * Address ranges: 0050e1c0-0050e26d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0050e1c0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f550;
  iVar2 = param_1[0xf];
  local_4 = 0;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  piVar3 = (int *)param_1[0xb];
  for (piVar4 = (int *)param_1[10]; piVar4 != piVar3; piVar4 = piVar4 + 1) {
    if (*piVar4 != 0) {
      FUN_004098d0();
      *piVar4 = 0;
    }
  }
  FUN_005fe5f0(param_1[10]);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

