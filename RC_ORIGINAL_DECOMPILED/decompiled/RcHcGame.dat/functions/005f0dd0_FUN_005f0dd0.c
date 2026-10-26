/*
 * FUN_005f0dd0 at 005f0dd0
 * undefined FUN_005f0dd0(void)
 * Address ranges: 005f0dd0-005f0e4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f0dd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006478e7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650b88;
  puVar1 = (undefined4 *)param_1[2];
  local_4 = 0;
  if (puVar1 != (undefined4 *)param_1[3]) {
    do {
      FUN_005f7900(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)param_1[3]);
  }
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = param_1 + 1;
  }
  FUN_005fe5f0(param_1[1]);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}

