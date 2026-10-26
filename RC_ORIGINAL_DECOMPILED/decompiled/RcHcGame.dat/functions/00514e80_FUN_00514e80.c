/*
 * FUN_00514e80 at 00514e80
 * undefined FUN_00514e80(void)
 * Address ranges: 00514e80-00514f1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00514e80(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
    if ((int)param_2 < 0) {
      uVar3 = 0;
    }
    puVar4 = operator_new(uVar3 << 2);
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(undefined4 **)(param_1 + 0xc) = puVar4 + param_2;
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      *(undefined4 **)(param_1 + 4) = puVar4;
      *(undefined4 **)(param_1 + 8) = puVar4;
      return;
    }
    *(undefined4 **)(param_1 + 4) = puVar4;
    *(undefined4 **)(param_1 + 8) = puVar4 + (*(int *)(param_1 + 8) - iVar2 >> 2);
  }
  return;
}

