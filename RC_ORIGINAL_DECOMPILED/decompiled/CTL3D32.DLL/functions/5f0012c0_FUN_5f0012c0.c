/*
 * FUN_5f0012c0 at 5f0012c0
 * undefined __cdecl FUN_5f0012c0(undefined4 * param_1)
 * Address ranges: 5f0012c0-5f0012d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_5f0012c0(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}

