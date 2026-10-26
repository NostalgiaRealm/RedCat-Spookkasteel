/*
 * FUN_10007350 at 10007350
 * undefined FUN_10007350(void)
 * Address ranges: 10007350-100073c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007350(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DAT_10036408 = DAT_1003fdf0;
  iVar2 = 0;
  if (0 < DAT_1003fdf4) {
    puVar3 = &DAT_100dc1f8;
    do {
      if ((0x100dc1f8 < (int)puVar3) && (DAT_1014e1f8 == 0)) {
        DAT_10036408 = 0;
      }
      iVar1 = FUN_100071c0(puVar3,iVar2 == 0);
      if (iVar1 == 0) {
        (*DAT_1014e358)(s_PrepAllGBSPModels__Could_not_pre_10037670,iVar2);
        return 0;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x39;
    } while (iVar2 < DAT_1003fdf4);
  }
  return 1;
}

