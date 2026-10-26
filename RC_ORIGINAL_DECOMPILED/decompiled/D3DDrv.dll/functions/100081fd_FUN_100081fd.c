/*
 * FUN_100081fd at 100081fd
 * int * __cdecl FUN_100081fd(uint * param_1)
 * Address ranges: 100081fd-1000824a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_100081fd(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10015c24) {
    FUN_1000a15a(9);
    piVar1 = FUN_1000a564(param_1);
    FUN_1000a1bb(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_101c3dec,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}

