/*
 * FUN_0045f864 at 0045f864
 * undefined __register FUN_0045f864(int param_1)
 * Address ranges: 0045f864-0045f896
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045f864(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    piVar1 = FUN_0045e580((int *)&PTR_FUN_0045dfd0,'\x01',param_1);
    *(int **)(param_1 + 8) = piVar1;
  }
  FUN_0045e5d0(*(uint *)(param_1 + 8));
  return;
}

