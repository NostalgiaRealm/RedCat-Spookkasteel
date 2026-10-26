/*
 * FUN_10021cb0 at 10021cb0
 * undefined FUN_10021cb0(void)
 * Address ranges: 10021cb0-10021db0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10021cb0(ushort *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  short *psVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  
  if (DAT_1052a154 != _DAT_1052a158) {
    psVar10 = &DAT_1050a154;
    puVar11 = &DAT_104e9954;
    do {
      uVar3 = *puVar11;
      puVar13 = &DAT_104e9954;
      do {
        uVar4 = *puVar13;
        puVar9 = &DAT_104e9954;
        do {
          uVar5 = *puVar9;
          puVar9 = puVar9 + 8;
          *psVar10 = (short)(uVar5 >> 3) + ((short)(uVar3 >> 3) * 0x40 + (short)(uVar4 >> 2)) * 0x20
          ;
          psVar10 = psVar10 + 1;
        } while ((int)puVar9 < 0x104e9d54);
        puVar13 = puVar13 + 4;
      } while ((int)puVar13 < 0x104e9d54);
      puVar11 = puVar11 + 8;
    } while ((int)puVar11 < 0x104e9d54);
    _DAT_1052a158 = DAT_1052a154;
  }
  iVar6 = *param_2;
  iVar7 = param_2[2];
  iVar12 = param_2[1];
  if (param_2[6] == 0) {
    for (; iVar8 = iVar6, iVar12 != 0; iVar12 = iVar12 + -1) {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *param_1 = (&DAT_1050a154)[*param_1];
        param_1 = param_1 + 1;
      }
      param_1 = param_1 + (iVar7 - iVar6);
    }
  }
  else {
    uVar1 = *(ushort *)(param_2 + 7);
    iVar8 = iVar6;
    if (iVar12 != 0) {
      do {
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*param_1 != uVar1) {
            uVar2 = (&DAT_1050a154)[*param_1];
            *param_1 = uVar2;
            if (uVar2 == uVar1) {
              *param_1 = uVar2 ^ 1;
            }
          }
          param_1 = param_1 + 1;
        }
        iVar12 = iVar12 + -1;
        param_1 = param_1 + (iVar7 - iVar6);
        iVar8 = iVar6;
      } while (iVar12 != 0);
      return;
    }
  }
  return;
}

