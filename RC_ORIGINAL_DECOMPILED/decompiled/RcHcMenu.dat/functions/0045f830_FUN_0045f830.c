/*
 * FUN_0045f830 at 0045f830
 * undefined __register FUN_0045f830(int param_1)
 * Address ranges: 0045f830-0045f862
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045f830(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    piVar1 = FUN_0045e580((int *)&PTR_FUN_0045dfd0,'\x01',param_1);
    *(int **)(param_1 + 4) = piVar1;
  }
  FUN_0045e5d0(*(uint *)(param_1 + 4));
  return;
}

