/*
 * FUN_00448c5c at 00448c5c
 * int __register FUN_00448c5c(void)
 * Address ranges: 00448c5c-00448cba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00448c5c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int local_8;
  
  sVar1 = *(short *)(*(int *)(in_stack_00000004 + -8) + 6);
  FUN_00438988(*(int **)(*(int *)(in_stack_00000004 + -4) + 4));
  iVar2 = (**(code **)PTR_DAT_00572078)();
  iVar3 = (int)sVar1;
  if (iVar2 != 0) {
    iVar3 = local_8;
  }
  return iVar3;
}

