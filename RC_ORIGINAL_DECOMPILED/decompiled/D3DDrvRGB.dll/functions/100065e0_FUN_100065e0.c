/*
 * FUN_100065e0 at 100065e0
 * int __fastcall FUN_100065e0(int param_1)
 * Address ranges: 100065e0-1000661b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100065e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = 0;
  iVar4 = 1000000;
  if (0 < *(int *)(param_1 + 8)) {
    piVar2 = (int *)(*(int *)(param_1 + 4) + 0x30);
    do {
      if (piVar2[-9] == 0) {
        return iVar1;
      }
      if (piVar2[-0xb] * *piVar2 < iVar4) {
        iVar3 = iVar1;
        iVar4 = piVar2[-0xb] * *piVar2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xd;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return iVar3;
}

