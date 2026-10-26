/*
 * FUN_10024600 at 10024600
 * undefined FUN_10024600(void)
 * Address ranges: 10024600-10024671
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10024600(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  cVar1 = *param_2;
  do {
    if (cVar1 == '\\') {
      return (undefined4 *)0x0;
    }
    *param_3 = param_2;
    if (*param_2 == '\0') {
      return param_1;
    }
    param_2 = (char *)FUN_100245d0(param_2,&DAT_1052a2cc);
    puVar3 = (undefined4 *)param_1[9];
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        return param_1;
      }
      iVar2 = FUN_100332c0(*puVar3,&DAT_1052a2cc);
      if (iVar2 == 0) break;
      puVar3 = (undefined4 *)puVar3[10];
    }
    *param_3 = param_2;
    cVar1 = *param_2;
    param_1 = puVar3;
  } while (cVar1 != '\0');
  return puVar3;
}

