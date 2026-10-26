/*
 * FUN_005ed300 at 005ed300
 * undefined FUN_005ed300(void)
 * Address ranges: 005ed300-005ed357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005ed300(int param_1,int param_2)

{
  char *_Str2;
  int iVar1;
  char *_Str1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != *(int **)(param_1 + 0xc)) {
    do {
      _Str2 = *(char **)(*piVar2 + 0x10);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      _Str1 = *(char **)(param_2 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar1 = __strcmpi(_Str1,_Str2);
      if (iVar1 == 0) {
        return *piVar2;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0xc));
  }
  return 0;
}

