/*
 * FUN_0040a77d at 0040a77d
 * undefined __cdecl FUN_0040a77d(int param_1)
 * Address ranges: 0040a77d-0040a793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040a77d(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x104) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x104));
  }
  return;
}

