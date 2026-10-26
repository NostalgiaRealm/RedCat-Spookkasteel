/*
 * FUN_005d4110 at 005d4110
 * undefined FUN_005d4110(void)
 * Address ranges: 005d4110-005d414d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d4110(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  
  iVar2 = 0;
  _Str1 = (char *)param_1[1];
  if (0 < *param_1) {
    do {
      iVar1 = __strcmpi(_Str1,param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(_Str1 + 0x40);
      }
      iVar2 = iVar2 + 1;
      _Str1 = _Str1 + 0x4c;
    } while (iVar2 < *param_1);
  }
  return 0;
}

