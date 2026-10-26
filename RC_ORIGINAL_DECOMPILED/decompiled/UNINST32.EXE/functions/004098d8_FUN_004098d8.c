/*
 * FUN_004098d8 at 004098d8
 * undefined __cdecl FUN_004098d8(HWND param_1, LPCSTR param_2)
 * Address ranges: 004098d8-00409ac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_004098d8(HWND param_1,LPCSTR param_2)

{
  char *pcVar1;
  char cVar2;
  HDC hdc;
  int iVar3;
  LPSTR pCVar4;
  char *pcVar5;
  tagSIZE *ptVar6;
  CHAR *lpString2;
  CHAR local_32c [256];
  CHAR local_22c [256];
  CHAR aCStack_12c [4];
  char local_128 [255];
  undefined1 local_29;
  tagRECT local_28;
  HGDIOBJ local_18;
  tagSIZE local_14;
  HGDIOBJ local_c;
  LPCSTR local_8;
  
  cVar2 = *param_2;
  local_8 = param_2;
  while (((cVar2 != '\n' && (cVar2 != '\r')) && (cVar2 != '\0'))) {
    pcVar5 = local_8 + 1;
    local_8 = local_8 + 1;
    cVar2 = *pcVar5;
  }
  for (; (*local_8 == '\r' || (*local_8 == '\n')); local_8 = local_8 + 1) {
  }
  if (*local_8 == '\0') {
    lstrcpyA(local_22c,param_2);
    local_8 = param_2;
  }
  else {
    lstrcpyA(local_22c,local_8);
  }
  if (param_1 != (HWND)0x0) {
    GetWindowRect(param_1,&local_28);
    local_28.right = local_28.right - local_28.left;
    local_c = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
    hdc = GetDC(param_1);
    if (local_c != (HGDIOBJ)0x0) {
      local_18 = SelectObject(hdc,local_c);
    }
    ptVar6 = &local_14;
    iVar3 = lstrlenA(param_2);
    GetTextExtentPointA(hdc,local_22c,iVar3,ptVar6);
    if (local_28.right <= local_14.cx) {
      lstrcpynA(local_128,local_22c,0x100);
      local_29 = 0;
      pcVar5 = local_128;
      while ((local_128[0] != '\0' && (local_128[0] != '\\'))) {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        local_128[0] = *pcVar1;
      }
      if (*pcVar5 == '\\') {
        pcVar5 = pcVar5 + 1;
      }
      if (local_28.right <= local_14.cx) {
        do {
          pCVar4 = pcVar5;
          if (*pcVar5 != '.') goto LAB_00409a18;
          cVar2 = '.';
          do {
            if (cVar2 == '\\') break;
            cVar2 = pCVar4[1];
            pCVar4 = pCVar4 + 1;
          } while (cVar2 != '\0');
          if (*pCVar4 != '\\') goto LAB_00409a18;
          do {
            pCVar4 = pCVar4 + 1;
LAB_00409a18:
          } while ((*pCVar4 != '\0') && (*pCVar4 != '\\'));
          if ((*pCVar4 == '\0') || ((int)pCVar4 - (int)pcVar5 < 4)) {
            lpString2 = &DAT_004125cc;
            iVar3 = lstrlenA(local_128);
            pCVar4 = aCStack_12c + iVar3;
          }
          else {
            lstrcpyA(local_32c,pCVar4);
            lstrcpyA(pcVar5,&DAT_004125cc);
            lpString2 = local_32c;
            pCVar4 = pcVar5 + 3;
          }
          lstrcpyA(pCVar4,lpString2);
          ptVar6 = &local_14;
          iVar3 = lstrlenA(local_128);
          GetTextExtentPointA(hdc,local_128,iVar3,ptVar6);
        } while (local_28.right <= local_14.cx);
      }
      lstrcpyA(local_8,local_128);
    }
    if (local_c != (HGDIOBJ)0x0) {
      SelectObject(hdc,local_18);
    }
    ReleaseDC(param_1,hdc);
  }
  return;
}

