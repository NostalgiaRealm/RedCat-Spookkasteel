/*
 * FUN_100044da at 100044da
 * undefined __cdecl FUN_100044da(uint param_1)
 * Address ranges: 100044da-10004508
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100044da(uint param_1)

{
  if ((0x1000e907 < param_1) && (param_1 < 0x1000eb69)) {
    FUN_100061d2(((int)(param_1 + 0xefff16f8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

