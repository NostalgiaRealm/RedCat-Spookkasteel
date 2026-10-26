/*
 * FUN_00458420 at 00458420
 * undefined4 __register FUN_00458420(char * param_1, char param_2, int * param_3)
 * Address ranges: 00458420-00458445
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00458420(char *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    piVar1 = (int *)(param_1 + -4);
    do {
      iVar2 = iVar2 + 1;
      if (*param_1 == param_2) {
        *param_3 = iVar2;
        return 1;
      }
      param_1 = param_1 + 1;
    } while (iVar2 != *piVar1);
  }
  *param_3 = 0;
  return 0;
}

