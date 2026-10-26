/*
 * FUN_0040a794 at 0040a794
 * undefined __cdecl FUN_0040a794(uint * param_1, int param_2)
 * Address ranges: 0040a794-0040a932
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040a794(uint *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  LPCSTR pCVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  void *extraout_ECX;
  uint *lpString2;
  uint *lpString1;
  void *this;
  undefined *this_00;
  CHAR local_348 [256];
  CHAR local_248 [568];
  char local_10 [16];
  
  pCVar3 = FUN_0040be4c((LPCSTR)param_1,0x7e);
  if (((pCVar3 != (LPCSTR)0x0) || (param_2 == 0)) && (DAT_004136b0 != 0)) {
    this = (void *)0x5c;
    pCVar3 = FUN_0040be4c((LPCSTR)param_1,0x5c);
    if (pCVar3 == (LPCSTR)0x0) {
      lstrcpyA(local_348,(LPCSTR)param_1);
      FUN_0040bf2e(param_1,0x100);
      iVar4 = lstrlenA((LPCSTR)param_1);
      if (*(char *)(iVar4 + -1 + (int)param_1) != '\\') {
        lstrcatA((LPSTR)param_1,&DAT_004120e0);
      }
      lstrcatA((LPSTR)param_1,local_348);
      this = extraout_ECX;
    }
    if (DAT_0041311c < 2) {
      uVar5 = *(ushort *)(PTR_DAT_00412f10 + (char)*param_1 * 2) & 0x103;
      this_00 = PTR_DAT_00412f10;
    }
    else {
      this_00 = (undefined *)0x103;
      uVar5 = FUN_0040c27e(this,(int)(char)*param_1,0x103);
    }
    if ((uVar5 != 0) && (*(char *)((int)param_1 + 1) == ':')) {
      uVar5 = FUN_0040c0a8(this_00,(int)(char)*param_1);
      *(char *)param_1 = (char)uVar5;
    }
    lpString1 = param_1;
    if ((char)*param_1 != '\\') goto LAB_0040a881;
    if (*(char *)((int)param_1 + 1) != '\\') goto LAB_0040a881;
    for (lpString1 = (uint *)((int)param_1 + 2);
        ((char)*lpString1 != '\0' && ((char)*lpString1 != '\\'));
        lpString1 = (uint *)((int)lpString1 + 1)) {
    }
    if ((char)*lpString1 != '\\') goto LAB_0040a881;
    do {
      lpString1 = (uint *)((int)lpString1 + 1);
LAB_0040a881:
    } while (((char)*lpString1 != '\0') && ((char)*lpString1 != '\\'));
    if ((char)*lpString1 == '\\') {
      lpString1 = (uint *)((int)lpString1 + 1);
    }
    cVar1 = (char)*lpString1;
    while (lpString2 = lpString1, cVar1 != '\0') {
      while ((cVar1 != '\0' && (cVar1 != '\\'))) {
        cVar1 = *(char *)((int)lpString2 + 1);
        lpString2 = (uint *)((int)lpString2 + 1);
      }
      lstrcpyA(local_348,(LPCSTR)lpString2);
      *(CHAR *)lpString2 = '\0';
      bVar2 = FUN_0040a6fe((LPCSTR)param_1,0x17,local_248);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        if ((param_2 != 0) || (pCVar3 = local_10, (bool)local_10[0] == bVar2)) {
          pCVar3 = local_248;
        }
        lstrcpyA((LPSTR)lpString1,pCVar3);
        FUN_0040a77d((int)local_248);
      }
      iVar4 = lstrlenA((LPCSTR)param_1);
      lpString1 = (uint *)(iVar4 + (int)param_1);
      lstrcatA((LPSTR)param_1,local_348);
      if ((char)*lpString1 == '\\') {
        lpString1 = (uint *)((int)lpString1 + 1);
      }
      cVar1 = (char)*lpString1;
    }
  }
  return;
}

