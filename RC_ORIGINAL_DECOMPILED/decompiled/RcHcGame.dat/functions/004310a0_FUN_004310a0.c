/*
 * FUN_004310a0 at 004310a0
 * undefined FUN_004310a0(void)
 * Address ranges: 004310a0-0043116e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004310a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00623862;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064c430;
  local_4 = 3;
  if (param_1[0xcc] != 0) {
    FUN_00502220();
  }
  if (param_1[0xe4] != 0) {
    FUN_00502220();
  }
  if (param_1[0xcd] != 0) {
    FUN_00502220();
  }
  if (param_1[0xe6] != 0) {
    FUN_00502220();
  }
  iVar1 = param_1[0xe8];
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0xe8] = 0;
  }
  local_4._0_1_ = 1;
  FUN_004918a0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00480b30();
  local_4 = 0xffffffff;
  FUN_004d64f0();
  ExceptionList = local_c;
  return;
}

