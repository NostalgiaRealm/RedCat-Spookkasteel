/*
 * FUN_10001b50 at 10001b50
 * undefined4 __stdcall FUN_10001b50(void)
 * Address ranges: 10001b50-10001be0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001b50(void)

{
  int iVar1;
  
  if (DAT_100274a8 != (int *)0x0) {
    iVar1 = FUN_100038f0(DAT_10026fe8,DAT_10027074,DAT_10027078,DAT_1002707c,DAT_1002a6c8);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*DAT_100274a8 + 100))(DAT_100274a8);
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_100020f0(s_D3DMain_RestoreAllSurfaces__AppI_10013d7c);
      return 0;
    }
  }
  if (DAT_101c3670 != 0) {
    iVar1 = FUN_10004830(DAT_101c3670);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (DAT_101c36f4 != 0) {
    iVar1 = FUN_10004830(DAT_101c36f4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

