/*
 * FUN_10004fd0 at 10004fd0
 * undefined __cdecl FUN_10004fd0(int param_1, int param_2)
 * Address ranges: 10004fd0-1000502e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10004fd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != *(int *)(param_1 + 0x10)) {
    if (param_2 == DAT_101271d0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(iVar1 + 8) * *(int *)(iVar1 + 4);
      if (1 < *(int *)(iVar1 + 0xc)) {
        iVar3 = *(int *)(iVar1 + 0xc) + -1;
        iVar1 = iVar2;
        do {
          iVar1 = iVar1 >> 2;
          iVar2 = iVar2 + iVar1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (DAT_10038ea0 != DAT_101271d0) {
        DAT_10038ea0 = DAT_101271d0;
        _DAT_10038e9c = 0;
      }
      _DAT_10038e9c = _DAT_10038e9c + iVar2;
    }
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}

