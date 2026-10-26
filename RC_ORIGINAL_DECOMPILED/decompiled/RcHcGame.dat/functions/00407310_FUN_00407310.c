/*
 * FUN_00407310 at 00407310
 * undefined FUN_00407310(void)
 * Address ranges: 00407310-00407392
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00407310(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062021b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004237d0(&stack0xffffffe8);
  FUN_00428250();
  pvVar1 = operator_new(0x3c);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00405c20(*(undefined4 *)(param_1 + 0x28));
  }
  local_4 = 0xffffffff;
  FUN_00402a10(2);
  ExceptionList = local_c;
  return;
}

