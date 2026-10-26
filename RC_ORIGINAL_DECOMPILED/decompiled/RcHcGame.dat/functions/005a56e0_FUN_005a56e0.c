/*
 * FUN_005a56e0 at 005a56e0
 * undefined FUN_005a56e0(void)
 * Address ranges: 005a56e0-005a5739
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005a56e0(int param_1,int param_2)

{
  char *_Str1;
  int iVar1;
  char *_Str2;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != *(int **)(param_1 + 0x30)) {
    do {
      _Str2 = "";
      if (*(char **)(param_2 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_2 + 4);
      }
      _Str1 = *(char **)(*piVar2 + 8);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar1 = __strcmpi(_Str1,_Str2);
      if (iVar1 == 0) {
        return *piVar2;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x30));
  }
  return 0;
}

