/*
 * FUN_005cb830 at 005cb830
 * undefined FUN_005cb830(void)
 * Address ranges: 005cb830-005cbb8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005cb830(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,byte param_5,
            uint param_6,code *param_7,undefined4 param_8,undefined4 *param_9)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  int local_48;
  uint local_40;
  float local_3c [6];
  undefined1 auStack_24 [12];
  float afStack_18 [6];
  
  puVar2 = param_3;
  iVar7 = param_1;
  local_48 = 0;
  local_40 = 0;
  bVar1 = false;
  DAT_006cc590 = *(int *)(param_1 + 0x18) + 200;
  FUN_005b3000(local_3c + 3);
  puVar3 = param_4;
  FUN_005b3000(local_3c);
  DAT_0072082c = DAT_0072082c + 1;
  if ((param_5 & 4) != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x3b8);
    piVar10 = *(int **)(param_1 + 0x3bc);
    param_1 = 0;
    param_4 = puVar5;
    if (0 < (int)puVar5) {
      do {
        if (((((*(byte *)(piVar10 + 1) & 8) != 0) && ((param_6 & piVar10[2]) != 0)) &&
            ((param_7 == (code *)0x0 ||
             (iVar4 = (*param_7)(0,*piVar10,param_8), puVar5 = param_4, iVar4 != 0)))) &&
           (iVar4 = FUN_005b4860(), puVar5 = param_4, iVar4 != 0)) {
          iVar4 = 0;
          do {
            if ((local_3c[iVar4] < afStack_18[iVar4] - 1.0) ||
               (afStack_18[iVar4 + 3] + 1.0 < local_3c[iVar4 + 3])) break;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 3);
          if (iVar4 == 3) {
            param_4 = (undefined4 *)*piVar10;
            bVar1 = true;
            break;
          }
        }
        piVar10 = piVar10 + 3;
        param_1 = param_1 + 1;
      } while (param_1 < (int)puVar5);
    }
  }
  if ((param_5 & 2) != 0) {
    DAT_006cc510 = *(undefined4 *)(*(int *)(iVar7 + 0x18) + 0x114);
    DAT_006cc4c8 = *(undefined4 *)(*(int *)(iVar7 + 0x18) + 300);
    DAT_006cc4c4 = *(undefined4 *)(*(int *)(iVar7 + 0x18) + 0x11c);
    DAT_006cc514 = *(undefined4 *)(DAT_006cc590 + 0x70);
    iVar4 = *(int *)(iVar7 + 0x18);
    _DAT_006cc4d8 = *puVar2;
    iVar7 = iVar4 + 0x1cc;
    puVar5 = *(undefined4 **)(iVar4 + 0x110);
    _DAT_006cc4dc = puVar2[1];
    _DAT_006cc4e0 = puVar2[2];
    _DAT_006cc570 = *puVar3;
    _DAT_006cc574 = puVar3[1];
    _DAT_006cc578 = puVar3[2];
    _DAT_006cc4e8 = local_3c[3];
    _DAT_006cc4ec = local_3c[4];
    _DAT_006cc4f0 = local_3c[5];
    _DAT_006cc580 = local_3c[0];
    _DAT_006cc584 = local_3c[1];
    _DAT_006cc588 = local_3c[2];
    iVar9 = 0;
    if (0 < *(int *)(DAT_006cc590 + 0xa0)) {
      iVar4 = iVar4 + 0x270;
      do {
        if ((param_7 == (code *)0x0) || (iVar6 = (*param_7)(iVar7,0,param_8), iVar6 != 0)) {
          if (0 < iVar9) {
            iVar6 = 0;
            pfVar8 = (float *)(iVar4 + -0xc);
            do {
              if ((local_3c[iVar6] < pfVar8[-3]) || (*pfVar8 < local_3c[iVar6 + 3])) break;
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 1;
            } while (iVar6 < 3);
            if (iVar6 != 3) goto LAB_005cbb22;
          }
          FUN_005b2fe0(auStack_24);
          FUN_005b3730(auStack_24);
          FUN_005b3000(auStack_24);
          param_3 = (undefined4 *)0x0;
          FUN_005cbb90(*puVar5,auStack_24,&param_3);
          if ((param_3 != (undefined4 *)0x0) && (local_48 == 0)) {
            bVar1 = true;
            local_48 = iVar7;
          }
          if (((uint)param_3 & 0x43) != 0) {
            local_48 = iVar7;
          }
          local_40 = local_40 | (uint)param_3;
          if ((param_5 & 8) != 0) break;
        }
LAB_005cbb22:
        iVar7 = iVar7 + 0xd4;
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 0xd4;
        puVar5 = puVar5 + 0x14;
      } while (iVar9 < *(int *)(DAT_006cc590 + 0xa0));
    }
  }
  if (!bVar1) {
    *param_9 = 0;
    param_9[1] = 0;
    param_9[2] = 0;
    param_9[3] = 0;
    return 0;
  }
  param_9[3] = local_40;
  *param_9 = 0;
  param_9[1] = local_48;
  param_9[2] = param_4;
  return 1;
}

