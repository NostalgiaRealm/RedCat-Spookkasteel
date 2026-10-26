/*
 * FUN_004f8ba4 at 004f8ba4
 * undefined __register FUN_004f8ba4(int param_1, char param_2, undefined4 param_3)
 * Address ranges: 004f8ba4-004f8bde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8ba4(int param_1,char param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x204) != param_2) {
    *(char *)(param_1 + 0x204) = param_2;
    FUN_0043262c(*(int **)(param_1 + 0x200),CONCAT31((int3)((uint)param_1 >> 8),param_2),param_3);
  }
  return;
}

