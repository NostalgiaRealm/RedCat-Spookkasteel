/*
 * FUN_004f0020 at 004f0020
 * undefined __register FUN_004f0020(int param_1, char param_2)
 * Address ranges: 004f0020-004f0063
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f0020(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x206) != param_2) {
    *(char *)(param_1 + 0x206) = param_2;
    (**(code **)(**(int **)(param_1 + 0x200) + 0x5c))
              (*(int **)(param_1 + 0x200),
               CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x206)) ^ 1);
  }
  return;
}

