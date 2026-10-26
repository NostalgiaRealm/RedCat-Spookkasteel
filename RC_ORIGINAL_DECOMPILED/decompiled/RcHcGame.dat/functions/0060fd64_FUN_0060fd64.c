/*
 * FUN_0060fd64 at 0060fd64
 * undefined FUN_0060fd64(void)
 * Address ranges: 0060fd64-0060fdff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_0060fd64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00651dd0;
  puStack_10 = &LAB_006106d0;
  local_14 = ExceptionList;
  DAT_0071000c = param_1;
  DAT_00710010 = param_3;
  local_8 = 1;
  ExceptionList = &local_14;
  uVar1 = FUN_0060a18a(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_0060fe2a();
  ExceptionList = local_14;
  return uVar1;
}

