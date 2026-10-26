/*
 * FUN_0042e1d0 at 0042e1d0
 * undefined FUN_0042e1d0(void)
 * Address ranges: 0042e1d0-0042e233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0042e1d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006235e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064c338;
  local_4 = 0;
  if ((undefined4 *)param_1[0xa5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xa5])(1);
    param_1[0xa5] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0049b720();
  ExceptionList = pvStack_c;
  return;
}

