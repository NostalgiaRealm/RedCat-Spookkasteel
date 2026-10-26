/*
 * FUN_005cc6e0 at 005cc6e0
 * undefined FUN_005cc6e0(void)
 * Address ranges: 005cc6e0-005cc721
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc6e0(undefined4 *param_1,char *param_2)

{
  char *_Str2;
  int iVar1;
  
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    _Str2 = (char *)FUN_005cc350(param_1[3],s__Name__006aa44c);
    if ((_Str2 != (char *)0x0) && (iVar1 = __strcmpi(param_2,_Str2), iVar1 == 0)) break;
    param_1 = (undefined4 *)*param_1;
  }
  return param_1[3];
}

