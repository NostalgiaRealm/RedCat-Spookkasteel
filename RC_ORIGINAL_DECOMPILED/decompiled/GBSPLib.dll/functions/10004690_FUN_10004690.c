/*
 * FUN_10004690 at 10004690
 * undefined FUN_10004690(void)
 * Address ranges: 10004690-10004702
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004690(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 1;
  bVar1 = false;
  if (1 < DAT_10311d00) {
    puVar4 = &DAT_10265df4;
    do {
      if ((*(byte *)(puVar4 + 0x16) & 1) != 0) {
        iVar2 = FUN_10007d60(param_1,puVar4);
        if (iVar2 == 0) {
          return 0;
        }
        if ((*(byte *)(iVar2 + 8) & 1) == 0) {
          *(int *)(iVar2 + 0x44) = iVar3;
          bVar1 = true;
        }
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x2b;
    } while (iVar3 < DAT_10311d00);
    if (bVar1) {
      return 1;
    }
  }
  (*DAT_1014e358)(s_PlaceEntities__No_valid_entities_10036acc,DAT_10311d00);
  return 0;
}

