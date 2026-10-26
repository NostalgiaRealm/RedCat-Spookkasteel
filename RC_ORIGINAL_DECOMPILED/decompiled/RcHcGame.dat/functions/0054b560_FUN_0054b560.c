/*
 * FUN_0054b560 at 0054b560
 * undefined FUN_0054b560(void)
 * Address ranges: 0054b560-0054b6e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0054b560(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (param_1 != param_2) {
    do {
      iVar10 = param_2 + -0x10;
      iVar8 = param_3 + -0x10;
      if (iVar8 != iVar10) {
        puVar1 = *(undefined4 **)(param_2 + -0xc);
        if (puVar1 == (undefined4 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(int *)(param_2 + -8) - (int)puVar1 >> 2;
        }
        puVar6 = *(undefined4 **)(param_3 + -0xc);
        if (puVar6 == (undefined4 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(int *)(param_3 + -8) - (int)puVar6 >> 2;
        }
        if (uVar4 < uVar7) {
          if (puVar1 == (undefined4 *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(int *)(param_2 + -8) - (int)puVar1 >> 2;
          }
          if (puVar6 == (undefined4 *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(int *)(param_3 + -4) - (int)puVar6 >> 2;
          }
          if (uVar4 < uVar7) {
            FUN_005fe5f0(puVar6);
            if (*(int *)(param_2 + -0xc) == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(param_2 + -8) - *(int *)(param_2 + -0xc) >> 2;
            }
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            pvVar2 = operator_new(iVar5 * 4);
            *(void **)(param_3 + -0xc) = pvVar2;
            uVar3 = FUN_004dddf0(*(undefined4 *)(param_2 + -0xc),*(undefined4 *)(param_2 + -8),
                                 pvVar2);
            *(undefined4 *)(param_3 + -8) = uVar3;
            *(undefined4 *)(param_3 + -4) = uVar3;
          }
          else {
            if (puVar6 == (undefined4 *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(param_3 + -8) - (int)puVar6 >> 2;
            }
            puVar9 = puVar1 + iVar5;
            for (; puVar1 != puVar9; puVar1 = puVar1 + 1) {
              *puVar6 = *puVar1;
              puVar6 = puVar6 + 1;
            }
            puVar1 = *(undefined4 **)(param_2 + -8);
            iVar5 = *(int *)(param_3 + -8);
            for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
              FUN_005f0760(iVar5,puVar9);
              iVar5 = iVar5 + 4;
            }
            if (*(int *)(param_2 + -0xc) == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(param_2 + -8) - *(int *)(param_2 + -0xc) >> 2;
            }
            *(int *)(param_3 + -8) = *(int *)(param_3 + -0xc) + iVar5 * 4;
          }
        }
        else {
          puVar9 = *(undefined4 **)(param_2 + -8);
          for (; puVar1 != puVar9; puVar1 = puVar1 + 1) {
            *puVar6 = *puVar1;
            puVar6 = puVar6 + 1;
          }
          if (*(int *)(param_2 + -0xc) == 0) {
            *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_3 + -0xc);
          }
          else {
            *(int *)(param_3 + -8) =
                 *(int *)(param_3 + -0xc) +
                 (*(int *)(param_2 + -8) - *(int *)(param_2 + -0xc) >> 2) * 4;
          }
        }
      }
      param_2 = iVar10;
      param_3 = iVar8;
    } while (iVar10 != param_1);
    return iVar8;
  }
  return param_3;
}

