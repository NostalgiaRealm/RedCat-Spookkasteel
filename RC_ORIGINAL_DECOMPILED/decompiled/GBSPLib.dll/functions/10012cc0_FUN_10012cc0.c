/*
 * FUN_10012cc0 at 10012cc0
 * undefined FUN_10012cc0(void)
 * Address ranges: 10012cc0-10012e84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10012cc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  uVar6 = DAT_104e98d8;
  puVar1 = (undefined4 *)(DAT_104e98d0 + param_1 * 0xc);
  iVar8 = DAT_104e98bc * param_1 + DAT_104e98b0;
  puVar10 = DAT_104e98cc;
  for (uVar5 = DAT_104e98d8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  for (puVar1 = (undefined4 *)*puVar1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar9 = puVar1[0xc];
    if ((iVar9 == 0) && (iVar9 = puVar1[0xb], iVar9 == 0)) {
      (*DAT_1014e358)(s_No_VisInfo_for_portal__1003a234);
      return 0;
    }
    iVar3 = 0;
    if (0 < (int)DAT_104e98d8) {
      do {
        *(byte *)((int)DAT_104e98cc + iVar3) =
             *(byte *)((int)DAT_104e98cc + iVar3) | *(byte *)(iVar3 + iVar9);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)DAT_104e98d8);
    }
    if (puVar1[0xb] != 0) {
      FUN_10014360(puVar1[0xb]);
      puVar1[0xb] = 0;
      _DAT_1003fde8 = 0;
    }
    if (puVar1[0xc] != 0) {
      FUN_10014360(puVar1[0xc]);
      puVar1[0xc] = 0;
      _DAT_1003fde8 = 0;
    }
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
  }
  iVar9 = 0;
  if (0 < DAT_104e98c8) {
    iVar3 = 0;
    do {
      if ((*(byte *)((iVar9 >> 3) + (int)DAT_104e98cc) & (byte)(1 << ((byte)iVar9 & 7))) != 0) {
        iVar2 = *(int *)(iVar3 + 0x34 + DAT_104e98b4);
        pbVar4 = (byte *)((iVar2 >> 3) + iVar8);
        *pbVar4 = *pbVar4 | '\x01' << ((byte)iVar2 & 7);
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + 0x44;
    } while (iVar9 < DAT_104e98c8);
  }
  pbVar4 = (byte *)((param_1 >> 3) + iVar8);
  bVar7 = (byte)(1 << ((byte)param_1 & 7));
  if ((bVar7 & *(byte *)((param_1 >> 3) + iVar8)) != 0) {
    (*DAT_1014e35c)(s__WARNING__CollectLeafVisBits__Le_1003a27c,param_1);
  }
  *pbVar4 = *pbVar4 | bVar7;
  iVar9 = 0;
  if (0 < DAT_104e98dc) {
    do {
      if ((*(byte *)((iVar9 >> 3) + iVar8) & (byte)(1 << ((byte)iVar9 & 7))) != 0) {
        DAT_104e98ac = DAT_104e98ac + 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < DAT_104e98dc);
  }
  if (DAT_104e98ac != 0) {
    *(int *)(DAT_1014e2d0 + param_1 * 4) = iVar8 - DAT_104e98b0;
    return 1;
  }
  (*DAT_1014e358)(s_CollectLeafVisBits__Leaf_can_t_s_1003a24c);
  return 0;
}

