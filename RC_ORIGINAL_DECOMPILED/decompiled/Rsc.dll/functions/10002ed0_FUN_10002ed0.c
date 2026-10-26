/*
 * FUN_10002ed0 at 10002ed0
 * undefined __cdecl FUN_10002ed0(undefined * * param_1)
 * Address ranges: 10002ed0-10002f0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002ed0(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1002fa38) || (&DAT_1002fc98 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_10007490(((int)(param_1 + -0x400be8e) >> 5) + 0x1c);
  }
  return;
}

