/*
 * FUN_10032104 at 10032104
 * undefined FUN_10032104(void)
 * Address ranges: 10032104-100321cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10032104(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_1052a5d8 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_1003d120[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_1052a5e8,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_1003d32c) {
          if ((int)param_3 < (int)DAT_1003d32c) goto LAB_10032196;
          iVar2 = MultiByteToWideChar(DAT_1052a5e8,9,(LPCSTR)param_2,DAT_1003d32c,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_1003d32c;
          }
        }
        if ((DAT_1003d32c <= param_3) && (param_2[1] != 0)) {
          return DAT_1003d32c;
        }
      }
LAB_10032196:
      puVar3 = (undefined4 *)FUN_1002b3dc();
      *puVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

