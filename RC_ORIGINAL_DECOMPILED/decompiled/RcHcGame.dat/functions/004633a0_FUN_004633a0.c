/*
 * FUN_004633a0 at 004633a0
 * undefined FUN_004633a0(void)
 * Address ranges: 004633a0-004634af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004633a0(undefined4 *param_1,undefined **param_2)

{
  char cVar1;
  undefined1 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 in_stack_00000030;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006273b8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0058d500();
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined1 *)((int)param_1 + 0x195) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = in_stack_0000002c;
  in_stack_0000002c = param_1 + 0x68;
  FUN_005ab450(&param_2);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0x6d) = in_stack_00000018;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  FUN_0040cc00(&stack0x00000018,0,0xffffffff);
  param_1[0x71] = in_stack_00000028;
  param_1[0x68] = &PTR_FUN_0064aba4;
  param_1[0x72] = 0x41c80000;
  param_1[0x73] = in_stack_00000030;
  *param_1 = &PTR_FUN_0064d770;
  local_4 = 0xffffffff;
  param_2 = &PTR_FUN_0064abb0;
  if (in_stack_0000001c != 0) {
    cVar1 = *(char *)(in_stack_0000001c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(in_stack_0000001c + -1));
    }
    else {
      *(char *)(in_stack_0000001c + -1) = cVar1 + -1;
    }
  }
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return param_1;
}

