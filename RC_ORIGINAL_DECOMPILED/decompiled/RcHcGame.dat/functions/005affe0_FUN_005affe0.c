/*
 * FUN_005affe0 at 005affe0
 * undefined FUN_005affe0(void)
 * Address ranges: 005affe0-005b0023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_005affe0(int param_1,int param_2)

{
  char *_Str1;
  int iVar1;
  char *_Str2;
  
  _Str2 = "";
  if (*(char **)(param_2 + 4) != (char *)0x0) {
    _Str2 = *(char **)(param_2 + 4);
  }
  _Str1 = *(char **)(param_1 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  iVar1 = __strcmpi(_Str1,_Str2);
  if (iVar1 == 0) {
    return 1;
  }
  return (iVar1 < 1) - 1U & 2;
}

