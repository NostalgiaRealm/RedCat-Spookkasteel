/*
 * FUN_00607c80 at 00607c80
 * undefined FUN_00607c80(void)
 * Address ranges: 00607c80-00607d30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00607c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar2 = in_stack_00000020;
  uVar3 = FUN_00608fff(&param_2,&stack0x00000010,0,0x17,in_stack_00000020 + 8);
  puVar1 = in_stack_0000001c;
  *in_stack_0000001c = *in_stack_0000001c | uVar3;
  if (*in_stack_0000001c == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    if (param_3._1_1_ != ':') goto LAB_00607cdf;
    FUN_0060045f();
    uVar3 = FUN_00608fff(&param_2,&stack0x00000010,0,0x3b,iVar2 + 4);
    *puVar1 = *puVar1 | uVar3;
  }
  else {
LAB_00607cdf:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    if (param_3._1_1_ == ':') {
      FUN_0060045f();
      uVar3 = FUN_00608fff(&param_2,&stack0x00000010,0,0x3b,iVar2);
      *puVar1 = *puVar1 | uVar3;
      goto LAB_00607d1c;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00607d1c:
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

