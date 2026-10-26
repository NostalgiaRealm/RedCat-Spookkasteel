/*
 * FUN_00409cc9 at 00409cc9
 * undefined4 __cdecl FUN_00409cc9(LPCSTR param_1, LPCSTR param_2, int param_3)
 * Address ranges: 00409cc9-00409e39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_00409cc9(LPCSTR param_1,LPCSTR param_2,int param_3)

{
  bool bVar1;
  LPCSTR pCVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  char *lpString1;
  CHAR local_34c [256];
  byte local_24c;
  char acStack_105 [257];
  
  pCVar2 = FUN_0040be4c(param_1,0x2a);
  if ((pCVar2 == (LPCSTR)0x0) && (pCVar2 = FUN_0040be4c(param_1,0x3f), pCVar2 == (LPCSTR)0x0)) {
    FUN_00409e3a(param_1);
    if ((param_3 != 0) && (*param_2 != '\0')) {
      FUN_0040b32f(param_2,param_1);
    }
  }
  else {
    iVar3 = lstrlenA(param_1);
    if ((2 < iVar3) && (iVar3 = lstrcmpA(param_1 + iVar3 + -3,&DAT_00412658), iVar3 == 0)) {
      iVar3 = lstrlenA(param_1);
      if (iVar3 < 4) {
        return 0;
      }
      GetWindowsDirectoryA((LPSTR)((int)acStack_105 + 1),0x100);
      iVar3 = lstrcmpiA(param_1,(LPCSTR)((int)acStack_105 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      GetSystemDirectoryA((LPSTR)((int)acStack_105 + 1),0x100);
      iVar3 = lstrcmpiA(param_1,(LPCSTR)((int)acStack_105 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = lstrcmpiA(param_1,DAT_00413738);
      if (iVar3 == 0) {
        return 0;
      }
    }
    lstrcpyA((LPSTR)((int)acStack_105 + 1),param_1);
    iVar3 = lstrlenA((LPCSTR)((int)acStack_105 + 1));
    for (lpString1 = acStack_105 + iVar3; (uint)((int)acStack_105 + 1U) < lpString1;
        lpString1 = lpString1 + -1) {
      if (*lpString1 == '\\') goto LAB_00409dd9;
    }
    if (*lpString1 == '\\') {
LAB_00409dd9:
      lpString1 = lpString1 + 1;
    }
    bVar1 = FUN_0040a6fe((LPCSTR)((int)acStack_105 + 1),7,local_34c);
    iVar3 = CONCAT31(extraout_var,bVar1);
    while (iVar3 == 0) {
      if ((local_24c & 0x10) == 0) {
        lstrcpyA(lpString1,local_34c);
        FUN_00409e3a((LPCSTR)((int)acStack_105 + 1));
      }
      bVar1 = FUN_0040a740(local_34c);
      iVar3 = CONCAT31(extraout_var_00,bVar1);
    }
    FUN_0040a77d((int)local_34c);
  }
  return 1;
}

