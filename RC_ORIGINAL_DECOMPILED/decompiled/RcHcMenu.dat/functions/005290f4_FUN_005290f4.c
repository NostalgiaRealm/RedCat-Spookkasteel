/*
 * FUN_005290f4 at 005290f4
 * undefined __register FUN_005290f4(int * param_1)
 * Address ranges: 005290f4-0052911f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005290f4(int *param_1)

{
  int *piVar1;
  
  if (param_1[0xa7] == 0) {
    piVar1 = (int *)FUN_005285b8(param_1);
    (**(code **)(*piVar1 + 0xcc))();
  }
  return;
}

