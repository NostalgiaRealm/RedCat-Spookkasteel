/*
 * FUN_00403224 at 00403224
 * undefined __register FUN_00403224(int * param_1, int param_2)
 * Address ranges: 00403224-0040323e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403224(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    while (*piVar1 != param_2) {
      piVar1 = *(int **)(*piVar1 + -0x24);
      if (piVar1 == (int *)0x0) {
        FUN_00402874(CONCAT31((int3)((uint)param_1 >> 8),10));
        return;
      }
    }
  }
  return;
}

