/*
 * FUN_0046cb7c at 0046cb7c
 * undefined __register FUN_0046cb7c(int param_1)
 * Address ranges: 0046cb7c-0046cb94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046cb7c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x210))
                            (*(int **)(param_1 + 0x28),param_1,1);
  FUN_00403094(piVar1);
  return;
}

