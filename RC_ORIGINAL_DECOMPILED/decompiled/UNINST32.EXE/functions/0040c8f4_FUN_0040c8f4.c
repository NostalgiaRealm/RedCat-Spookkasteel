/*
 * FUN_0040c8f4 at 0040c8f4
 * undefined __cdecl FUN_0040c8f4(uint * param_1)
 * Address ranges: 0040c8f4-0040c929
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040c8f4(uint *param_1)

{
  int *piVar1;
  
  if ((param_1 <= DAT_004132ac) && (piVar1 = FUN_0040dd50(param_1), piVar1 != (int *)0x0)) {
    return;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  HeapAlloc(DAT_00413de0,0,(int)param_1 + 0xfU & 0xfffffff0);
  return;
}

