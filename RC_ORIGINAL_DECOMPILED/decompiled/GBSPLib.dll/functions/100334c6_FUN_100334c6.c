/*
 * FUN_100334c6 at 100334c6
 * undefined FUN_100334c6(void)
 * Address ranges: 100334c6-100335f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_100334c6(char *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  void *local_c;
  
  local_c = (void *)0x0;
  if (DAT_1052a5d8 == 0) {
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = *pcVar3;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar3 = cVar1 + -0x20;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1052a75c);
    bVar4 = DAT_1052a758 == 0;
    if (!bVar4) {
      InterlockedDecrement((LONG *)&DAT_1052a75c);
      FUN_1002e819(0x13);
    }
    if (DAT_1052a5d8 == 0) {
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_1052a75c);
      }
      else {
        FUN_1002e87a(0x13);
      }
      cVar1 = *param_1;
      pcVar3 = param_1;
      while (cVar1 != '\0') {
        cVar1 = *pcVar3;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar3 = cVar1 + -0x20;
        }
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
    }
    else {
      _Size = FUN_10032532(DAT_1052a5d8,0x200,param_1,0xffffffff,0,0,0,1);
      if (((_Size != 0) && (local_c = _malloc(_Size), local_c != (void *)0x0)) &&
         (iVar2 = FUN_10032532(DAT_1052a5d8,0x200,param_1,0xffffffff,local_c,_Size,0,1), iVar2 != 0)
         ) {
        FUN_10030dc0(param_1,local_c);
      }
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_1052a75c);
      }
      else {
        FUN_1002e87a(0x13);
      }
      FUN_100284b6(local_c);
    }
  }
  return param_1;
}

