/*
 * FUN_10001b80 at 10001b80
 * undefined4 __stdcall FUN_10001b80(void)
 * Address ranges: 10001b80-10001c10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001b80(void)

{
  int iVar1;
  
  if (DAT_1001bcb0 != (int *)0x0) {
    iVar1 = FUN_10004960(DAT_1001b3f0,DAT_1001b47c,DAT_1001b480,DAT_1001b484,DAT_1001eee0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*DAT_1001bcb0 + 100))(DAT_1001bcb0);
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_10002700(s_D3DMain_RestoreAllSurfaces__AppI_10016d9c);
      return 0;
    }
  }
  if (DAT_100ec088 != 0) {
    iVar1 = FUN_10005340(DAT_100ec088);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (DAT_100ec0f4 != 0) {
    iVar1 = FUN_10005340(DAT_100ec0f4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

