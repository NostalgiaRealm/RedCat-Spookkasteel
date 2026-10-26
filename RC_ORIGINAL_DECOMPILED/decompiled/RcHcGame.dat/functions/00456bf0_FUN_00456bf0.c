/*
 * FUN_00456bf0 at 00456bf0
 * undefined FUN_00456bf0(void)
 * Address ranges: 00456bf0-00456c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00456bf0(int param_1,int param_2)

{
  int iVar1;
  char *_Str1;
  undefined4 *puVar2;
  int iVar3;
  char *_Str2;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2;
    }
    if (iVar1 <= iVar3) {
      return 0;
    }
    _Str2 = "";
    if (*(char **)(param_2 + 4) != (char *)0x0) {
      _Str2 = *(char **)(param_2 + 4);
    }
    FUN_00457380(iVar3);
    iVar1 = FUN_00554a20();
    _Str1 = *(char **)(iVar1 + 4);
    if (_Str1 == (char *)0x0) {
      _Str1 = "";
    }
    iVar1 = __strcmpi(_Str1,_Str2);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  puVar2 = (undefined4 *)FUN_00457380(iVar3);
  return *puVar2;
}

