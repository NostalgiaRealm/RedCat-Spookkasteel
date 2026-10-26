/*
 * FUN_004bc88c at 004bc88c
 * undefined __register FUN_004bc88c(void)
 * Address ranges: 004bc88c-004bc8f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc88c(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar1 = CoInitialize((LPVOID)0x0);
  iVar2 = FUN_00408554(uVar1);
  DAT_005719f0 = iVar2 != 0;
  if (!(bool)DAT_005719f0) {
    piVar3 = FUN_0040ceec((int *)&DAT_00408ac4,'\x01',
                          (undefined4 *)"DAO35: OLE (COM) initialization failed");
    FUN_0040382c(piVar3);
  }
  _DAT_005744b4 = 10;
  _DAT_005744bc = 0x80020004;
  FUN_004b6e74(&DAT_005744c8);
  puVar4 = (undefined4 *)&DAT_005744c8;
  puVar5 = (undefined4 *)&DAT_005744e8;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  return;
}

