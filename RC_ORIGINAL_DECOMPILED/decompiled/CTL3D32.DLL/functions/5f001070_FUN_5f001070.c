/*
 * FUN_5f001070 at 5f001070
 * undefined __cdecl FUN_5f001070(HWND param_1, LONG param_2)
 * Address ranges: 5f001070-5f00116a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_5f001070(HWND param_1,LONG param_2)

{
  HANDLE pvVar1;
  BOOL BVar2;
  int iVar3;
  WCHAR local_20 [16];
  
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005248);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005252);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524c);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005250);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524a);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  if ((DAT_5f00a3a5 != '\0') && (BVar2 = IsWindowUnicode(param_1), BVar2 == 0)) {
    GetClassNameW(param_1,local_20,0x10);
    iVar3 = lstrcmpiW(local_20,u_edit_5f00c000);
    if (iVar3 == 0) {
      pvVar1 = (HANDLE)SetWindowLongA(param_1,-4,param_2);
      goto LAB_5f001154;
    }
  }
  pvVar1 = (HANDLE)SetWindowLongW(param_1,-4,param_2);
LAB_5f001154:
  SetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524e,pvVar1);
  return;
}

