/*
 * FUN_0054b3e0 at 0054b3e0
 * undefined FUN_0054b3e0(void)
 * Address ranges: 0054b3e0-0054b55f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b3e0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    if (param_1 != param_3) {
      puVar1 = *(undefined4 **)(param_3 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(int *)(param_3 + 8) - (int)puVar1 >> 2;
      }
      puVar6 = *(undefined4 **)(param_1 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(param_1 + 8) - (int)puVar6 >> 2;
      }
      if (uVar4 < uVar8) {
        if (puVar1 == (undefined4 *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(int *)(param_3 + 8) - (int)puVar1 >> 2;
        }
        if (puVar6 == (undefined4 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(int *)(param_1 + 0xc) - (int)puVar6 >> 2;
        }
        if (uVar4 < uVar8) {
          FUN_005fe5f0(puVar6);
          if (*(int *)(param_3 + 4) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2;
          }
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          pvVar2 = operator_new(iVar5 * 4);
          *(void **)(param_1 + 4) = pvVar2;
          uVar3 = FUN_004dddf0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8),pvVar2);
          *(undefined4 *)(param_1 + 8) = uVar3;
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (puVar6 == (undefined4 *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 8) - (int)puVar6 >> 2;
          }
          puVar7 = puVar1 + iVar5;
          for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
            *puVar6 = *puVar1;
            puVar6 = puVar6 + 1;
          }
          puVar1 = *(undefined4 **)(param_3 + 8);
          iVar5 = *(int *)(param_1 + 8);
          for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
            FUN_005f0760(iVar5,puVar7);
            iVar5 = iVar5 + 4;
          }
          if (*(int *)(param_3 + 4) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2;
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 4) + iVar5 * 4;
        }
      }
      else {
        puVar7 = *(undefined4 **)(param_3 + 8);
        for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
          *puVar6 = *puVar1;
          puVar6 = puVar6 + 1;
        }
        if (*(int *)(param_3 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
        }
        else {
          *(int *)(param_1 + 8) =
               *(int *)(param_1 + 4) + (*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2) * 4;
        }
      }
    }
  }
  return;
}

