/*
 * FUN_100048b0 at 100048b0
 * undefined FUN_100048b0(void)
 * Address ranges: 100048b0-10004923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100048b0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  bVar1 = false;
  iVar4 = 1;
  if (1 < DAT_10311d00) {
    puVar3 = &DAT_10265df4;
    do {
      if (((*(byte *)(puVar3 + 0x16) & 1) != 0) &&
         (iVar2 = FUN_10007d60(param_1,puVar3), (*(byte *)(iVar2 + 8) & 1) == 0)) {
        bVar1 = true;
        iVar2 = FUN_10004760(iVar2);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x2b;
    } while (iVar4 < DAT_10311d00);
    if (bVar1) {
      return 1;
    }
  }
  (*DAT_1014e358)(s_FillFromEntities__No_valid_entit_10036b74);
  return 0;
}

