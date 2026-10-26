/*
 * FUN_0040eb78 at 0040eb78
 * undefined4 __cdecl FUN_0040eb78(int param_1)
 * Address ranges: 0040eb78-0040ed10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040eb78(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  BYTE *pBVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  _cpinfo local_1c;
  uint local_8;
  
  CodePage = FUN_0040ed11(param_1);
  if (CodePage == DAT_00413ba0) {
    return 0;
  }
  if (CodePage != 0) {
    iVar11 = 0;
    pUVar5 = &DAT_004133e0;
    do {
      if (*pUVar5 == CodePage) {
        puVar13 = &DAT_00413cc0;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_8 = 0;
        iVar11 = iVar11 * 0x30;
        *(undefined1 *)puVar13 = 0;
        pbVar12 = (byte *)(iVar11 + 0x4133f0);
        do {
          bVar3 = *pbVar12;
          pbVar10 = pbVar12;
          while ((bVar3 != 0 && (bVar3 = pbVar10[1], bVar3 != 0))) {
            uVar7 = (uint)*pbVar10;
            if (uVar7 <= bVar3) {
              bVar4 = (&DAT_004133d8)[local_8];
              do {
                pbVar2 = (byte *)((int)&DAT_00413cc0 + uVar7 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar7 = uVar7 + 1;
              } while (uVar7 <= bVar3);
            }
            pbVar10 = pbVar10 + 2;
            bVar3 = *pbVar10;
          }
          local_8 = local_8 + 1;
          pbVar12 = pbVar12 + 8;
        } while (local_8 < 4);
        _DAT_00413bbc = 1;
        DAT_00413ba0 = CodePage;
        DAT_00413dc4 = FUN_0040ed5b(CodePage);
        DAT_00413bb0 = *(undefined4 *)(iVar11 + 0x4133e4);
        DAT_00413bb4 = *(undefined4 *)(iVar11 + 0x4133e8);
        DAT_00413bb8 = *(undefined4 *)(iVar11 + 0x4133ec);
        goto LAB_0040ed00;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar11 = iVar11 + 1;
    } while ((int)pUVar5 < 0x4134d0);
    BVar6 = GetCPInfo(CodePage,&local_1c);
    if (BVar6 == 1) {
      puVar13 = &DAT_00413cc0;
      DAT_00413ba0 = CodePage;
      for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_00413dc4 = 0;
      if (local_1c.MaxCharSize < 2) {
        _DAT_00413bbc = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar8 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar8;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar8[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              pbVar12 = (byte *)((int)&DAT_00413cc0 + uVar7 + 1);
              *pbVar12 = *pbVar12 | 4;
            }
            pBVar1 = pBVar8 + 1;
            pBVar8 = pBVar8 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          pbVar12 = (byte *)((int)&DAT_00413cc0 + uVar7 + 1);
          *pbVar12 = *pbVar12 | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_00413dc4 = FUN_0040ed5b(CodePage);
        _DAT_00413bbc = 1;
      }
      DAT_00413bb0 = 0;
      DAT_00413bb4 = 0;
      DAT_00413bb8 = 0;
      goto LAB_0040ed00;
    }
    if (DAT_00413674 == 0) {
      return 0xffffffff;
    }
  }
  FUN_0040ed8e();
LAB_0040ed00:
  FUN_0040edb7();
  return 0;
}

