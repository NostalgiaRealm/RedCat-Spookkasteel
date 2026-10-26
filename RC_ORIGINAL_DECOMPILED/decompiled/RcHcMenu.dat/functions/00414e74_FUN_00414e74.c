/*
 * FUN_00414e74 at 00414e74
 * undefined __register FUN_00414e74(int * param_1, char param_2)
 * Address ranges: 00414e74-00414e9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414e74(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[2] != 0) {
    FUN_00402800(piVar1[2]);
  }
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

