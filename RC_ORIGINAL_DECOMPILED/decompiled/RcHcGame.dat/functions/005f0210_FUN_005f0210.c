/*
 * FUN_005f0210 at 005f0210
 * undefined FUN_005f0210(void)
 * Address ranges: 005f0210-005f0283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f0210(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006477e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    *puVar1 = &PTR_LAB_00650ce0;
    local_4 = 1;
    FUN_005e27d0(param_1 + 8);
    puVar1[2] = &PTR_FUN_00650ad4;
    *puVar1 = &PTR_FUN_00650cb8;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

