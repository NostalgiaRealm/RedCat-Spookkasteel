/*
 * FUN_005f3b90 at 005f3b90
 * undefined FUN_005f3b90(void)
 * Address ranges: 005f3b90-005f3c20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f3b90(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647ee0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006510c0;
  local_4 = 0;
  FUN_005f93b0();
  *param_1 = &PTR_FUN_00651060;
  local_4 = 1;
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  *param_1 = &PTR_FUN_00650a74;
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = pvStack_c;
  return;
}

