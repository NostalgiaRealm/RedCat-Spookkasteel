/*
 * FUN_00415490 at 00415490
 * undefined __register FUN_00415490(int param_1, char * param_2)
 * Address ranges: 00415490-004154c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00415490(int param_1,char *param_2)

{
  undefined4 uVar1;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_004097ac(param_2,*(char **)(param_1 + 0x70));
  if (((char)uVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    (*in_stack_0000000c)(in_stack_00000010,param_1);
    FUN_00403db0((int *)(param_1 + 0x70));
  }
  return;
}

