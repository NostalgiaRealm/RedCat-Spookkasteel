/*
 * FUN_0040ab9d at 0040ab9d
 * DWORD __cdecl FUN_0040ab9d(HINSTANCE param_1, UINT param_2, LPCSTR param_3, DWORD param_4)
 * Address ranges: 0040ab9d-0040ac68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD __cdecl FUN_0040ab9d(HINSTANCE param_1,UINT param_2,LPCSTR param_3,DWORD param_4)

{
  DWORD DVar1;
  LPSTR lpString1;
  LPCSTR pCVar2;
  CHAR local_224 [512];
  CHAR local_24 [32];
  
  wsprintfA(local_24,s_Msg_d_004127b0,param_2);
  DVar1 = GetPrivateProfileStringA
                    (s_Language_004127a0,local_24,&DAT_004127ac,param_3,param_4,DAT_00413abc);
  if ((*param_3 == '\x7f') && (DVar1 == 1)) {
    LoadStringA(param_1,param_2,param_3,param_4);
  }
  else {
    lpString1 = FUN_0040be4c(param_3,0x7c);
    while (lpString1 != (LPSTR)0x0) {
      lstrcpyA(local_224,lpString1 + 1);
      lstrcpyA(lpString1,&DAT_0041279c);
      lstrcpyA(lpString1 + 2,local_224);
      lpString1 = FUN_0040be4c(param_3,0x7c);
    }
    pCVar2 = FUN_0040be4c(param_3,0x7e);
    while (pCVar2 != (LPCSTR)0x0) {
      *pCVar2 = ' ';
      pCVar2 = FUN_0040be4c(param_3,0x7e);
    }
  }
  return DVar1;
}

