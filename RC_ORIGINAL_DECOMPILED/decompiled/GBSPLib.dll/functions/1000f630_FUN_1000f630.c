/*
 * FUN_1000f630 at 1000f630
 * undefined FUN_1000f630(void)
 * Address ranges: 1000f630-1000f6e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000f630(void)

{
  int iVar1;
  int iVar2;
  
  (*DAT_1014e35c)(s_____Build_Patches_____1003945c);
  DAT_10313034 = DAT_1014e2c0;
  DAT_1031303c = FUN_10014310(DAT_1014e2c0 << 2);
  if (DAT_1031303c == 0) {
    (*DAT_1014e358)(s_BuilkdPatches__Not_enough_memory_1003942c);
    return 0;
  }
  iVar2 = 0;
  if (0 < DAT_1014e2c0) {
    do {
      *(undefined4 *)(DAT_1031303c + iVar2 * 4) = 0;
      iVar1 = FUN_1000fd40(iVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_1014e2c0);
  }
  DAT_10313034 = 0;
  iVar2 = FUN_1000fc00();
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_BuildPatches__Could_not_finalize_100393f8);
    return 0;
  }
  if (DAT_10037ac0 != 0) {
    (*DAT_1014e35c)(s_Num_Patches____5i_100393dc,DAT_10313034);
  }
  return 1;
}

