/*
 * FUN_0040a07a at 0040a07a
 * undefined4 __stdcall FUN_0040a07a(void)
 * Address ranges: 0040a07a-0040a280
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040a07a(void)

{
  LSTATUS LVar1;
  HWND pHVar2;
  int iVar3;
  void *this;
  CHAR local_314 [256];
  CHAR local_214 [256];
  int local_114 [64];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  if (DAT_004136b0 == 0) {
    return 0;
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Borland_Database_Engine_0041271c,0,0x1f,&local_8
                       );
  if (LVar1 != 0) {
    return 0;
  }
  local_c = 0x100;
  LVar1 = RegQueryValueExA(local_8,s_UseCount_00412710,(LPDWORD)0x0,&local_10,(LPBYTE)local_114,
                           &local_c);
  if (LVar1 == 0) {
    if (local_10 == 1) {
      local_114[0] = FUN_0040c37e(this,(byte *)local_114);
    }
    else if (local_10 != 4) {
      if (local_10 != 3) {
        return 0;
      }
      if (local_c != 4) {
        return 0;
      }
    }
    if (local_114[0] == 1) {
      do {
        pHVar2 = FindWindowA(s_IB_Server_00412704,(LPCSTR)0x0);
        if (pHVar2 == (HWND)0x0) {
          iVar3 = 5;
        }
        else {
          FUN_0040ab9d(DAT_00413a90,0x1c,local_314,0x100);
          FUN_0040ab9d(DAT_00413a90,0x19,local_214,0x100);
          iVar3 = MessageBoxA(DAT_00413690,local_314,local_214,2);
          if (iVar3 == 3) {
            return 1;
          }
        }
      } while (iVar3 != 5);
      RegCloseKey(local_8);
      FUN_0040a281(s_Software_Borland_Database_Engine_0041271c,2);
      FUN_0040a281(s_Software_Borland_BLW32_004126ec,2);
      LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Borland_004126d8,0,0x1f,&local_8);
      if (LVar1 != 0) {
        return 0;
      }
      LVar1 = RegEnumValueA(local_8,0,(LPSTR)local_114,&local_c,(LPDWORD)0x0,(LPDWORD)0x0,
                            (LPBYTE)0x0,(LPDWORD)0x0);
      if (LVar1 == 0) {
        RegCloseKey(local_8);
        return 0;
      }
      local_c = 0x100;
      local_14 = RegEnumKeyExA(local_8,0,(LPSTR)local_114,&local_c,(LPDWORD)0x0,(LPSTR)0x0,
                               (LPDWORD)0x0,(PFILETIME)0x0);
      RegCloseKey(local_8);
      if (local_14 == 0) {
        return 0;
      }
      RegDeleteKeyA((HKEY)0x80000002,s_Software_Borland_004126d8);
      return 0;
    }
    if (local_114[0] < 2) {
      return 0;
    }
    wsprintfA((LPSTR)local_114,&DAT_00412434,local_114[0] + -1);
    iVar3 = lstrlenA((LPCSTR)local_114);
    RegSetValueExA(local_8,s_UseCount_00412710,0,1,(BYTE *)local_114,iVar3 + 1);
  }
  RegCloseKey(local_8);
  return 0;
}

