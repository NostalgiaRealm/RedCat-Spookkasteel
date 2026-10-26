/*
 * FUN_00424280 at 00424280
 * int __register FUN_00424280(int * param_1, int param_2)
 * Address ranges: 00424280-0042429b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00424280(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < param_2) {
    do {
      param_1 = param_1 + 1;
      if (*param_1 < iVar1) {
        iVar1 = *param_1;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}

