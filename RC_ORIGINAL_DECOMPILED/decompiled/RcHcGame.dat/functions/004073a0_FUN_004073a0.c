/*
 * FUN_004073a0 at 004073a0
 * undefined FUN_004073a0(void)
 * Address ranges: 004073a0-004073fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004073a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00406da0(param_2);
  local_4 = 0;
  iVar1 = FUN_00429fd0();
  param_1[0xc] = *(undefined4 *)(iVar1 + 0x2c);
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_0064a7f4;
  ExceptionList = local_c;
  return param_1;
}

