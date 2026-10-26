/*
 * FUN_10007bb7 at 10007bb7
 * int * __cdecl FUN_10007bb7(int param_1, int param_2)
 * Address ranges: 10007bb7-10007c4a;10007c59-10007cd3;10007ce2-10007cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __cdecl FUN_10007bb7(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c5f0;
  puStack_10 = &LAB_100062e0;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_101f5ab4 == 3) {
        if (puVar2 <= DAT_101f5aac) {
          FUN_10006171(9);
          local_8 = 0;
          local_24 = FUN_10005603(puVar2);
          local_8 = 0xffffffff;
          FUN_10007c50();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10007ca4;
LAB_10007c93:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10007c9f:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_101f5ab4 != 2) || (DAT_10010bbc < puVar3)) goto LAB_10007c9f;
        FUN_10006171(9);
        local_8 = 1;
        local_24 = FUN_10005db0((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10007cd9();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10007c93;
      }
LAB_10007ca4:
      local_24 = HeapAlloc(DAT_101f5ab0,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100e3ae8 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_100063b8(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}

