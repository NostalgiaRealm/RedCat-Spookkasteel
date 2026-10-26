/*
 * FUN_100098a9 at 100098a9
 * undefined4 __cdecl FUN_100098a9(int param_1)
 * Address ranges: 100098a9-10009a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100098a9(int param_1)

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
  
  FUN_10006171(0x19);
  CodePage = FUN_10009a56(param_1);
  if (CodePage != DAT_101f5730) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100111c0;
LAB_100098e6:
      if (*pUVar5 != CodePage) goto code_r0x100098ea;
      local_8 = 0;
      puVar15 = &DAT_101f5860;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100111d0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100111b8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_101f5860 + uVar8 + 1);
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
      _DAT_101f574c = 1;
      DAT_101f5730 = CodePage;
      DAT_101f5964 = FUN_10009aa0(CodePage);
      DAT_101f5740 = *(undefined4 *)(iVar12 + 0x100111c4);
      DAT_101f5744 = *(undefined4 *)(iVar12 + 0x100111c8);
      DAT_101f5748 = *(undefined4 *)(iVar12 + 0x100111cc);
      goto LAB_10009a3a;
    }
    goto LAB_10009a35;
  }
  goto LAB_100098d0;
code_r0x100098ea:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100112af < (int)pUVar5) goto code_r0x100098f5;
  goto LAB_100098e6;
code_r0x100098f5:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_101f5964 = 0;
    puVar15 = &DAT_101f5860;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_101f574c = 0;
      DAT_101f5730 = CodePage;
    }
    else {
      DAT_101f5730 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_101f5860 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_101f5860 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_101f5964 = FUN_10009aa0(CodePage);
      _DAT_101f574c = 1;
    }
    DAT_101f5740 = 0;
    DAT_101f5744 = 0;
    DAT_101f5748 = 0;
  }
  else {
    if (DAT_100e3c4c == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10009a47;
    }
LAB_10009a35:
    FUN_10009ad3();
  }
LAB_10009a3a:
  FUN_10009afc();
LAB_100098d0:
  uVar14 = 0;
LAB_10009a47:
  FUN_100061d2(0x19);
  return uVar14;
}

