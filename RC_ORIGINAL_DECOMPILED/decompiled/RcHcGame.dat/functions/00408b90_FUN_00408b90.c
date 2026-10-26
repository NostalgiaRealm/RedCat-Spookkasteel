/*
 * FUN_00408b90 at 00408b90
 * undefined FUN_00408b90(void)
 * Address ranges: 00408b90-00408c02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00408b90(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062057b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x2c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    FUN_00403610(uVar1);
    puVar2[10] = uVar1;
    *puVar2 = &PTR_FUN_0064a920;
  }
  local_4 = 0xffffffff;
  FUN_00402a10(2,puVar2);
  ExceptionList = local_c;
  return;
}

