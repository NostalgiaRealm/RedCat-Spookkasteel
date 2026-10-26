/*
 * FUN_1000fc73 at 1000fc73
 * undefined __cdecl FUN_1000fc73(int param_1)
 * Address ranges: 1000fc73-1000fc9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000fc73(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_1000c3c5();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_1000c3c5();
    *pDVar1 = 0x22;
    return;
  }
  return;
}

