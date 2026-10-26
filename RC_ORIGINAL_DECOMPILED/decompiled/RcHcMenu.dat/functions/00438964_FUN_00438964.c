/*
 * FUN_00438964 at 00438964
 * undefined __register FUN_00438964(int * param_1)
 * Address ranges: 00438964-00438987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438964(int *param_1)

{
  if (param_1[0x53] == 0) {
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_00438964((int *)param_1[9]);
    }
    (**(code **)(*param_1 + 0x8c))();
  }
  return;
}

