/*
 * FUN_0042d2d8 at 0042d2d8
 * undefined __register FUN_0042d2d8(int param_1)
 * Address ranges: 0042d2d8-0042d303
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d2d8(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) &&
     (*(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1, *(int *)(param_1 + 4) == 0)) {
    CloseClipboard();
    if (*(char *)(param_1 + 0xc) != '\0') {
      FUN_00448628(*(HWND *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

