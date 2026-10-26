/*
 * FUN_00409ed0 at 00409ed0
 * undefined __register FUN_00409ed0(int param_1)
 * Address ranges: 00409ed0-00409ee9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00409ed0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}

