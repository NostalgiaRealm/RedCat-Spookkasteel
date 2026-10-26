/*
 * FUN_005d5580 at 005d5580
 * undefined FUN_005d5580(void)
 * Address ranges: 005d5580-005d57e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d5580(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int local_1c;
  
  piVar7 = param_2;
  uVar8 = FUN_005c9490();
  iVar1 = param_2[6];
  iVar13 = *(int *)(iVar1 + 0x120);
  iVar10 = *(int *)(iVar1 + 0x1c0);
  iVar2 = *(int *)(iVar1 + 0x160);
  iVar3 = *(int *)(iVar1 + 0x110);
  iVar4 = *(int *)(iVar1 + 0x11c);
  iVar5 = *(int *)(iVar1 + 0x134);
  iVar9 = FUN_005d1790(uVar8);
  iVar12 = iVar4 + iVar9 * 0x3c;
  iVar6 = *(int *)(iVar12 + 0x30);
  if ((param_2[3] != iVar9) || (param_2[4] != 0)) {
    param_2[4] = 0;
    param_2[3] = iVar9;
    *param_2 = *param_2 + 1;
    iVar12 = *(int *)(iVar12 + 0x2c);
    if ((iVar12 == -1) || (*(int *)(iVar13 + iVar12 * 4) == -1)) {
      param_2[5] = 0;
      return 1;
    }
    if (iVar6 != 0) {
      FUN_005d5500(param_2,iVar6);
    }
    param_2[5] = 1;
    iVar12 = *(int *)(iVar13 + iVar12 * 4);
    iVar13 = 0;
    if (0 < *(int *)(iVar3 + 0x40)) {
      do {
        if ((*(byte *)((iVar13 >> 3) + iVar12 + iVar2) & (byte)(1 << ((byte)iVar13 & 7))) != 0) {
          *(int *)(*(int *)(param_2[6] + 0xd5d0) + iVar13 * 4) = *param_2;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(iVar3 + 0x40));
    }
    param_2 = (int *)0x0;
    if (0 < *(int *)(iVar3 + 0x38)) {
      local_1c = 0;
      piVar14 = (int *)(iVar4 + *(int *)(iVar3 + 0x34) * 0x3c + 0x30);
      do {
        if (((piVar14[-1] != -1) &&
            (*(int *)(*(int *)(piVar7[6] + 0xd5d0) + piVar14[-1] * 4) == *piVar7)) &&
           (*(int *)(*(int *)(piVar7[6] + 0xd5d8) + *piVar14 * 4) == *piVar7)) {
          FUN_005d5920(piVar7,param_2);
          *(int *)(*(int *)(piVar7[6] + 0xd5cc) + local_1c) = *piVar7;
          piVar11 = (int *)(iVar5 + piVar14[-5] * 4);
          iVar12 = 0;
          if (0 < piVar14[-4]) {
            do {
              iVar13 = *piVar11;
              piVar11 = piVar11 + 1;
              iVar12 = iVar12 + 1;
              *(int *)(iVar10 + 0x58 + iVar13 * 0x88) = *piVar7;
            } while (iVar12 < piVar14[-4]);
          }
        }
        local_1c = local_1c + 0xc;
        param_2 = (int *)((int)param_2 + 1);
        piVar14 = piVar14 + 0xf;
      } while ((int)param_2 < *(int *)(iVar3 + 0x38));
    }
  }
  iVar13 = 1;
  *(int *)(piVar7[6] + 0x288) = piVar7[1];
  iVar12 = piVar7[6] + 0x2a0;
  if (1 < *(int *)(iVar1 + 0x168)) {
    do {
      iVar10 = FUN_005d54e0(piVar7,iVar12);
      if (iVar10 != 0) {
        *(int *)(iVar12 + 0xbc) = piVar7[1];
      }
      iVar13 = iVar13 + 1;
      *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffe;
      iVar12 = iVar12 + 0xd4;
    } while (iVar13 < *(int *)(iVar1 + 0x168));
  }
  FUN_005d5960(param_1,piVar7,param_3,param_4,iVar6);
  return 1;
}

