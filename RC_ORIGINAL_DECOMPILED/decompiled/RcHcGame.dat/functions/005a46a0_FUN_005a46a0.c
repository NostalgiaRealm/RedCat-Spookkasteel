/*
 * FUN_005a46a0 at 005a46a0
 * undefined FUN_005a46a0(void)
 * Address ranges: 005a46a0-005a471a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005a46a0(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006453cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005a4720(param_1);
  if (iVar1 == 0) {
    pvVar2 = operator_new(0x48);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_005a4ab0(param_1);
    }
    local_4 = 0xffffffff;
    FUN_005a47f0(iVar1);
    FUN_005a4c70();
  }
  ExceptionList = local_c;
  return iVar1;
}

