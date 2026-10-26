/*
 * FUN_1003011b at 1003011b
 * undefined FUN_1003011b(void)
 * Address ranges: 1003011b-100302c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003011b(undefined4 param_1)

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
  
  FUN_1002e819(0x19);
  CodePage = FUN_100302c8(param_1);
  if (CodePage != DAT_1052a760) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1003f638;
LAB_10030158:
      if (*pUVar5 != CodePage) goto code_r0x1003015c;
      local_8 = 0;
      puVar15 = &DAT_1052a880;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1003f648);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1003f630)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1052a880 + uVar8 + 1);
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
      DAT_1052a77c = 1;
      DAT_1052a760 = CodePage;
      DAT_1052a984 = FUN_10030312(CodePage);
      DAT_1052a770 = *(undefined4 *)(iVar12 + 0x1003f63c);
      DAT_1052a774 = *(undefined4 *)(iVar12 + 0x1003f640);
      DAT_1052a778 = *(undefined4 *)(iVar12 + 0x1003f644);
      goto LAB_100302ac;
    }
    goto LAB_100302a7;
  }
  goto LAB_10030142;
code_r0x1003015c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1003f727 < (int)pUVar5) goto code_r0x10030167;
  goto LAB_10030158;
code_r0x10030167:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1052a984 = 0;
    puVar15 = &DAT_1052a880;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_1052a77c = 0;
      DAT_1052a760 = CodePage;
    }
    else {
      DAT_1052a760 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1052a880 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1052a880 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1052a984 = FUN_10030312(CodePage);
      DAT_1052a77c = 1;
    }
    DAT_1052a770 = 0;
    DAT_1052a774 = 0;
    DAT_1052a778 = 0;
  }
  else {
    if (DAT_1052a5b8 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100302b9;
    }
LAB_100302a7:
    FUN_10030345();
  }
LAB_100302ac:
  FUN_1003036e();
LAB_10030142:
  uVar14 = 0;
LAB_100302b9:
  FUN_1002e87a(0x19);
  return uVar14;
}

