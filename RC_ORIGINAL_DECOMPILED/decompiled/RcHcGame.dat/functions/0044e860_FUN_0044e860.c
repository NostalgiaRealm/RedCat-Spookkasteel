/*
 * FUN_0044e860 at 0044e860
 * undefined FUN_0044e860(void)
 * Address ranges: 0044e860-0044e8dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0044e860(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064d0f8;
  local_4 = 0;
  FUN_0044c1b0(DAT_00691748,DAT_0069174c,DAT_00691750,_DAT_00691754,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

