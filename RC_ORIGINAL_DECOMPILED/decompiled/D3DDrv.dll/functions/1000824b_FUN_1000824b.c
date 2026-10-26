/*
 * FUN_1000824b at 1000824b
 * undefined __cdecl FUN_1000824b(LPVOID param_1)
 * Address ranges: 1000824b-10008292
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000824b(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_1000a15a(9);
    puVar1 = (uint *)FUN_1000a20e((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_1000a239(puVar1,(uint)param_1);
      FUN_1000a1bb(9);
      return;
    }
    FUN_1000a1bb(9);
    HeapFree(DAT_101c3dec,0,param_1);
  }
  return;
}

