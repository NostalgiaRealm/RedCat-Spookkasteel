/*
 * FUN_0043ab04 at 0043ab04
 * undefined __register FUN_0043ab04(int param_1)
 * Address ranges: 0043ab04-0043ab17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043ab04(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  if (*(int *)(param_1 + 0x6c) < 1) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_0043c2e4(param_1);
  }
  return;
}

