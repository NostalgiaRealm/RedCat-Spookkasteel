/*
 * FUN_00438658 at 00438658
 * undefined __register FUN_00438658(int param_1)
 * Address ranges: 00438658-0043866d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438658(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xac))(piVar1,param_1);
  }
  return;
}

