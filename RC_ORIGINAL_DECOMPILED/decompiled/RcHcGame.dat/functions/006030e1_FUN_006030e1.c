/*
 * FUN_006030e1 at 006030e1
 * undefined FUN_006030e1(void)
 * Address ranges: 006030e1-006031a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006030e1(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  sVar3 = FUN_0060a03a(0x3a);
  iVar2 = in_stack_00000020;
  uVar4 = FUN_006053fb(&param_2,&stack0x00000010,0,0x17,in_stack_00000020 + 8);
  puVar1 = in_stack_0000001c;
  *in_stack_0000001c = *in_stack_0000001c | uVar4;
  if (*in_stack_0000001c == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    if (param_3._2_2_ != sVar3) goto LAB_0060314f;
    FUN_00605560();
    uVar4 = FUN_006053fb(&param_2,&stack0x00000010,0,0x3b,iVar2 + 4);
    *puVar1 = *puVar1 | uVar4;
  }
  else {
LAB_0060314f:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    if (param_3._2_2_ == sVar3) {
      FUN_00605560();
      uVar4 = FUN_006053fb(&param_2,&stack0x00000010,0,0x3b,iVar2);
      *puVar1 = *puVar1 | uVar4;
      goto LAB_00603190;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00603190:
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

