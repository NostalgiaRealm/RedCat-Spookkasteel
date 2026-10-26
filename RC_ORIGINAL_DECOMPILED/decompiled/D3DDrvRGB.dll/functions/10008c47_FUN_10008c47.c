/*
 * FUN_10008c47 at 10008c47
 * int * __cdecl FUN_10008c47(uint * param_1)
 * Address ranges: 10008c47-10008c94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_10008c47(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_100190e4) {
    FUN_1000b2ca(9);
    piVar1 = FUN_1000b6d4(param_1);
    FUN_1000b32b(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_100ec82c,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}

