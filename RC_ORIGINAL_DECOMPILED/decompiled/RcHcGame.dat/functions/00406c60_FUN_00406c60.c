/*
 * FUN_00406c60 at 00406c60
 * undefined FUN_00406c60(void)
 * Address ranges: 00406c60-00406cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00406c60(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062015b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x38);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0042b300();
    uVar3 = FUN_00406ce0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar2 + 0x38));
  }
  local_4 = 0xffffffff;
  FUN_00402a10(0,uVar3);
  ExceptionList = local_c;
  return;
}

