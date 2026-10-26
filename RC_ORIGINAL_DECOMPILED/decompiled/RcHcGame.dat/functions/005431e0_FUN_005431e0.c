/*
 * FUN_005431e0 at 005431e0
 * undefined FUN_005431e0(void)
 * Address ranges: 005431e0-00543360
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005431e0(void)

{
  char cVar1;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063cb40;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00548a70();
  local_4._0_1_ = 1;
  while ((local_38 != 0 && ((local_34 - local_38 & 0xfffffffcU) != 0))) {
    FUN_00548a70();
    cVar1 = FUN_005448b0();
    if (cVar1 != '\0') {
      FUN_00548a70(local_3c);
      FUN_00543a60(local_2c);
      local_4._0_1_ = 2;
      FUN_004a6ef0();
      FUN_005ae390();
      local_4._0_1_ = 3;
      FUN_005aff00();
      local_4._0_1_ = 2;
      FUN_004040a0();
      local_4._0_1_ = 1;
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
    }
    FUN_0054a850();
    FUN_004f12a0();
  }
  FUN_005fe5f0();
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  FUN_005fe5f0();
  ExceptionList = local_c;
  return;
}

