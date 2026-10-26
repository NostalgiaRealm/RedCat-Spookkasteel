/*
 * FUN_10011f72 at 10011f72
 * undefined __cdecl FUN_10011f72(int param_1)
 * Address ranges: 10011f72-10011f99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10011f72(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_1000e3b5();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_1000e3b5();
    *pDVar1 = 0x22;
    return;
  }
  return;
}

