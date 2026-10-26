/*
 * FUN_1000c0d5 at 1000c0d5
 * SIZE_T __cdecl FUN_1000c0d5(LPCVOID param_1)
 * Address ranges: 1000c0d5-1000c119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

SIZE_T __cdecl FUN_1000c0d5(LPCVOID param_1)

{
  uint uVar1;
  SIZE_T SVar2;
  
  FUN_1000b2ca(9);
  uVar1 = FUN_1000b37e((int)param_1);
  if (uVar1 == 0) {
    FUN_1000b32b(9);
    SVar2 = HeapSize(DAT_100ec82c,0,param_1);
  }
  else {
    SVar2 = *(int *)((int)param_1 + -4) - 9;
    FUN_1000b32b(9);
  }
  return SVar2;
}

