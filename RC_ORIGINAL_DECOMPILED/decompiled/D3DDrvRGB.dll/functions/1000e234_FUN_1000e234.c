/*
 * FUN_1000e234 at 1000e234
 * int * __cdecl FUN_1000e234(int param_1, int param_2)
 * Address ranges: 1000e234-1000e2c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1000e234(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if (_Size < DAT_100190e4 || (int)_Size - (int)DAT_100190e4 == 0) {
        FUN_1000b2ca(9);
        piVar1 = FUN_1000b6d4(_Size);
        FUN_1000b32b(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_100ec82c,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_100ec15c == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_1000b169(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}

