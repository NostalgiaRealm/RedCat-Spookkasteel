/*
 * FUN_00406840 at 00406840
 * undefined FUN_00406840(void)
 * Address ranges: 00406840-004068b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00406840(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006200bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x8c))(1,1);
  pvVar1 = operator_new(0x3c);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00405c20(*(undefined4 *)(param_1 + 0x34),0xffffffff);
  }
  FUN_00402a10(1,uVar2);
  ExceptionList = (void *)0x7f7fffff;
  return;
}

