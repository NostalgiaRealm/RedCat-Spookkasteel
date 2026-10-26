/*
 * FUN_004f9d00 at 004f9d00
 * undefined FUN_004f9d00(void)
 * Address ranges: 004f9d00-004f9d52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f9d00(int param_1,int param_2)

{
  char *_Str1;
  int iVar1;
  char *_Str2;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != *(int *)(param_1 + 8)) {
    do {
      _Str2 = "";
      if (*(char **)(param_2 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_2 + 4);
      }
      _Str1 = *(char **)(iVar2 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar1 = __strcmpi(_Str1,_Str2);
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != *(int *)(param_1 + 8));
  }
  return 0;
}

