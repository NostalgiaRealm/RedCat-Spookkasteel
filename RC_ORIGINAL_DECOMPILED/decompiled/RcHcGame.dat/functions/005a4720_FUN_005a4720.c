/*
 * FUN_005a4720 at 005a4720
 * undefined FUN_005a4720(void)
 * Address ranges: 005a4720-005a47e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005a4720(int param_1,undefined4 param_2)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  char *_Str2;
  int *piVar3;
  undefined1 local_10 [4];
  char *local_c;
  
  FUN_005a42e0(local_10,param_2);
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != *(int **)(param_1 + 0x1c)) {
    do {
      _Str2 = "";
      if (local_c != (char *)0x0) {
        _Str2 = local_c;
      }
      _Str1 = *(char **)(*piVar3 + 0x1c);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __strcmpi(_Str1,_Str2);
      if (iVar2 == 0) {
        iVar2 = *piVar3;
        if (local_c != (char *)0x0) {
          cVar1 = local_c[-1];
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            local_c[-1] = cVar1 + -1;
            return iVar2;
          }
          FUN_005fe5f0(local_c + -1);
        }
        return iVar2;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x1c));
  }
  if (local_c != (char *)0x0) {
    cVar1 = local_c[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_c[-1] = cVar1 + -1;
      return 0;
    }
    FUN_005fe5f0(local_c + -1);
  }
  return 0;
}

