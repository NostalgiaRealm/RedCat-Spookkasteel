/*
 * FUN_100127d0 at 100127d0
 * undefined FUN_100127d0(void)
 * Address ranges: 100127d0-100128b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100127d0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  (*DAT_1014e35c)(s_____Weld_Model_Verts_____1003a0c8);
  iVar2 = 0;
  DAT_1041e090 = 0;
  DAT_103df888 = 0;
  if (0 < DAT_1003fdf4) {
    puVar3 = &DAT_100dc1f8;
    do {
      iVar1 = FUN_10012760(*puVar3);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x39;
    } while (iVar2 < DAT_1003fdf4);
  }
  if (DAT_10039f48 != 0) {
    (*DAT_1014e35c)(s_____Fix_Model_TJunctions_____1003a0a8);
    iVar2 = 0;
    DAT_103df888 = 0;
    DAT_103df884 = 0;
    DAT_103df88c = 0;
    if (0 < DAT_1003fdf4) {
      puVar3 = &DAT_100dc1f8;
      do {
        iVar1 = FUN_10012480(*puVar3);
        if (iVar1 == 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x39;
      } while (iVar2 < DAT_1003fdf4);
    }
    if (DAT_10036408 != 0) {
      (*DAT_1014e35c)(s_Num_TJunctions____5i_1003a088,DAT_103df884);
      (*DAT_1014e35c)(s_Num_Fixed_Faces____5i_1003a068,DAT_103df88c);
    }
  }
  return 1;
}

