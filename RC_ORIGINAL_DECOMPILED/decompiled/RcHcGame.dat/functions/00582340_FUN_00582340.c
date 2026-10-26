/*
 * FUN_00582340 at 00582340
 * undefined FUN_00582340(void)
 * Address ranges: 00582340-0058239d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00582340(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006425e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064fcdc;
  local_4 = 0;
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf])(1);
  }
  param_1[0xf] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

