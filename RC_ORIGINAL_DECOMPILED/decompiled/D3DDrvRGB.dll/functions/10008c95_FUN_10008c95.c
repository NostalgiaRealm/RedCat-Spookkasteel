/*
 * FUN_10008c95 at 10008c95
 * undefined __cdecl FUN_10008c95(LPVOID param_1)
 * Address ranges: 10008c95-10008cdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10008c95(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_1000b2ca(9);
    puVar1 = (uint *)FUN_1000b37e((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_1000b3a9(puVar1,(uint)param_1);
      FUN_1000b32b(9);
      return;
    }
    FUN_1000b32b(9);
    HeapFree(DAT_100ec82c,0,param_1);
  }
  return;
}

