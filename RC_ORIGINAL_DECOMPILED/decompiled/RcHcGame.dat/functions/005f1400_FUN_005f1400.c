/*
 * FUN_005f1400 at 005f1400
 * undefined FUN_005f1400(void)
 * Address ranges: 005f1400-005f1468
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f1400(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006479b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650da8;
  local_4 = 0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  *param_1 = &PTR_FUN_00650de4;
  local_4 = 1;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = &PTR_LAB_00650d6c;
  ExceptionList = pvStack_c;
  return;
}

