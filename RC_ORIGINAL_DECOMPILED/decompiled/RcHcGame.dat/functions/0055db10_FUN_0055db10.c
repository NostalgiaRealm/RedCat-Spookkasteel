/*
 * FUN_0055db10 at 0055db10
 * undefined FUN_0055db10(void)
 * Address ranges: 0055db10-0055db5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0055db10(int param_1)

{
  char *_Str1;
  int iVar1;
  uint uVar2;
  char *_Str2;
  
  uVar2 = 0;
  if (DAT_006c8d98 != 0) {
    _Str2 = &DAT_006ba86d;
    do {
      _Str1 = *(char **)(param_1 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar1 = __strcmpi(_Str1,_Str2);
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      _Str2 = _Str2 + 0xb7c;
    } while (uVar2 < DAT_006c8d98);
  }
  return 0xffffffff;
}

