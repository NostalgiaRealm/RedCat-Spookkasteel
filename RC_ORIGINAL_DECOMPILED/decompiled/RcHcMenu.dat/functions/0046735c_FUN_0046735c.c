/*
 * FUN_0046735c at 0046735c
 * undefined __register FUN_0046735c(int param_1)
 * Address ranges: 0046735c-00467390
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046735c(int param_1)

{
  uint uVar1;
  
  FUN_00472928(*(int *)(param_1 + 4));
  uVar1 = FUN_004714b4(*(int *)(param_1 + 4));
  *(char *)(param_1 + 8) = (char)uVar1;
  if ((char)uVar1 != '\0') {
    FUN_0047114c(*(int **)(param_1 + 4),'\0');
    (**(code **)(**(int **)(param_1 + 4) + 0x9c))();
  }
  return;
}

