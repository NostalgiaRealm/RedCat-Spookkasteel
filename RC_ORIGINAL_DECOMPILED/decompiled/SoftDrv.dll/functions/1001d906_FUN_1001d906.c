/*
 * FUN_1001d906 at 1001d906
 * undefined FUN_1001d906(void)
 * Address ranges: 1001d906-1001dab2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001d906(undefined4 param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_1001a434(0x19);
  CodePage = FUN_1001dab3(param_1);
  if (CodePage != DAT_1020e9e8) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100240d0;
LAB_1001d943:
      if (*pUVar5 != CodePage) goto code_r0x1001d947;
      local_8 = 0;
      puVar15 = &DAT_1020eb00;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100240e0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100240c8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1020eb00 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_1020e9fc = 1;
      DAT_1020e9e8 = CodePage;
      DAT_1020ec04 = FUN_1001dafd(CodePage);
      DAT_1020e9f0 = *(undefined4 *)(iVar12 + 0x100240d4);
      DAT_1020e9f4 = *(undefined4 *)(iVar12 + 0x100240d8);
      DAT_1020e9f8 = *(undefined4 *)(iVar12 + 0x100240dc);
      goto LAB_1001da97;
    }
    goto LAB_1001da92;
  }
  goto LAB_1001d92d;
code_r0x1001d947:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100241bf < (int)pUVar5) goto code_r0x1001d952;
  goto LAB_1001d943;
code_r0x1001d952:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1020ec04 = 0;
    puVar15 = &DAT_1020eb00;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1020e9fc = 0;
      DAT_1020e9e8 = CodePage;
    }
    else {
      DAT_1020e9e8 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1020eb00 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1020eb00 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1020ec04 = FUN_1001dafd(CodePage);
      _DAT_1020e9fc = 1;
    }
    DAT_1020e9f0 = 0;
    DAT_1020e9f4 = 0;
    DAT_1020e9f8 = 0;
  }
  else {
    if (DAT_10025e6c == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1001daa4;
    }
LAB_1001da92:
    FUN_1001db30();
  }
LAB_1001da97:
  FUN_1001db59();
LAB_1001d92d:
  uVar14 = 0;
LAB_1001daa4:
  FUN_1001a495(0x19);
  return uVar14;
}

