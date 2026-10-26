/*
 * FUN_00411c6c at 00411c6c
 * undefined1 __register FUN_00411c6c(int param_1, int * param_2, int * param_3, int param_4)
 * Address ranges: 00411c6c-00411cae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00411c6c(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (-1 < param_4) {
    iVar1 = param_4 + 1;
    do {
      if (param_1 == *param_3) {
        FUN_00403e04(param_2,(undefined4 *)param_3[1]);
        return 1;
      }
      param_3 = param_3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

