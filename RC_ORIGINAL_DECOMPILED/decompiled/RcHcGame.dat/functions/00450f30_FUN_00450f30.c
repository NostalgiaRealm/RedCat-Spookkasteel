/*
 * FUN_00450f30 at 00450f30
 * undefined FUN_00450f30(void)
 * Address ranges: 00450f30-00450fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00450f30(void)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006260ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x1d4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    FUN_0044afa0(&DAT_006b6fc8);
    iVar2 = FUN_004633a0();
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_00502350();
    ExceptionList = local_c;
    return iVar2;
  }
  ExceptionList = local_c;
  return 0;
}

