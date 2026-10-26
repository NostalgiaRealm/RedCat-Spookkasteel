/*
 * FUN_00420770 at 00420770
 * undefined FUN_00420770(void)
 * Address ranges: 00420770-004207ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00420770(undefined4 *param_1)

{
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 auStack_28 [4];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006220e8;
  local_c = ExceptionList;
  local_2c = auStack_28;
  local_30 = 0x420798;
  ExceptionList = &local_c;
  FUN_004237d0();
  local_4 = 0;
  local_34 = *param_1;
  local_30 = param_1[1];
  uStack_38 = param_1[2];
  local_2c = (undefined1 *)uStack_38;
  FUN_004042e0(&uStack_38);
  local_4 = 0xffffffff;
  FUN_00446cd0(local_1c);
  ExceptionList = local_c;
  return;
}

