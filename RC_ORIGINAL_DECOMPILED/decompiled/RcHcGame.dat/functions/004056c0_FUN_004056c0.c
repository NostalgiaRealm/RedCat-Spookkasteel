/*
 * FUN_004056c0 at 004056c0
 * undefined FUN_004056c0(void)
 * Address ranges: 004056c0-00405739
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004056c0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061ff3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00402cf0();
  if ((iVar1 == 5) && (iVar1 = FUN_00402cf0(), iVar1 == 4)) {
    ExceptionList = local_c;
    return;
  }
  pvVar2 = operator_new(0x2c);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00405b10(*(undefined4 *)(param_1 + 0x2c));
  }
  local_4 = 0xffffffff;
  FUN_00402a10(4,uVar3);
  ExceptionList = local_c;
  return;
}

