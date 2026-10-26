/*
 * FUN_005c3240 at 005c3240
 * undefined FUN_005c3240(void)
 * Address ranges: 005c3240-005c32f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c3240(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    param_1 = *(int *)(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar1 = FUN_005c6a70();
    if (iVar1 == 0) {
      return 1;
    }
    if (((-1 < param_2) && (param_3 < 8)) && (param_2 <= param_3)) {
      piVar3 = (int *)(param_1 + 0x28 + param_2 * 4);
      iVar1 = param_2;
      while ((*piVar3 != 0 ||
             ((iVar2 = FUN_005c03b0(param_1,iVar1), iVar2 != 0 &&
              ((iVar1 == 0 || (iVar2 = FUN_005c2740(param_1,iVar1 + -1,iVar1), iVar2 != 0))))))) {
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

