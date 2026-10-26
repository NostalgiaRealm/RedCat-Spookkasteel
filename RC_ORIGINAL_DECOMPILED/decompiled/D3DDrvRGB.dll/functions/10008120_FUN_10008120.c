/*
 * FUN_10008120 at 10008120
 * int __fastcall FUN_10008120(int param_1)
 * Address ranges: 10008120-1000815b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10008120(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = 0;
  iVar4 = 1000000;
  if (0 < *(int *)(param_1 + 8)) {
    piVar2 = (int *)(*(int *)(param_1 + 4) + 0x38);
    do {
      if (piVar2[-0xb] == 0) {
        return iVar1;
      }
      if (piVar2[-0xd] * *piVar2 < iVar4) {
        iVar3 = iVar1;
        iVar4 = piVar2[-0xd] * *piVar2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x10;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return iVar3;
}

