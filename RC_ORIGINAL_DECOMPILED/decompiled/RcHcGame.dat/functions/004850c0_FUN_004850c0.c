/*
 * FUN_004850c0 at 004850c0
 * undefined FUN_004850c0(void)
 * Address ranges: 004850c0-0048516d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004850c0(int param_1)

{
  char cVar1;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00629938;
  local_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &local_c;
    FUN_0055b280();
  }
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  FUN_004bef70(0,local_1c);
  *(undefined1 *)(param_1 + 0x84) = 1;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

