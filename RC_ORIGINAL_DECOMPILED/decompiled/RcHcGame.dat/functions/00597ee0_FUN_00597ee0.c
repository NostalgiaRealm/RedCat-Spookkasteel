/*
 * FUN_00597ee0 at 00597ee0
 * undefined FUN_00597ee0(void)
 * Address ranges: 00597ee0-00597f98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00597ee0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0064409f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0065008c;
  local_4 = 3;
  FUN_005630e0();
  local_4._0_1_ = 2;
  FUN_0060af6c(param_1 + 0x15,4,4,FUN_005630e0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0060af6c(param_1 + 0xd,4,8,FUN_005630e0);
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4 = 0xffffffff;
  FUN_004ff120();
  ExceptionList = local_c;
  return;
}

