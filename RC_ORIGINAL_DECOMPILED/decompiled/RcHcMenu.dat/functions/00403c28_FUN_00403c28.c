/*
 * FUN_00403c28 at 00403c28
 * bool __register FUN_00403c28(void)
 * Address ranges: 00403c28-00403c5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00403c28(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = DAT_005734a4;
  puVar4 = &DAT_005734a4;
  for (iVar2 = 0xb; iVar1 = DAT_00573038, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  LOCK();
  DAT_00573038 = 0;
  UNLOCK();
  return (bool)('\x01' - (iVar1 != 0));
}

