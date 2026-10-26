/*
 * FUN_004d0424 at 004d0424
 * undefined4 __register FUN_004d0424(int param_1)
 * Address ranges: 004d0424-004d045d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004d0424(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    piVar1 = FUN_004b0c90((int *)&LAB_004b0c7c,'\x01',DAT_00571d24);
    *(int **)(param_1 + 8) = piVar1;
  }
  return *(undefined4 *)(param_1 + 8);
}

