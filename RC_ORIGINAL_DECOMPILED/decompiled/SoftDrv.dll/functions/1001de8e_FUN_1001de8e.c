/*
 * FUN_1001de8e at 1001de8e
 * undefined FUN_1001de8e(void)
 * Address ranges: 1001de8e-1001df00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001de8e(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_1001df0a();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_100241c0;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_1001df01();
      *puVar2 = *(undefined4 *)(iVar3 * 8 + 0x100241c4);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar1 < 0x10024328);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_1001df01();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_1001df01();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_1001df01();
  *puVar2 = 0x16;
  return;
}

