/*
 * FUN_005943d0 at 005943d0
 * undefined FUN_005943d0(void)
 * Address ranges: 005943d0-0059446a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005943d0(void)

{
  char cVar1;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643ad8;
  local_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004c97e0(local_1c);
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  FUN_004c4380();
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

