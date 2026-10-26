/*
 * FUN_0041e9e0 at 0041e9e0
 * undefined FUN_0041e9e0(void)
 * Address ranges: 0041e9e0-0041eac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0041e9e0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc;
  }
  if (uVar6 < param_2) {
    uVar6 = param_2;
    if ((int)param_2 < 0) {
      uVar6 = 0;
    }
    puVar3 = operator_new(uVar6 * 0xc);
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar5 = puVar3;
    for (puVar4 = *(undefined4 **)(param_1 + 4); puVar4 != puVar1; puVar4 = puVar4 + 3) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = puVar4[2];
      }
      puVar5 = puVar5 + 3;
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(undefined4 **)(param_1 + 0xc) = puVar3 + param_2 * 3;
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      *(undefined4 **)(param_1 + 4) = puVar3;
      *(undefined4 **)(param_1 + 8) = puVar3;
      return;
    }
    *(undefined4 **)(param_1 + 4) = puVar3;
    *(undefined4 **)(param_1 + 8) = puVar3 + ((*(int *)(param_1 + 8) - iVar2) / 0xc) * 3;
  }
  return;
}

