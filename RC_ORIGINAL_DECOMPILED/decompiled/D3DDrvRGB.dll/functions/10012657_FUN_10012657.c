/*
 * FUN_10012657 at 10012657
 * uint * __cdecl FUN_10012657(uint * param_1)
 * Address ranges: 10012657-1001278a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __cdecl FUN_10012657(uint *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  LPWSTR local_c;
  
  local_c = (LPWSTR)0x0;
  if (DAT_100ec35c == 0) {
    cVar1 = (char)*param_1;
    puVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = (char)*puVar3;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *(char *)puVar3 = cVar1 + -0x20;
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      cVar1 = *(char *)puVar3;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100ec4bc);
    bVar4 = DAT_100ec4b8 == 0;
    if (!bVar4) {
      InterlockedDecrement((LONG *)&DAT_100ec4bc);
      FUN_1000b2ca(0x13);
    }
    if (DAT_100ec35c == 0) {
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_100ec4bc);
      }
      else {
        FUN_1000b32b(0x13);
      }
      cVar1 = (char)*param_1;
      puVar3 = param_1;
      while (cVar1 != '\0') {
        cVar1 = (char)*puVar3;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *(char *)puVar3 = cVar1 + -0x20;
        }
        puVar3 = (uint *)((int)puVar3 + 1);
        cVar1 = *(char *)puVar3;
      }
    }
    else {
      _Size = FUN_10010c56(DAT_100ec35c,0x200,(char *)param_1,-1,(LPWSTR)0x0,0,0,1);
      if (((_Size != 0) && (local_c = _malloc(_Size), local_c != (LPWSTR)0x0)) &&
         (iVar2 = FUN_10010c56(DAT_100ec35c,0x200,(char *)param_1,-1,local_c,_Size,0,1), iVar2 != 0)
         ) {
        FUN_1000dd20(param_1,(uint *)local_c);
      }
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_100ec4bc);
      }
      else {
        FUN_1000b32b(0x13);
      }
      FUN_10008c95(local_c);
    }
  }
  return param_1;
}

