/*
 * FUN_004221b0 at 004221b0
 * undefined FUN_004221b0(void)
 * Address ranges: 004221b0-00422232
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004221b0(int param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006223c8;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x360);
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
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  FUN_005ab4d0();
  local_4 = 0xffffffff;
  FUN_005953d0();
  ExceptionList = local_c;
  return;
}

