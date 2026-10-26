/*
 * FUN_1000c244 at 1000c244
 * int * __cdecl FUN_1000c244(int param_1, int param_2)
 * Address ranges: 1000c244-1000c2d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_1000c244(int param_1,int param_2)

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
      if (_Size < DAT_10015c24 || (int)_Size - (int)DAT_10015c24 == 0) {
        FUN_1000a15a(9);
        piVar1 = FUN_1000a564(_Size);
        FUN_1000a1bb(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_101c3dec,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_101c3720 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10009ff9(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}

