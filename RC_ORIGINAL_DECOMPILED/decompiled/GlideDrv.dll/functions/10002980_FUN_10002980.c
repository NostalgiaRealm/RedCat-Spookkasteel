/*
 * FUN_10002980 at 10002980
 * undefined4 __stdcall FUN_10002980(void)
 * Address ranges: 10002980-100029f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002980(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_101f5520 != 0) {
    iVar1 = FUN_100014d0(DAT_101f5524);
    if (iVar1 == 0) {
      FUN_10001920(4,s_GTHandle_CheckTextures__GCache_A_1000e814);
      return 0;
    }
    iVar1 = FUN_100014d0(DAT_101f5534);
    if (iVar1 == 0) {
      FUN_10001920(4,s_GTHandle_CheckTextures__GCache_A_1000e7d8);
      return 0;
    }
    puVar2 = &DAT_100e3e50;
    iVar1 = 20000;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0xe;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    DAT_101f5520 = 0;
  }
  return 1;
}

