/*
 * FUN_00511810 at 00511810
 * undefined FUN_00511810(void)
 * Address ranges: 00511810-00511881
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00511810(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *_Str1;
  int iVar3;
  char *_Str2;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x17c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x180) - *(int *)(param_1 + 0x17c) >> 2;
    }
    if (iVar1 <= iVar3) {
      return -1;
    }
    _Str2 = "";
    if (*(char **)(param_2 + 4) != (char *)0x0) {
      _Str2 = *(char **)(param_2 + 4);
    }
    piVar2 = (int *)FUN_005147c0(iVar3);
    _Str1 = *(char **)(*piVar2 + 0x3c);
    if (_Str1 == (char *)0x0) {
      _Str1 = "";
    }
    iVar1 = __strcmpi(_Str1,_Str2);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

