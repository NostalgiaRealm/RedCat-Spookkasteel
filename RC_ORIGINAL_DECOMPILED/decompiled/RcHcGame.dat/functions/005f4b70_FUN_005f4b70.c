/*
 * FUN_005f4b70 at 005f4b70
 * undefined FUN_005f4b70(void)
 * Address ranges: 005f4b70-005f4beb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f4b70(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00651178;
  local_4 = 0;
  param_1[0xc] = &PTR_FUN_00650ad4;
  FUN_005e2f00();
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
  ExceptionList = local_c;
  return;
}

