/*
 * FUN_005e19e0 at 005e19e0
 * undefined FUN_005e19e0(void)
 * Address ranges: 005e19e0-005e1a51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005e19e0(undefined4 *param_1,char *param_2,undefined4 *param_3)

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
    param_2 = (char *)FUN_005e19b0(param_2,&DAT_0070f9e0);
    puVar3 = (undefined4 *)param_1[9];
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        return param_1;
      }
      iVar2 = __strcmpi((char *)*puVar3,&DAT_0070f9e0);
      if (iVar2 == 0) break;
      puVar3 = (undefined4 *)puVar3[10];
    }
    *param_3 = param_2;
    cVar1 = *param_2;
    param_1 = puVar3;
  } while (cVar1 != '\0');
  return puVar3;
}

