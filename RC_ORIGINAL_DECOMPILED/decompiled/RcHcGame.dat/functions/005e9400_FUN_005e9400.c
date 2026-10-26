/*
 * FUN_005e9400 at 005e9400
 * undefined FUN_005e9400(void)
 * Address ranges: 005e9400-005e94a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005e9400(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646bb6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005eb9e0(param_2);
  local_4 = 0;
  FUN_005ec300();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_00650a44;
  FUN_005e4140(s_Construct_RT_Unit_006b1020);
  FUN_005e92c0(param_3);
  puVar1 = (undefined4 *)param_1[0x18];
  if (puVar1 != (undefined4 *)param_1[0x19]) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x58))(param_1 + 0x2f);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)param_1[0x19]);
  }
  FUN_005e4140(s_Globals_have_been_put_on_stack_006b1000);
  ExceptionList = pvStack_c;
  return param_1;
}

