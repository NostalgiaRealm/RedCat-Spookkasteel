/*
 * FUN_00437560 at 00437560
 * undefined __register FUN_00437560(int param_1, int param_2)
 * Address ranges: 00437560-00437585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437560(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  if ((*(char *)(param_1 + 0x17c) != '\0') && (*(int *)(param_1 + 0x148) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x148) + 0x28))
              (*(int **)(param_1 + 0x148),*(undefined4 *)(param_2 + 8));
  }
  return;
}

