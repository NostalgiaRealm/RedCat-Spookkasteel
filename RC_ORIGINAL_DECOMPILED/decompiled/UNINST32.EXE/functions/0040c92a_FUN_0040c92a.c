/*
 * FUN_0040c92a at 0040c92a
 * undefined __cdecl FUN_0040c92a(LPVOID param_1)
 * Address ranges: 0040c92a-0040c958
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040c92a(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_0040d9fa((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_0040da25(puVar1,(uint)param_1);
      return;
    }
    HeapFree(DAT_00413de0,0,param_1);
  }
  return;
}

