/*
 * FUN_1000fc00 at 1000fc00
 * undefined FUN_1000fc00(void)
 * Address ranges: 1000fc00-1000fcad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000fc00(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_1014e2c0) {
    do {
      for (puVar1 = *(undefined4 **)(DAT_1031303c + iVar3 * 4); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        FUN_1000fa90(iVar3,puVar1);
        DAT_10313034 = DAT_10313034 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1014e2c0);
  }
  DAT_10313038 = FUN_10014310(DAT_10313034 * 4);
  if (DAT_10313038 != 0) {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < DAT_1014e2c0) {
      do {
        for (puVar1 = *(undefined4 **)(DAT_1031303c + iVar2 * 4); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          iVar3 = iVar3 + 1;
          *(undefined4 **)(DAT_10313038 + -4 + iVar3 * 4) = puVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_1014e2c0);
    }
    return 1;
  }
  (*DAT_1014e358)(s_FinalizePatches__Out_of_memory_f_10039550);
  return 0;
}

