/*
 * FUN_005ed400 at 005ed400
 * undefined FUN_005ed400(void)
 * Address ranges: 005ed400-005ed51b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005ed400(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar2 = FUN_005e6f50(param_2);
  iVar6 = *(int *)(param_1 + 8);
  if ((iVar6 != 0) && (uVar2 < (uint)(*(int *)(param_1 + 0x10) - iVar6 >> 2))) {
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = *(int *)(param_1 + 0x10) - iVar6 >> 2;
    }
    if (uVar3 < uVar2) {
      uVar3 = uVar2;
      if ((int)uVar2 < 0) {
        uVar3 = 0;
      }
      puVar4 = operator_new(uVar3 * 4);
      puVar1 = *(undefined4 **)(param_1 + 0xc);
      puVar8 = puVar4;
      for (puVar5 = *(undefined4 **)(param_1 + 8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar5;
        }
        puVar8 = puVar8 + 1;
      }
      FUN_005fe5f0(*(undefined4 *)(param_1 + 8));
      *(undefined4 **)(param_1 + 0x10) = puVar4 + uVar2;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
      }
      *(undefined4 **)(param_1 + 8) = puVar4;
      *(undefined4 **)(param_1 + 0xc) = puVar4 + iVar6;
    }
  }
  iVar6 = param_4;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    do {
      param_4 = FUN_005e9cb0(param_2,param_3,iVar6,iVar9);
      if (*(int *)(param_1 + 8) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (undefined2)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2);
      }
      *(undefined2 *)(param_4 + 0x24) = uVar7;
      FUN_0053cff0(*(undefined4 *)(param_1 + 0xc),1,&param_4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)uVar2);
  }
  return;
}

