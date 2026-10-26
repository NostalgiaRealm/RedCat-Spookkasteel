/*
 * FUN_00607ec2 at 00607ec2
 * undefined FUN_00607ec2(void)
 * Address ranges: 00607ec2-00607f27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00607ec2(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  int local_8;
  
  uVar1 = FUN_00608fff(&param_2,&stack0x00000010,0,0x7f3,&local_8);
  *in_stack_0000001c = *in_stack_0000001c | uVar1;
  if ((*in_stack_0000001c & 2) == 0) {
    if (local_8 < 0x76c) {
      if (0x87 < local_8) {
        *in_stack_0000001c = *in_stack_0000001c | 2;
      }
    }
    else {
      local_8 = local_8 + -0x76c;
    }
  }
  if ((*in_stack_0000001c & 2) == 0) {
    *(int *)(in_stack_00000020 + 0x14) = local_8;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

