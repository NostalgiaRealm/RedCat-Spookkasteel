/*
 * FUN_005e94b0 at 005e94b0
 * undefined FUN_005e94b0(void)
 * Address ranges: 005e94b0-005e957f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e94b0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00646c10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650aa4;
  local_4 = 6;
  FUN_005ed250();
  local_4._0_1_ = 5;
  FUN_005ed250();
  local_4._0_1_ = 4;
  FUN_005ed250();
  local_4._0_1_ = 3;
  FUN_005ed250();
  local_4._0_1_ = 2;
  FUN_005ed250();
  local_4._0_1_ = 1;
  FUN_005ed250();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ed250();
  *param_1 = &PTR_FUN_00650a74;
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = local_c;
  return;
}

