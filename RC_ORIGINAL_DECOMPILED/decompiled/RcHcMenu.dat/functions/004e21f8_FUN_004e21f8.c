/*
 * FUN_004e21f8 at 004e21f8
 * undefined __register FUN_004e21f8(int * param_1, int param_2)
 * Address ranges: 004e21f8-004e223b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e21f8(int *param_1,int param_2)

{
  if (param_1[0xbb] != param_2) {
    param_1[0xbc] = param_1[0xbb];
    param_1[0xbb] = param_2;
    FUN_004e1918(param_1);
  }
  return;
}

