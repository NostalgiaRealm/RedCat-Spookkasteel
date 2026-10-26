/*
 * FUN_005efa70 at 005efa70
 * undefined FUN_005efa70(void)
 * Address ranges: 005efa70-005efaf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005efa70(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647707;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650ae8;
  piVar1 = (int *)param_1[2];
  local_4 = 0;
  if (piVar1 != (int *)param_1[3]) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)param_1[3]);
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

