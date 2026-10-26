/*
 * FUN_10024570 at 10024570
 * undefined FUN_10024570(void)
 * Address ranges: 10024570-100245c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10024570(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_2;
  do {
    if (cVar1 == '\\') {
      return (undefined4 *)0x0;
    }
    if (cVar1 == '\0') {
      return param_1;
    }
    param_2 = (char *)FUN_100245d0(param_2,&DAT_1052a1c8);
    param_1 = (undefined4 *)param_1[9];
    while( true ) {
      if (param_1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      iVar2 = FUN_100332c0(*param_1,&DAT_1052a1c8);
      if (iVar2 == 0) break;
      param_1 = (undefined4 *)param_1[10];
    }
    cVar1 = *param_2;
  } while (cVar1 != '\0');
  return param_1;
}

