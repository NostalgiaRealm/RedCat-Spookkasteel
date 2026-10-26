/*
 * FUN_0061f728 at 0061f728
 * undefined FUN_0061f728(void)
 * Address ranges: 0061f728-0061f7c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_0061f728(char *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  char *pcVar3;
  void *local_8;
  
  local_8 = (void *)0x0;
  if (DAT_0070ffec == 0) {
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = *pcVar3;
      if (('@' < cVar1) && (cVar1 < '[')) {
        *pcVar3 = cVar1 + ' ';
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  else {
    _Size = FUN_0060f2f8(DAT_0070ffec,0x100,param_1,0xffffffff,0,0,0,1);
    if (((_Size != 0) && (local_8 = _malloc(_Size), local_8 != (void *)0x0)) &&
       (iVar2 = FUN_0060f2f8(DAT_0070ffec,0x100,param_1,0xffffffff,local_8,_Size,0,1), iVar2 != 0))
    {
      FUN_00611110(param_1,local_8);
    }
    FUN_0060b25d(local_8);
  }
  return param_1;
}

