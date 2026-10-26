/*
 * FUN_0051cad4 at 0051cad4
 * undefined __register FUN_0051cad4(int param_1, int param_2)
 * Address ranges: 0051cad4-0051cb0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051cad4(int param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) != param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    piVar1 = (int *)FUN_0051e1b8(*(int **)(param_1 + 0x3c));
    FUN_00523024(piVar1,param_1);
  }
  return;
}

