/*
 * FUN_00409220 at 00409220
 * undefined FUN_00409220(void)
 * Address ranges: 00409220-00409299
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00409220(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062065b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x40);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    FUN_00405530(uVar1);
    puVar2[0xb] = uVar1;
    puVar2[0xf] = 1;
    *puVar2 = &PTR_FUN_0064a950;
  }
  local_4 = 0xffffffff;
  FUN_00402a10(0,puVar2);
  ExceptionList = local_c;
  return;
}

