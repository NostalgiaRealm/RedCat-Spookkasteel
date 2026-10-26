/*
 * FUN_0054c340 at 0054c340
 * undefined FUN_0054c340(void)
 * Address ranges: 0054c340-0054c4ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0054c340(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    do {
      if (param_3 != param_1) {
        puVar1 = *(undefined4 **)(param_1 + 4);
        if (puVar1 == (undefined4 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(int *)(param_1 + 8) - (int)puVar1 >> 2;
        }
        puVar6 = *(undefined4 **)(param_3 + 4);
        if (puVar6 == (undefined4 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(int *)(param_3 + 8) - (int)puVar6 >> 2;
        }
        if (uVar4 < uVar7) {
          if (puVar1 == (undefined4 *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(int *)(param_1 + 8) - (int)puVar1 >> 2;
          }
          if (puVar6 == (undefined4 *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(int *)(param_3 + 0xc) - (int)puVar6 >> 2;
          }
          if (uVar4 < uVar7) {
            FUN_005fe5f0(puVar6);
            if (*(int *)(param_1 + 4) == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
            }
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            pvVar2 = operator_new(iVar5 * 4);
            *(void **)(param_3 + 4) = pvVar2;
            uVar3 = FUN_004dddf0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),pvVar2);
            *(undefined4 *)(param_3 + 8) = uVar3;
            *(undefined4 *)(param_3 + 0xc) = uVar3;
          }
          else {
            if (puVar6 == (undefined4 *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(param_3 + 8) - (int)puVar6 >> 2;
            }
            puVar8 = puVar1 + iVar5;
            for (; puVar1 != puVar8; puVar1 = puVar1 + 1) {
              *puVar6 = *puVar1;
              puVar6 = puVar6 + 1;
            }
            puVar1 = *(undefined4 **)(param_1 + 8);
            iVar5 = *(int *)(param_3 + 8);
            for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
              FUN_005f0760(iVar5,puVar8);
              iVar5 = iVar5 + 4;
            }
            if (*(int *)(param_1 + 4) == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
            }
            *(int *)(param_3 + 8) = *(int *)(param_3 + 4) + iVar5 * 4;
          }
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 8);
          for (; puVar1 != puVar8; puVar1 = puVar1 + 1) {
            *puVar6 = *puVar1;
            puVar6 = puVar6 + 1;
          }
          if (*(int *)(param_1 + 4) == 0) {
            *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_3 + 4);
          }
          else {
            *(int *)(param_3 + 8) =
                 *(int *)(param_3 + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4;
          }
        }
      }
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}

