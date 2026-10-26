/*
 * FUN_00444490 at 00444490
 * undefined4 __register FUN_00444490(int param_1)
 * Address ranges: 00444490-004444a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00444490(int param_1)

{
  if ((*(char *)(param_1 + 0x34) == '\0') && (*(int *)(param_1 + 0x3c) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

