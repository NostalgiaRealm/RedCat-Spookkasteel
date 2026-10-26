/*
 * FUN_00407e40 at 00407e40
 * undefined FUN_00407e40(void)
 * Address ranges: 00407e40-00407eb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00407e40(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006203b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00402960();
  local_4 = 0;
  param_1[10] = param_2;
  *param_1 = &PTR_FUN_0064a868;
  FUN_004288c0();
  piVar1 = (int *)FUN_00596e40();
  if (*piVar1 != 0) {
    piVar1 = (int *)(*piVar1 + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  FUN_00428250();
  ExceptionList = pvStack_c;
  return param_1;
}

