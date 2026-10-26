/*
 * FUN_5f002560 at 5f002560
 * undefined4 __cdecl FUN_5f002560(int param_1)
 * Address ranges: 5f002560-5f0026e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_5f002560(int param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  DWORD *pDVar7;
  DWORD *pDVar8;
  bool bVar9;
  HBITMAP local_30;
  int local_2c [3];
  DWORD local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (DAT_5f005240 == 0) {
    return 0;
  }
  uVar5 = 0;
  do {
    uVar4 = (short)uVar5 + 1;
    DVar1 = GetSysColor((uint)(ushort)(&DAT_5f00b170)[uVar5]);
    (&local_20)[uVar5] = DVar1;
    uVar5 = (uint)uVar4;
  } while (uVar4 < 8);
  if (DAT_5f005260 == 0x300) {
    local_20 = 0xffffff;
  }
  if (((local_8 == 0) || (local_1c == local_8)) && (local_8 = 0xc0c0c0, local_1c != 0x808080)) {
    local_8 = 0x808080;
  }
  if (param_1 == 0) {
    iVar3 = 0x20;
    bVar9 = true;
    pcVar6 = &DAT_5f005264;
    pDVar7 = &local_20;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar6 == (char)*pDVar7;
      pcVar6 = pcVar6 + 1;
      pDVar7 = (DWORD *)((int)pDVar7 + 1);
    } while (bVar9);
    if (bVar9) {
      return 1;
    }
  }
  local_30 = FUN_5f0047f0(DAT_5f005258,(LPCWSTR)0x67c7,local_c,local_1c,local_18,local_20,local_10,
                          local_4);
  uVar5 = 0;
  do {
    uVar4 = (short)uVar5 + 1;
    pHVar2 = CreateSolidBrush((&local_20)[uVar5]);
    local_2c[uVar5] = (int)pHVar2;
    uVar5 = (uint)uVar4;
  } while (uVar4 < 3);
  uVar4 = 0;
  do {
    if (local_2c[uVar4] == 0) goto LAB_5f0026b8;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  if (local_30 != (HBITMAP)0x0) {
    FUN_5f0012e0();
    DAT_5f005284 = local_2c[0];
    DAT_5f005288 = local_2c[1];
    DAT_5f00528c = local_2c[2];
    pDVar7 = &local_20;
    pDVar8 = (DWORD *)&DAT_5f005264;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pDVar8 = *pDVar7;
      pDVar7 = pDVar7 + 1;
      pDVar8 = pDVar8 + 1;
    }
    DAT_5f005290 = local_30;
    return 1;
  }
LAB_5f0026b8:
  uVar5 = 0;
  do {
    uVar4 = (short)uVar5 + 1;
    FUN_5f0012c0(local_2c + uVar5);
    uVar5 = (uint)uVar4;
  } while (uVar4 < 3);
  FUN_5f0012c0(&local_30);
  return 0;
}

