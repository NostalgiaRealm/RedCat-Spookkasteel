/*
 * FUN_005529e4 at 005529e4
 * undefined __register FUN_005529e4(int param_1)
 * Address ranges: 005529e4-00552a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005529e4(int param_1)

{
  if (*(char *)(param_1 + 500) != '\0') {
    FUN_00439d98(*(int **)(param_1 + 0x1f0));
    FUN_0044f5e0(*(int *)PTR_DAT_005725f0,0);
    *(undefined1 *)(param_1 + 500) = 0;
  }
  return;
}

