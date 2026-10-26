/*
 * FUN_005948a0 at 005948a0
 * undefined FUN_005948a0(void)
 * Address ranges: 005948a0-005948fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005948a0(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643af8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a6948,0x36);
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  *(undefined1 *)(param_1 + 5) = 1;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

