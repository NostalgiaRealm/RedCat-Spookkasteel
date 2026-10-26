/*
 * FUN_10004488 at 10004488
 * undefined __cdecl FUN_10004488(uint param_1)
 * Address ranges: 10004488-100044b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10004488(uint param_1)

{
  if ((0x1000e907 < param_1) && (param_1 < 0x1000eb69)) {
    FUN_10006171(((int)(param_1 + 0xefff16f8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

