/*
 * FUN_005e1950 at 005e1950
 * undefined FUN_005e1950(void)
 * Address ranges: 005e1950-005e19a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005e1950(undefined4 *param_1,char *param_2)

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
    param_2 = (char *)FUN_005e19b0(param_2,&DAT_0070f8dc);
    param_1 = (undefined4 *)param_1[9];
    while( true ) {
      if (param_1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      iVar2 = __strcmpi((char *)*param_1,&DAT_0070f8dc);
      if (iVar2 == 0) break;
      param_1 = (undefined4 *)param_1[10];
    }
    cVar1 = *param_2;
  } while (cVar1 != '\0');
  return param_1;
}

