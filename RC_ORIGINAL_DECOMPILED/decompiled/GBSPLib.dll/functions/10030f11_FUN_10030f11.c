/*
 * FUN_10030f11 at 10030f11
 * undefined FUN_10030f11(void)
 * Address ranges: 10030f11-10030fa4;10030fb3-1003102d;1003103c-1003104d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_10030f11(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint _Size;
  LPVOID local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10034ef0;
  puStack_10 = &LAB_10027cac;
  local_14 = ExceptionList;
  uVar2 = param_1 * param_2;
  uVar3 = uVar2;
  ExceptionList = &local_14;
  if (uVar2 < 0xffffffe1) {
    if (uVar2 == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
    ExceptionList = &local_14;
  }
  do {
    local_24 = (LPVOID)0x0;
    if (uVar3 < 0xffffffe1) {
      if (DAT_1052a9b8 == 3) {
        if (uVar2 <= DAT_1052a9b0) {
          FUN_1002e819(9);
          local_8 = 0;
          local_24 = (LPVOID)FUN_1002d90c(uVar2);
          local_8 = 0xffffffff;
          FUN_10030faa();
          _Size = uVar2;
          if (local_24 == (void *)0x0) goto LAB_10030ffe;
LAB_10030fed:
          _memset(local_24,0,_Size);
        }
LAB_10030ff9:
        if (local_24 != (LPVOID)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1052a9b8 != 2) || (DAT_1003f374 < uVar3)) goto LAB_10030ff9;
        FUN_1002e819(9);
        local_8 = 1;
        local_24 = (LPVOID)FUN_1002e3af(uVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10031033();
        _Size = uVar3;
        if (local_24 != (void *)0x0) goto LAB_10030fed;
      }
LAB_10030ffe:
      local_24 = HeapAlloc(DAT_1052a9b4,8,uVar3);
    }
    if (local_24 != (LPVOID)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1052a5b0 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
    iVar1 = FUN_1002f103(uVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
  } while( true );
}

