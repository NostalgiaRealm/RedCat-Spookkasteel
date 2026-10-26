/*
 * FUN_004064d0 at 004064d0
 * undefined FUN_004064d0(void)
 * Address ranges: 004064d0-00406544
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004064d0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062006b;
  pvStack_c = ExceptionList;
  uVar2 = 0xffffffff;
  ExceptionList = &pvStack_c;
  FUN_004288c0(0xffffffff);
  FUN_005966a0(uVar2);
  pvVar1 = operator_new(0x28);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004034d0(*(undefined4 *)(param_1 + 0x28));
  }
  uStack_4 = 0xffffffff;
  FUN_00402a10(0,uVar2);
  ExceptionList = pvStack_c;
  return;
}

