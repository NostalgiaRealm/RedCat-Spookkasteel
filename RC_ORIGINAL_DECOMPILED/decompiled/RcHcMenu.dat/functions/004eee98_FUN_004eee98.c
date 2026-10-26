/*
 * FUN_004eee98 at 004eee98
 * int __register FUN_004eee98(int * param_1)
 * Address ranges: 004eee98-004eeece
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004eee98(int *param_1)

{
  if ((char)param_1[2] == '\0') {
    FUN_004eda88(param_1,(int *)param_1[1]);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1[1];
}

