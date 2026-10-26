/*
 * FUN_004686f8 at 004686f8
 * undefined __register FUN_004686f8(int param_1)
 * Address ranges: 004686f8-0046872d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004686f8(int param_1)

{
  int *piVar1;
  
  while (0 < (int)(*(undefined4 **)(param_1 + 4))[2]) {
    piVar1 = (int *)FUN_0041246c(*(undefined4 **)(param_1 + 4));
    piVar1[10] = 0;
    FUN_00403094(piVar1);
    FUN_00412224(*(int **)(param_1 + 4),(*(int **)(param_1 + 4))[2] + -1);
  }
  FUN_00468618(param_1);
  return;
}

