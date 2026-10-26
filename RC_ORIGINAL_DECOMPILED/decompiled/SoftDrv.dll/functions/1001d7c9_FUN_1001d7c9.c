/*
 * FUN_1001d7c9 at 1001d7c9
 * undefined FUN_1001d7c9(void)
 * Address ranges: 1001d7c9-1001d85c;1001d86b-1001d8e5;1001d8f4-1001d905
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_1001d7c9(int param_1,int param_2)

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
  puStack_c = &DAT_100205c8;
  puStack_10 = &LAB_10018cf0;
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
      if (DAT_1020fd74 == 3) {
        if (uVar2 <= DAT_1020fd6c) {
          FUN_1001a434(9);
          local_8 = 0;
          local_24 = (LPVOID)FUN_100198c6(uVar2);
          local_8 = 0xffffffff;
          FUN_1001d862();
          _Size = uVar2;
          if (local_24 == (void *)0x0) goto LAB_1001d8b6;
LAB_1001d8a5:
          _memset(local_24,0,_Size);
        }
LAB_1001d8b1:
        if (local_24 != (LPVOID)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1020fd74 != 2) || (DAT_100239c4 < uVar3)) goto LAB_1001d8b1;
        FUN_1001a434(9);
        local_8 = 1;
        local_24 = (LPVOID)FUN_1001a073(uVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1001d8eb();
        _Size = uVar3;
        if (local_24 != (void *)0x0) goto LAB_1001d8a5;
      }
LAB_1001d8b6:
      local_24 = HeapAlloc(DAT_1020fd70,8,uVar3);
    }
    if (local_24 != (LPVOID)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10025d10 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
    iVar1 = FUN_1001a4aa(uVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
  } while( true );
}

