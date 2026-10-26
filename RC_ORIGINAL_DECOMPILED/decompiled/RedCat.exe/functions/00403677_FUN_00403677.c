/*
 * FUN_00403677 at 00403677
 * undefined __cdecl FUN_00403677(LPVOID param_1)
 * Address ranges: 00403677-004036a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00403677(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_00403b93((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_00403bbe(puVar1,(uint)param_1);
      return;
    }
    HeapFree(DAT_00409364,0,param_1);
  }
  return;
}

