/*
 * FUN_100028a0 at 100028a0
 * undefined FUN_100028a0(void)
 * Address ranges: 100028a0-10002904
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100028a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  if (0 < DAT_1003fdf4) {
    puVar3 = &DAT_100dc1f8;
    do {
      iVar1 = FUN_1000ee80(*puVar3);
      if (iVar1 == 0) {
        (*DAT_1014e358)(s_FreeAllGBSPData__Could_not_free_p_100364dc);
        return 0;
      }
      FUN_10004030(*puVar3);
      puVar4 = puVar3;
      for (iVar1 = 0x39; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x39;
    } while (iVar2 < DAT_1003fdf4);
  }
  return 1;
}

