/*
 * FUN_5f001530 at 5f001530
 * undefined __cdecl FUN_5f001530(HDC param_1, WCHAR * param_2, LONG * param_3, LONG * param_4)
 * Address ranges: 5f001530-5f0015fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_5f001530(HDC param_1,WCHAR *param_2,LONG *param_3,LONG *param_4)

{
  WCHAR WVar1;
  int c;
  WCHAR *pWVar2;
  tagSIZE *lpsz;
  tagSIZE local_208;
  WCHAR local_200 [256];
  
  pWVar2 = local_200;
  WVar1 = *param_2;
  while (WVar1 != L'\0') {
    WVar1 = *param_2;
    if (WVar1 == L'&') {
      param_2 = param_2 + 1;
      if (*param_2 == L'\0') break;
LAB_5f00159c:
      WVar1 = *param_2;
      param_2 = param_2 + 1;
      *pWVar2 = WVar1;
      pWVar2 = pWVar2 + 1;
    }
    else {
      if (DAT_5f00a3a5 == '\0') goto LAB_5f00159c;
      if ((int)DAT_5f00a3a4 == (uint)(ushort)WVar1) {
        param_2 = param_2 + 1;
        if (*param_2 != L'\0') goto LAB_5f00159c;
        break;
      }
      if ((WVar1 != L'\x1e') && (WVar1 != L'\x1f')) goto LAB_5f00159c;
      if (param_2[1] == L'\0') break;
      param_2 = CharNextW(param_2 + 1);
    }
    WVar1 = *param_2;
  }
  *pWVar2 = L'\0';
  lpsz = &local_208;
  c = lstrlenW(local_200);
  GetTextExtentPointW(param_1,local_200,c,lpsz);
  *param_3 = local_208.cx;
  *param_4 = local_208.cy;
  return;
}

