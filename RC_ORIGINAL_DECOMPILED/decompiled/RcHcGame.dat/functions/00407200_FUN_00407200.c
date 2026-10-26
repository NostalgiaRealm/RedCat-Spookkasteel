/*
 * FUN_00407200 at 00407200
 * undefined FUN_00407200(void)
 * Address ranges: 00407200-0040727b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00407200(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006201fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004237d0(&stack0xffffffe8);
  FUN_00428250();
  pvVar1 = operator_new(0x38);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_004073a0();
  }
  local_4 = 0xffffffff;
  FUN_00402a10(1);
  ExceptionList = local_c;
  return;
}

