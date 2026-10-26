/*
 * FUN_0061d7a5 at 0061d7a5
 * undefined FUN_0061d7a5(void)
 * Address ranges: 0061d7a5-0061d86c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0061d7a5(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_0070ffec == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_006b26b0[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_0070fffc,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_006b28bc) {
          if ((int)param_3 < (int)DAT_006b28bc) {
            DAT_0070ff98 = 0x2a;
            return 0xffffffff;
          }
          iVar2 = MultiByteToWideChar(DAT_0070fffc,9,(LPCSTR)param_2,DAT_006b28bc,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_006b28bc;
          }
        }
        if ((DAT_006b28bc <= param_3) && (param_2[1] != 0)) {
          return DAT_006b28bc;
        }
      }
      DAT_0070ff98 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

