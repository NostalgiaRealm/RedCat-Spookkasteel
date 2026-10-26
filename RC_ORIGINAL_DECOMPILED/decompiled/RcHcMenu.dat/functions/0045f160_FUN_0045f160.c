/*
 * FUN_0045f160 at 0045f160
 * undefined __register FUN_0045f160(void)
 * Address ranges: 0045f160-0045f1de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045f160(void)

{
  VARIANTARG *in_stack_00000004;
  short *in_stack_00000008;
  char *in_stack_0000000c;
  undefined4 local_108 [64];
  int *local_8;
  
  if (*in_stack_00000008 == 9) {
    local_8 = *(int **)(in_stack_00000008 + 4);
  }
  else if (*in_stack_00000008 == 0x4009) {
    local_8 = (int *)**(undefined4 **)(in_stack_00000008 + 4);
  }
  else {
    FUN_0045f148();
  }
  FUN_0045f068(local_8,in_stack_0000000c + (byte)in_stack_0000000c[1] + 3,
               (byte)in_stack_0000000c[2] + 1,local_108);
  if (in_stack_00000004 != (VARIANTARG *)0x0) {
    FUN_00404de4(in_stack_00000004);
  }
  FUN_0045ed38(local_8,in_stack_0000000c,local_108,in_stack_00000004,(uint *)&stack0x00000010);
  return;
}

