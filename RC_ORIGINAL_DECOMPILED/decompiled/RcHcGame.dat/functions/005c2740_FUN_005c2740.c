/*
 * FUN_005c2740 at 005c2740
 * undefined FUN_005c2740(void)
 * Address ranges: 005c2740-005c289b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c2740(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  int local_48 [9];
  int local_24 [9];
  
  if (*(int *)(param_1 + 0x70) != 0) {
    param_1 = *(int *)(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar1 = FUN_005c6a70();
    if (iVar1 == 0) {
      return 1;
    }
    piVar2 = (int *)(param_1 + 0x28 + param_2 * 4);
    do {
      if ((*piVar2 != 0) && (param_2 != param_3)) {
        if (param_2 < *(int *)(param_1 + 0x14)) {
          return 0;
        }
        if (*(int *)(param_1 + 0x18) < param_2) {
          return 0;
        }
        if (param_3 < param_2) {
          return 0;
        }
        if (7 < param_3) {
          return 0;
        }
        if ((*(int *)(param_1 + 0x28 + param_3 * 4) == 0) &&
           (iVar1 = FUN_005c03b0(param_1,param_3), iVar1 == 0)) {
          return 0;
        }
        piVar2 = (int *)(param_1 + 4);
        piVar5 = piVar2;
        piVar6 = local_48;
        for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        piVar5 = local_48;
        piVar6 = local_24;
        for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        bVar4 = (byte)param_2;
        iVar1 = 1 << (bVar4 & 0x1f);
        local_24[0] = *piVar2 + -1 + iVar1 >> (bVar4 & 0x1f);
        local_24[1] = *(int *)(param_1 + 8) + -1 + iVar1 >> (bVar4 & 0x1f);
        local_24[2] = iVar1 + -1 + *(int *)(param_1 + 0xc) >> (bVar4 & 0x1f);
        bVar4 = (byte)param_3;
        iVar1 = 1 << (bVar4 & 0x1f);
        local_48[0] = *piVar2 + -1 + iVar1 >> (bVar4 & 0x1f);
        local_48[1] = *(int *)(param_1 + 8) + -1 + iVar1 >> (bVar4 & 0x1f);
        local_48[2] = iVar1 + -1 + *(int *)(param_1 + 0xc) >> (bVar4 & 0x1f);
        uVar3 = FUN_005c28a0(local_24,*(undefined4 *)(param_1 + 0x28 + param_2 * 4),local_48,
                             *(undefined4 *)(param_1 + 0x28 + param_3 * 4));
        iVar1 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x18) <= param_3) {
          iVar1 = param_3;
        }
        *(int *)(param_1 + 0x18) = iVar1;
        return uVar3;
      }
      param_2 = param_2 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < param_2);
  }
  return 0;
}

