/*
 * FUN_00549eb0 at 00549eb0
 * undefined FUN_00549eb0(void)
 * Address ranges: 00549eb0-0054a030
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00549eb0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  int *piVar9;
  
  piVar2 = *(int **)(param_1 + 8);
  if ((int *)(param_2 + 0x10) != piVar2) {
    piVar9 = (int *)(param_2 + 0x14);
    do {
      if (piVar9 + -5 != piVar9 + -1) {
        iVar5 = *piVar9;
        if (iVar5 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = piVar9[1] - iVar5 >> 2;
        }
        if (piVar9[-4] == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = piVar9[-3] - piVar9[-4] >> 2;
        }
        if (uVar3 < uVar8) {
          uVar8 = FUN_0054a040();
          uVar3 = FUN_0044e4c0();
          if (uVar8 < uVar3) {
            FUN_00587d50(piVar9[-4],piVar9[-3]);
            FUN_005fe5f0(piVar9[-4]);
            iVar5 = FUN_0044e4c0();
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            pvVar7 = operator_new(iVar5 * 4);
            piVar9[-4] = (int)pvVar7;
            iVar5 = FUN_004dddf0(*piVar9,piVar9[1],pvVar7);
            piVar9[-3] = iVar5;
            piVar9[-2] = iVar5;
          }
          else {
            iVar5 = *piVar9;
            iVar6 = FUN_0044e4c0();
            iVar5 = iVar5 + iVar6 * 4;
            FUN_0054a060(*piVar9,iVar5,piVar9[-4]);
            FUN_004dddf0(iVar5,piVar9[1],piVar9[-3]);
            iVar5 = FUN_0044e4c0();
            piVar9[-3] = piVar9[-4] + iVar5 * 4;
          }
        }
        else {
          uVar4 = FUN_0054a060(iVar5,piVar9[1],piVar9[-4]);
          FUN_00587d50(uVar4,piVar9[-3]);
          iVar5 = FUN_0044e4c0();
          piVar9[-3] = piVar9[-4] + iVar5 * 4;
        }
      }
      piVar1 = piVar9 + 3;
      piVar9 = piVar9 + 4;
    } while (piVar1 != piVar2);
  }
  iVar6 = *(int *)(param_1 + 8);
  for (iVar5 = iVar6 + -0x10; iVar5 != iVar6; iVar5 = iVar5 + 0x10) {
    FUN_00514430();
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return param_2;
}

