/*
 * FUN_100103a0 at 100103a0
 * undefined FUN_100103a0(void)
 * Address ranges: 100103a0-100104b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100103a0(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (*DAT_1014e35c)();
  iVar3 = 0;
  if (0 < DAT_10313034) {
    do {
      iVar2 = 3;
      iVar4 = *(int *)(DAT_10313038 + iVar3 * 4);
      pfVar1 = (float *)(iVar4 + 0x3c);
      do {
        iVar2 = iVar2 + -1;
        pfVar1[3] = pfVar1[0xc] * *pfVar1 * *(float *)(iVar4 + 0x18);
        pfVar1 = pfVar1 + 1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_10313034);
  }
  iVar3 = 0;
  if (0 < DAT_10037acc) {
    do {
      if (DAT_10037ac0 != 0) {
        (*DAT_1014e35c)(s_Bounce___3i__100397b8,iVar3 + 1);
      }
      if (DAT_1014e350 != 0) {
        (*DAT_1014e35c)();
        return 0;
      }
      iVar4 = 0;
      if (0 < DAT_10313034) {
        do {
          FUN_10010320();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_10313034);
      }
      FUN_100102b0();
      if (DAT_10037ac0 != 0) {
        (*DAT_1014e35c)(s_Energy___2_2f_100397a8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_10037acc);
  }
  iVar3 = 0;
  if (0 < DAT_10313034) {
    do {
      iVar4 = FUN_10010270();
      if (iVar4 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_10313034);
  }
  return 1;
}

