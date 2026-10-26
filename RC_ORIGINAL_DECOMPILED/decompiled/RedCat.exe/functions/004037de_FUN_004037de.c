/*
 * FUN_004037de at 004037de
 * undefined __cdecl FUN_004037de(uint * param_1)
 * Address ranges: 004037de-00403813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_004037de(uint *param_1)

{
  int *piVar1;
  
  if ((param_1 <= DAT_00407930) && (piVar1 = FUN_00403ee9(param_1), piVar1 != (int *)0x0)) {
    return;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  HeapAlloc(DAT_00409364,0,(int)param_1 + 0xfU & 0xfffffff0);
  return;
}

