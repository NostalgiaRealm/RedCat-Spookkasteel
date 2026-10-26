/*
 * FUN_004c8df4 at 004c8df4
 * undefined __register FUN_004c8df4(int * param_1, int param_2)
 * Address ranges: 004c8df4-004c8e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c8df4(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_2 + 4) == param_1[0x4e]) &&
     (piVar1 = *(int **)(param_2 + 8), piVar1 != param_1)) {
    if ((*(char *)((int)piVar1 + 0x131) != '\0') && (*(char *)((int)param_1 + 0x131) != '\0')) {
      *(undefined1 *)((int)param_1 + 0x131) = 0;
      *(undefined1 *)((int)param_1 + 0x161) = 0;
      (**(code **)(*param_1 + 0x74))();
    }
    *(char *)(param_1 + 0x4a) = (char)piVar1[0x4a];
  }
  return;
}

