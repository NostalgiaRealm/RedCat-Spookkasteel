/*
 * FUN_100016b0 at 100016b0
 * undefined __cdecl FUN_100016b0(int * param_1, int param_2)
 * Address ranges: 100016b0-1000171f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100016b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != param_1[2]) {
    if (param_2 == DAT_100e3e14) {
      iVar1 = *param_1;
      iVar2 = *(int *)(iVar1 + 0x1c) * *(int *)(iVar1 + 0x18);
      if (1 < *(byte *)(iVar1 + 0x20)) {
        iVar3 = *(byte *)(iVar1 + 0x20) - 1;
        iVar1 = iVar2;
        do {
          iVar1 = iVar1 >> 2;
          iVar2 = iVar2 + iVar1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (DAT_101f5720 != DAT_100e3e14) {
        DAT_101f5720 = DAT_100e3e14;
        DAT_101f5724 = iVar2 * 2;
        param_1[2] = param_2;
        return;
      }
      DAT_101f5724 = DAT_101f5724 + iVar2 * 2;
    }
    param_1[2] = param_2;
  }
  return;
}

