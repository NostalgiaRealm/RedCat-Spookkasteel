/*
 * FUN_1000df4f at 1000df4f
 * undefined4 __cdecl FUN_1000df4f(int param_1)
 * Address ranges: 1000df4f-1000e0fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000df4f(int param_1)

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
  
  FUN_1000a15a(0x19);
  CodePage = FUN_1000e0fc(param_1);
  if (CodePage != DAT_101c3a80) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100162b8;
LAB_1000df8c:
      if (*pUVar5 != CodePage) goto code_r0x1000df90;
      local_8 = 0;
      puVar15 = &DAT_101c3ba0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100162c8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100162b0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_101c3ba0 + uVar8 + 1);
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
      _DAT_101c3a9c = 1;
      DAT_101c3a80 = CodePage;
      DAT_101c3ca4 = FUN_1000e146(CodePage);
      DAT_101c3a90 = *(undefined4 *)(iVar12 + 0x100162bc);
      DAT_101c3a94 = *(undefined4 *)(iVar12 + 0x100162c0);
      DAT_101c3a98 = *(undefined4 *)(iVar12 + 0x100162c4);
      goto LAB_1000e0e0;
    }
    goto LAB_1000e0db;
  }
  goto LAB_1000df76;
code_r0x1000df90:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100163a7 < (int)pUVar5) goto code_r0x1000df9b;
  goto LAB_1000df8c;
code_r0x1000df9b:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_101c3ca4 = 0;
    puVar15 = &DAT_101c3ba0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_101c3a9c = 0;
      DAT_101c3a80 = CodePage;
    }
    else {
      DAT_101c3a80 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_101c3ba0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_101c3ba0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_101c3ca4 = FUN_1000e146(CodePage);
      _DAT_101c3a9c = 1;
    }
    DAT_101c3a90 = 0;
    DAT_101c3a94 = 0;
    DAT_101c3a98 = 0;
  }
  else {
    if (DAT_101c38dc == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1000e0ed;
    }
LAB_1000e0db:
    FUN_1000e179();
  }
LAB_1000e0e0:
  FUN_1000e1a2();
LAB_1000df76:
  uVar14 = 0;
LAB_1000e0ed:
  FUN_1000a1bb(0x19);
  return uVar14;
}

