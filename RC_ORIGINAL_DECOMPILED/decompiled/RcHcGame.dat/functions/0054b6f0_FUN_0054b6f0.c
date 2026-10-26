/*
 * FUN_0054b6f0 at 0054b6f0
 * undefined FUN_0054b6f0(void)
 * Address ranges: 0054b6f0-0054b96c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b6f0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int *piVar7;
  
  if (param_1 != param_2) {
    piVar7 = (int *)(param_1 + 0x14);
    do {
      FUN_0040cc00(param_3,0,0xffffffff);
      if (piVar7 + -1 != (int *)(param_3 + 0x10)) {
        if (*(int *)(param_3 + 0x14) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(int *)(param_3 + 0x18) - *(int *)(param_3 + 0x14) >> 4;
        }
        uVar1 = FUN_00442d80();
        if (uVar1 < uVar6) {
          uVar6 = FUN_0054b970();
          uVar1 = FUN_00442d80();
          if (uVar6 < uVar1) {
            FUN_00548ca0(*piVar7,piVar7[1]);
            FUN_005fe5f0(*piVar7);
            iVar3 = FUN_00442d80();
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            pvVar5 = operator_new(iVar3 << 4);
            *piVar7 = (int)pvVar5;
            iVar3 = FUN_00548cd0(*(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18),
                                 pvVar5);
            piVar7[1] = iVar3;
            piVar7[2] = iVar3;
            goto LAB_0054b820;
          }
          iVar3 = *(int *)(param_3 + 0x14);
          iVar4 = FUN_00442d80();
          iVar3 = iVar4 * 0x10 + iVar3;
          FUN_0054c340(*(undefined4 *)(param_3 + 0x14),iVar3,*piVar7);
          FUN_00548cd0(iVar3,*(undefined4 *)(param_3 + 0x18),piVar7[1]);
        }
        else {
          uVar2 = FUN_0054c340(*(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18),
                               *piVar7);
          FUN_00548ca0(uVar2,piVar7[1]);
        }
        iVar3 = FUN_00442d80();
        piVar7[1] = iVar3 * 0x10 + *piVar7;
      }
LAB_0054b820:
      if (piVar7 + 3 != (int *)(param_3 + 0x20)) {
        iVar3 = *(int *)(param_3 + 0x24);
        if (iVar3 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(int *)(param_3 + 0x28) - iVar3 >> 3;
        }
        iVar4 = piVar7[4];
        if (iVar4 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = piVar7[5] - iVar4 >> 3;
        }
        if (uVar1 < uVar6) {
          uVar6 = FUN_0054b990();
          uVar1 = FUN_00548d10();
          if (uVar6 < uVar1) {
            FUN_00587d50(piVar7[4],piVar7[5]);
            FUN_005fe5f0(piVar7[4]);
            iVar3 = FUN_00548d10();
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            pvVar5 = operator_new(iVar3 << 3);
            piVar7[4] = (int)pvVar5;
            iVar3 = FUN_0054a240(*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28),
                                 pvVar5);
            piVar7[5] = iVar3;
            piVar7[6] = iVar3;
          }
          else {
            iVar3 = *(int *)(param_3 + 0x24);
            iVar4 = FUN_00548d10();
            iVar3 = iVar3 + iVar4 * 8;
            FUN_0054c4d0(*(undefined4 *)(param_3 + 0x24),iVar3,piVar7[4]);
            FUN_0054a240(iVar3,*(undefined4 *)(param_3 + 0x28),piVar7[5]);
            iVar3 = FUN_00548d10();
            piVar7[5] = piVar7[4] + iVar3 * 8;
          }
        }
        else {
          uVar2 = FUN_0054c4d0(iVar3,*(undefined4 *)(param_3 + 0x28),iVar4);
          FUN_00587d50(uVar2,piVar7[5]);
          iVar3 = FUN_00548d10();
          piVar7[5] = piVar7[4] + iVar3 * 8;
        }
      }
      piVar7[7] = *(int *)(param_3 + 0x30);
      piVar7[8] = *(int *)(param_3 + 0x34);
      param_1 = param_1 + 0x38;
      piVar7 = piVar7 + 0xe;
    } while (param_1 != param_2);
  }
  return;
}

