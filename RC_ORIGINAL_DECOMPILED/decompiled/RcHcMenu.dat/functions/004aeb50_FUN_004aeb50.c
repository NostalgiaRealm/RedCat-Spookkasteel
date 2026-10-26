/*
 * FUN_004aeb50 at 004aeb50
 * undefined __register FUN_004aeb50(int param_1, char param_2)
 * Address ranges: 004aeb50-004aeba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aeb50(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x17a) != param_2) {
    if (*(int *)(param_1 + 0x174) != 0) {
      FUN_004ad864(*(int *)(param_1 + 0x174),param_1,*(undefined1 *)(param_1 + 0x17a),param_2);
    }
    *(char *)(param_1 + 0x17a) = param_2;
  }
  return;
}

