/*
 * FUN_0051c8a0 at 0051c8a0
 * undefined __register FUN_0051c8a0(int param_1, char param_2)
 * Address ranges: 0051c8a0-0051c8d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051c8a0(int param_1,char param_2)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 4) != param_2) {
    *(char *)(param_1 + 4) = param_2;
    piVar1 = (int *)FUN_0051e1b8(*(int **)(param_1 + 0x3c));
    FUN_00523024(piVar1,param_1);
  }
  return;
}

