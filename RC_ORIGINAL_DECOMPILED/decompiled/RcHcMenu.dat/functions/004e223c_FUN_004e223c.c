/*
 * FUN_004e223c at 004e223c
 * undefined __register FUN_004e223c(int * param_1, int param_2)
 * Address ranges: 004e223c-004e226d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e223c(int *param_1,int param_2)

{
  if (param_1[0xbd] != param_2) {
    param_1[0xbd] = param_2;
    FUN_004e1918(param_1);
  }
  return;
}

