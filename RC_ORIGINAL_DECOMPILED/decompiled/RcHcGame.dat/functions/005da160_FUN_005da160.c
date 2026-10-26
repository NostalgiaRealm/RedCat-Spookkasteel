/*
 * FUN_005da160 at 005da160
 * undefined FUN_005da160(void)
 * Address ranges: 005da160-005da260
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005da160(ushort *param_1,int *param_2)

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
  
  if (DAT_0070f828 != _DAT_0070f82c) {
    psVar10 = &DAT_006ef828;
    puVar11 = &DAT_006cf028;
    do {
      uVar3 = *puVar11;
      puVar13 = &DAT_006cf028;
      do {
        uVar4 = *puVar13;
        puVar9 = &DAT_006cf028;
        do {
          uVar5 = *puVar9;
          puVar9 = puVar9 + 8;
          *psVar10 = (short)(uVar5 >> 3) + ((short)(uVar3 >> 3) * 0x40 + (short)(uVar4 >> 2)) * 0x20
          ;
          psVar10 = psVar10 + 1;
        } while (puVar9 < &DAT_006cf428);
        puVar13 = puVar13 + 4;
      } while (puVar13 < &DAT_006cf428);
      puVar11 = puVar11 + 8;
    } while (puVar11 < &DAT_006cf428);
    _DAT_0070f82c = DAT_0070f828;
  }
  iVar6 = *param_2;
  iVar7 = param_2[2];
  iVar12 = param_2[1];
  if (param_2[6] == 0) {
    for (; iVar8 = iVar6, iVar12 != 0; iVar12 = iVar12 + -1) {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *param_1 = (&DAT_006ef828)[*param_1];
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
            uVar2 = (&DAT_006ef828)[*param_1];
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

