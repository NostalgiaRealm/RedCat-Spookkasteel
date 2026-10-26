/*
 * FUN_10004400 at 10004400
 * undefined FUN_10004400(void)
 * Address ranges: 10004400-1000452e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004400(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = DAT_10036408;
  iVar6 = 0;
  iVar5 = DAT_1003fdf4;
  if (0 < DAT_10311d00) {
    do {
      if (DAT_1014e350 != 0) {
        (*DAT_1014e35c)(s_Cancel_requested____10036a5c);
        return 0;
      }
      iVar1 = (&DAT_10265cf8)[iVar6 * 0x2b];
      if (iVar1 != 0) {
        iVar2 = (&DAT_10265d04)[iVar6 * 0x2b];
        (&DAT_100dc200)[iVar2 * 0x39] = (&DAT_10265d48)[iVar6 * 0x2b];
        uVar3 = (&DAT_10265d50)[iVar6 * 0x2b];
        (&DAT_100dc204)[iVar2 * 0x39] = (&DAT_10265d4c)[iVar6 * 0x2b];
        (&DAT_100dc208)[iVar2 * 0x39] = uVar3;
        if (iVar6 == 0) {
          iVar5 = FUN_10004070(&DAT_100dc1f8,DAT_10265cf8);
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = FUN_10004330();
          if (iVar5 == 0) {
            (*DAT_1014e358)(s_Could_not_get_SkyBox_names_from_w_10036a30);
            return 0;
          }
        }
        else {
          if (DAT_1014e1f8 == 0) {
            DAT_10036408 = 0;
          }
          iVar5 = FUN_10004260(&DAT_100dc1f8 + iVar5 * 0x39,iVar1);
          if (iVar5 == 0) {
            return 0;
          }
        }
        iVar5 = DAT_1003fdf4 + 1;
        DAT_1003fdf4 = iVar5;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_10311d00);
  }
  DAT_10036408 = uVar4;
  return 1;
}

