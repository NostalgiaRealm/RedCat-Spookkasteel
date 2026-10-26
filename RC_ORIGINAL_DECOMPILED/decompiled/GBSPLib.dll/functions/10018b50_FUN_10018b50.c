/*
 * FUN_10018b50 at 10018b50
 * undefined FUN_10018b50(void)
 * Address ranges: 10018b50-10018c08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10018b50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    param_1 = *(int *)(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar1 = FUN_100203d0();
    if (iVar1 == 0) {
      return 1;
    }
    if (((-1 < param_2) && (param_3 < 8)) && (param_2 <= param_3)) {
      piVar3 = (int *)(param_1 + 0x28 + param_2 * 4);
      iVar1 = param_2;
      while ((*piVar3 != 0 ||
             ((iVar2 = FUN_100162f0(param_1,iVar1), iVar2 != 0 &&
              ((iVar1 == 0 || (iVar2 = FUN_10018190(param_1,iVar1 + -1,iVar1), iVar2 != 0))))))) {
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
        if (param_3 < iVar1) {
          iVar1 = *(int *)(param_1 + 0x14);
          if (param_2 <= *(int *)(param_1 + 0x14)) {
            iVar1 = param_2;
          }
          *(int *)(param_1 + 0x14) = iVar1;
          if (*(int *)(param_1 + 0x18) <= param_3) {
            *(int *)(param_1 + 0x18) = param_3;
            return 1;
          }
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18);
          return 1;
        }
      }
    }
  }
  return 0;
}

