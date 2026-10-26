/*
 * FUN_100103cb at 100103cb
 * undefined4 __cdecl FUN_100103cb(int param_1)
 * Address ranges: 100103cb-10010577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100103cb(int param_1)

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
  
  FUN_1000b2ca(0x19);
  CodePage = FUN_10010578(param_1);
  if (CodePage != DAT_100ec4c0) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10019790;
LAB_10010408:
      if (*pUVar5 != CodePage) goto code_r0x1001040c;
      local_8 = 0;
      puVar15 = &DAT_100ec5e0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100197a0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10019788)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_100ec5e0 + uVar8 + 1);
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
      _DAT_100ec4dc = 1;
      DAT_100ec4c0 = CodePage;
      DAT_100ec6e4 = FUN_100105c2(CodePage);
      DAT_100ec4d0 = *(undefined4 *)(iVar12 + 0x10019794);
      DAT_100ec4d4 = *(undefined4 *)(iVar12 + 0x10019798);
      DAT_100ec4d8 = *(undefined4 *)(iVar12 + 0x1001979c);
      goto LAB_1001055c;
    }
    goto LAB_10010557;
  }
  goto LAB_100103f2;
code_r0x1001040c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1001987f < (int)pUVar5) goto code_r0x10010417;
  goto LAB_10010408;
code_r0x10010417:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_100ec6e4 = 0;
    puVar15 = &DAT_100ec5e0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_100ec4dc = 0;
      DAT_100ec4c0 = CodePage;
    }
    else {
      DAT_100ec4c0 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_100ec5e0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_100ec5e0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_100ec6e4 = FUN_100105c2(CodePage);
      _DAT_100ec4dc = 1;
    }
    DAT_100ec4d0 = 0;
    DAT_100ec4d4 = 0;
    DAT_100ec4d8 = 0;
  }
  else {
    if (DAT_100ec320 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10010569;
    }
LAB_10010557:
    FUN_100105f5();
  }
LAB_1001055c:
  FUN_1001061e();
LAB_100103f2:
  uVar14 = 0;
LAB_10010569:
  FUN_1000b32b(0x19);
  return uVar14;
}

