/*
 * FUN_00409ac4 at 00409ac4
 * char __cdecl FUN_00409ac4(LPCSTR param_1, undefined4 param_2, int param_3)
 * Address ranges: 00409ac4-00409cc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __cdecl FUN_00409ac4(LPCSTR param_1,undefined4 param_2,int param_3)

{
  LSTATUS LVar1;
  int iVar2;
  void *this;
  CHAR local_210 [256];
  int local_110 [64];
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  if (DAT_004136ec == 0) {
    return '\0';
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,PTR_s_Software_Microsoft_Windows_Curre_00412058,0,0x1f,
                        &local_8);
  if (LVar1 != 0) {
    return '\0';
  }
  local_10 = 0x100;
  LVar1 = RegQueryValueExA(local_8,param_1,(LPDWORD)0x0,&local_c,(LPBYTE)local_110,&local_10);
  if (LVar1 == 0) {
    if (local_c == 1) {
      local_110[0] = FUN_0040c37e(this,(byte *)local_110);
    }
    else if ((local_c != 4) && ((local_c != 3 || (local_10 != 4)))) goto LAB_00409cb9;
    if (0 < local_110[0]) {
      if (DAT_00413770 == 0) {
        iVar2 = -param_3;
      }
      else {
        iVar2 = -1;
      }
      iVar2 = local_110[0] + iVar2;
      local_110[0] = iVar2;
      if (iVar2 < 0) {
        local_110[0] = 0;
      }
      if (iVar2 < 1) {
        FUN_0040ab9d(DAT_00413a90,0x26,local_210,0x100);
        wsprintfA(DAT_00413754,local_210,param_1);
        FUN_0040ab9d(DAT_00413a90,0x27,local_210,0x100);
        lstrcatA(DAT_00413754,local_210);
        if ((DAT_0041370c == 0) && (DAT_00413b90 == 0)) {
          if (DAT_00413730 == 0) {
            if (DAT_00413a8c != 0) {
              KillTimer(DAT_00413690,0x19);
            }
            iVar2 = DialogBoxParamA(DAT_00413a90,(LPCSTR)0x68,DAT_00413690,_SharedDlg_16,0);
            if (DAT_00413a8c != 0) {
              SetTimer(DAT_00413690,0x19,0x96,(TIMERPROC)0x0);
            }
            if (iVar2 == 1) {
              DAT_00413b90 = 1;
            }
            if (iVar2 == 0x3ef) {
              iVar2 = 0x3ed;
              DAT_00413730 = 1;
            }
            SetFocus(DAT_00413690);
          }
          else {
            iVar2 = 0x3ed;
          }
        }
        else {
          iVar2 = 7;
        }
        RegDeleteValueA(local_8,param_1);
        return (iVar2 == 0x3ed) + '\x01';
      }
      if (0 < local_110[0]) {
        RegSetValueExA(local_8,param_1,0,4,(BYTE *)local_110,4);
        return '\x01';
      }
    }
  }
LAB_00409cb9:
  RegCloseKey(local_8);
  return '\0';
}

