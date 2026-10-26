/*
 * FUN_005a8100 at 005a8100
 * undefined FUN_005a8100(void)
 * Address ranges: 005a8100-005a8174
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a8100(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x12f);
  local_4 = 0;
  if (*(char *)(param_1 + 0x5b) != '\0') {
    FUN_005a7550(1,1);
    *(undefined1 *)(param_1 + 0x5b) = 0;
  }
  FUN_005aa450(0);
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

