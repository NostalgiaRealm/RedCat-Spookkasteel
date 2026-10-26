/*
 * FUN_10021dc0 at 10021dc0
 * undefined FUN_10021dc0(void)
 * Address ranges: 10021dc0-10021f39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10021dc0(ushort *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int local_14;
  int local_10;
  uint *local_c;
  uint *local_8;
  
  if (DAT_1052a154 != _DAT_1052a15c) {
    local_10 = 0;
    local_8 = &DAT_104e9954;
    do {
      uVar3 = *local_8;
      local_14 = 0;
      local_c = &DAT_104e9954;
      do {
        uVar4 = *local_c;
        puVar12 = &DAT_104e9954;
        iVar9 = 0;
        do {
          uVar5 = *puVar12;
          uVar7 = 0;
          psVar8 = (short *)(&DAT_104ea154 + ((local_10 + local_14) * 0x10 + iVar9) * 2);
          do {
            iVar10 = uVar7 << 4;
            uVar7 = uVar7 + 1;
            *psVar8 = (((short)iVar10 + (short)(uVar3 >> 4)) * 0x10 + (short)(uVar4 >> 4)) * 0x10 +
                      (short)(uVar5 >> 4);
            psVar8 = psVar8 + 0x1000;
          } while (uVar7 < 0x10);
          puVar12 = puVar12 + 0x10;
          iVar9 = iVar9 + 1;
        } while ((int)puVar12 < 0x104e9d54);
        local_c = local_c + 0x10;
        local_14 = local_14 + 1;
      } while ((int)local_c < 0x104e9d54);
      local_8 = local_8 + 0x10;
      local_10 = local_10 + 0x10;
    } while ((int)local_8 < 0x104e9d54);
    _DAT_1052a15c = DAT_1052a154;
  }
  iVar9 = *param_2;
  iVar10 = param_2[2];
  iVar11 = param_2[1];
  if (param_2[6] == 0) {
    for (; iVar6 = iVar9, iVar11 != 0; iVar11 = iVar11 + -1) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *param_1 = *(ushort *)(&DAT_104ea154 + (uint)*param_1 * 2);
        param_1 = param_1 + 1;
      }
      param_1 = param_1 + (iVar10 - iVar9);
    }
  }
  else {
    uVar1 = *(ushort *)(param_2 + 7);
    iVar6 = iVar9;
    if (iVar11 != 0) {
      do {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (*param_1 != uVar1) {
            uVar2 = *(ushort *)(&DAT_104ea154 + (uint)*param_1 * 2);
            *param_1 = uVar2;
            if (uVar2 == uVar1) {
              *param_1 = uVar2 ^ 1;
            }
          }
          param_1 = param_1 + 1;
        }
        iVar11 = iVar11 + -1;
        param_1 = param_1 + (iVar10 - iVar9);
        iVar6 = iVar9;
      } while (iVar11 != 0);
      return;
    }
  }
  return;
}

