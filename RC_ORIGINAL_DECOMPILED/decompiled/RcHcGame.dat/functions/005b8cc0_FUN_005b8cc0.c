/*
 * FUN_005b8cc0 at 005b8cc0
 * undefined FUN_005b8cc0(void)
 * Address ranges: 005b8cc0-005b8fdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b8cc0(uint param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  float10 fVar11;
  undefined *puVar12;
  float *local_18;
  
  piVar5 = DAT_006cc41c;
  while( true ) {
    if ((int)param_1 < 0) {
      iVar1 = *(int *)(*(int *)(piVar5[6] + 0xd5cc) + param_1 * -0xc + -4);
      if (iVar1 != 0) {
        DAT_006cc400[4] = DAT_006cc400[4] + 1;
        FUN_005b7e90(1,iVar1);
      }
      DAT_006cc400[2] = DAT_006cc400[2] + 1;
      return;
    }
    if ((*(int *)(*(int *)(DAT_006cc40c + 0xd5d4) + param_1 * 4) != *piVar5) && (piVar5[5] != 0))
    break;
    *DAT_006cc400 = *DAT_006cc400 + 1;
    iVar1 = *(int *)(DAT_006cc420 + 0x4c) + param_1 * 0x2c;
    if (param_3 != 0) {
      iVar8 = 0;
      piVar7 = (int *)param_2[1];
      piVar5 = piVar7 + 1;
      if (0 < *piVar7) {
        local_18 = (float *)(piVar7 + 4);
        do {
          uVar6 = 1 << ((byte)iVar8 & 0x1f);
          if ((param_3 & uVar6) != 0) {
            fVar11 = (float10)FUN_005b2e40();
            if (fVar11 - (float10)*local_18 <= (float10)0.0) {
              FUN_005b8fe0(param_1,*param_2);
              return;
            }
            fVar11 = (float10)FUN_005b2e40();
            if ((float10)0.0 <= fVar11 - (float10)(float)piVar5[3]) {
              param_3 = param_3 & ~uVar6;
            }
          }
          iVar8 = iVar8 + 1;
          local_18 = local_18 + 5;
          piVar5 = piVar5 + 5;
        } while (iVar8 < *piVar7);
      }
    }
    FUN_005c9480();
    fVar11 = (float10)FUN_005d17f0();
    iVar3 = *(int *)(iVar1 + 0xc);
    iVar8 = DAT_006cc408 + iVar3 * 0x88;
    iVar4 = *(int *)(DAT_006cc420 + 0x68);
    param_1 = (uint)(fVar11 < (float10)0.0);
    FUN_005b8cc0(*(undefined4 *)(iVar1 + param_1 * 4),param_2,param_3);
    puVar12 = &DAT_007228f8;
    puVar2 = (undefined4 *)(*(int *)(DAT_006cc420 + 100) + *(int *)(iVar1 + 0x10) * 0x14);
    _DAT_007228e8 = *puVar2;
    _DAT_007228ec = puVar2[1];
    _DAT_007228f0 = puVar2[2];
    _DAT_007228f4 =
         *(undefined4 *)(*(int *)(DAT_006cc420 + 100) + 0xc + *(int *)(iVar1 + 0x10) * 0x14);
    FUN_0059be40(&DAT_007228f8);
    FUN_005b35b0(puVar12);
    iVar10 = 0;
    piVar5 = DAT_006cc41c;
    if (0 < *(int *)(iVar1 + 8)) {
      puVar9 = (uint *)(iVar4 + iVar3 * 0x24 + 0xc);
      piVar7 = (int *)(iVar8 + 0x58);
      do {
        iVar8 = *(int *)(iVar1 + 0xc);
        if (((*piVar7 == *piVar5) || (piVar5[5] == 0)) && (*puVar9 == param_1)) {
          *(int *)(DAT_006cc418 + 0x33680) = *(int *)(DAT_006cc418 + 0x33680) + 1;
          FUN_005ba710(iVar8 + iVar10,param_2,param_3);
          piVar5 = DAT_006cc41c;
        }
        iVar10 = iVar10 + 1;
        piVar7 = piVar7 + 0x22;
        puVar9 = puVar9 + 9;
      } while (iVar10 < *(int *)(iVar1 + 8));
    }
    param_1 = *(int *)(iVar1 + (uint)(param_1 == 0) * 4);
  }
  return;
}

