/*
 * FUN_005191b4 at 005191b4
 * undefined __register FUN_005191b4(int param_1, char param_2)
 * Address ranges: 005191b4-005191c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005191b4(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

