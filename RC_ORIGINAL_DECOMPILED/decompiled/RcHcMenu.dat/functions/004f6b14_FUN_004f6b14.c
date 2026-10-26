/*
 * FUN_004f6b14 at 004f6b14
 * undefined __register FUN_004f6b14(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004f6b14-004f6b35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6b14(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if ((char)param_2 != *(char *)(param_1 + 0x1f)) {
    *(char *)(param_1 + 0x1f) = (char)param_2;
    piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x18);
    if (piVar1 != (int *)0x0) {
      FUN_00403270(piVar1,param_2,param_3);
    }
  }
  return;
}

