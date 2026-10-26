/*
 * FUN_00498e94 at 00498e94
 * int __register FUN_00498e94(int param_1, int * param_2, int param_3)
 * Address ranges: 00498e94-0049900b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00498e94(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  HPALETTE pHVar3;
  PALETTEENTRY *pPVar4;
  PALETTEENTRY *pPVar5;
  byte bVar6;
  PALETTEENTRY local_82c [256];
  LOGPALETTE local_42c [128];
  byte *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_10;
  int *local_c;
  int local_8;
  
  bVar6 = 0;
  local_1c = param_3;
  if (-1 < param_3 + -1) {
    local_18 = 0;
    local_24 = param_3;
    do {
      local_28 = (byte *)(param_2 + local_18);
      local_1c = local_1c + (uint)local_28[2] + (uint)local_28[1] + (uint)*local_28;
      local_18 = local_18 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_0041300c(*(int *)(param_1 + 4));
  if (-1 < iVar1 + -1) {
    local_18 = 0;
    local_24 = iVar1;
    do {
      local_20 = (int *)FUN_00413014(*(int *)(local_8 + 4),local_18);
      if (((*(int *)((int)local_20 + 0xc) == local_1c) &&
          (*(int *)((int)local_20 + 0x418) == local_10)) &&
         (uVar2 = FUN_00409738((int *)((int)local_20 + 0x18),local_c,local_10 << 2),
         (char)uVar2 != '\0')) {
        FUN_00498dc8((int)local_20);
        return *(int *)((int)local_20 + 0x10);
      }
      local_18 = local_18 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  local_20 = FUN_00412c18((int *)&PTR_FUN_00498cdc,'\x01',*(int **)(local_8 + 4));
  local_20[3] = local_1c;
  FUN_00402944(local_c,local_20 + 6,local_10 << 2);
  local_20[0x106] = local_10;
  local_42c[0].palVersion = 0x300;
  local_42c[0].palNumEntries = (WORD)local_10;
  FUN_00498c58((int)local_c,(int)local_82c);
  pPVar4 = local_82c;
  pPVar5 = local_42c[0].palPalEntry;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pPVar5 = *pPVar4;
    pPVar4 = pPVar4 + (uint)bVar6 * -2 + 1;
    pPVar5 = pPVar5 + (uint)bVar6 * -2 + 1;
  }
  pHVar3 = CreatePalette(local_42c);
  local_20[4] = (int)pHVar3;
  FUN_00498dc8((int)local_20);
  return local_20[4];
}

