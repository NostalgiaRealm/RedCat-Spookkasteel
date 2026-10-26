/*
 * FUN_10002520 at 10002520
 * undefined FUN_10002520(void)
 * Address ranges: 10002520-10002552
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002520(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_10018dc8(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x10) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

