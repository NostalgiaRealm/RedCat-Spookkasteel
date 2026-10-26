/*
 * FUN_005c9640 at 005c9640
 * undefined FUN_005c9640(void)
 * Address ranges: 005c9640-005c967d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005c9640(int param_1)

{
  int iVar1;
  char *_Str1;
  int iVar2;
  
  iVar2 = 0;
  _Str1 = s_GlideDrv_dll_006aa004;
  do {
    iVar1 = __strcmpi(_Str1,(char *)(param_1 + 0x204));
    if (iVar1 == 0) {
      return iVar2;
    }
    _Str1 = _Str1 + 200;
    iVar2 = iVar2 + 1;
  } while ((int)_Str1 < 0x6aa324);
  return -1;
}

