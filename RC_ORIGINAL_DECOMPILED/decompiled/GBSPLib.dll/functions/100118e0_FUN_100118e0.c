/*
 * FUN_100118e0 at 100118e0
 * undefined FUN_100118e0(void)
 * Address ranges: 100118e0-10011a51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100118e0(float *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  if (((uint)param_1[10] & 0x40) != 0) {
    param_1[10] = (float)((uint)param_1[10] | 0x20);
  }
  if (((uint)param_1[10] & 4) != 0) {
    param_1[10] = (float)((uint)param_1[10] | 2);
  }
  if (((uint)param_1[10] & 6) != 0) {
    param_1[10] = (float)((uint)param_1[10] | 0x8000);
  }
  if (((uint)param_1[10] & 0x20) != 0) {
    param_1[10] = (float)((uint)param_1[10] | 0x8000);
  }
  iVar3 = 0;
  if (0 < DAT_10393068) {
    pfVar1 = (float *)&DAT_10313070;
    do {
      if (((((pfVar1[-2] == *param_1) && (pfVar1[-1] == param_1[1])) && (*pfVar1 == param_1[2])) &&
          (((pfVar1[1] == param_1[3] && (pfVar1[2] == param_1[4])) &&
           ((pfVar1[3] == param_1[5] && ((pfVar1[4] == param_1[6] && (pfVar1[5] == param_1[7])))))))
          ) && ((pfVar1[6] == param_1[8] &&
                (((((pfVar1[7] == param_1[9] && (pfVar1[8] == param_1[10])) &&
                   (pfVar1[9] == param_1[0xb])) &&
                  ((pfVar1[10] == param_1[0xc] && (pfVar1[0xb] == param_1[0xd])))) &&
                 ((pfVar1[0xc] == param_1[0xe] && (pfVar1[0xd] == param_1[0xf])))))))) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pfVar1 = pfVar1 + 0x10;
    } while (iVar3 < DAT_10393068);
  }
  if (DAT_10393068 < 0x2000) {
    pfVar1 = (float *)(&DAT_10313068 + iVar3 * 0x10);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar1 = *param_1;
      param_1 = param_1 + 1;
      pfVar1 = pfVar1 + 1;
    }
    DAT_10393068 = DAT_10393068 + 1;
    return iVar3;
  }
  (*DAT_1014e358)(s_FindTexInfo__Too_much_texture_in_10039d2c);
  return -1;
}

