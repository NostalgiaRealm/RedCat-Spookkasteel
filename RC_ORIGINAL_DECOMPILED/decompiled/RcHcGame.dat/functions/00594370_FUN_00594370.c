/*
 * FUN_00594370 at 00594370
 * undefined FUN_00594370(void)
 * Address ranges: 00594370-005943c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00594370(int param_1,int *param_2)

{
  int iVar1;
  char *_Str1;
  int iVar2;
  char *_Str2;
  
  iVar1 = FUN_005ac520();
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    _Str2 = "";
    if (*(char **)(param_1 + 4) != (char *)0x0) {
      _Str2 = *(char **)(param_1 + 4);
    }
    _Str1 = *(char **)(iVar1 + 0x28);
    if (_Str1 == (char *)0x0) {
      _Str1 = "";
    }
    iVar2 = __strcmpi(_Str1,_Str2);
    if (iVar2 == 0) break;
    iVar1 = FUN_005ac530();
  }
  *param_2 = iVar1;
  return 1;
}

