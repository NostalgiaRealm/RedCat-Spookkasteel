/*
 * FUN_004ef08c at 004ef08c
 * undefined __register FUN_004ef08c(int param_1)
 * Address ranges: 004ef08c-004ef117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ef08c(int param_1)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (*(char *)(param_1 + 8) != '\x02')) {
    piVar1 = (int *)FUN_004ed8b0(*(int **)(param_1 + 4),*(char *)(param_1 + 8));
    FUN_004d6428(piVar1,(int *)(param_1 + 0xc));
    FUN_00403094(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 8) = 2;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00403d94("Assertion failure");
  }
  if (*(char *)(param_1 + 8) != '\x02') {
    FUN_00403d94("Assertion failure");
  }
  return;
}

