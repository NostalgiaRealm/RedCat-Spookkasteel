/*
 * FUN_00401fcf at 00401fcf
 * undefined4 __cdecl FUN_00401fcf(HINSTANCE param_1)
 * Address ranges: 00401fcf-004020e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_00401fcf(HINSTANCE param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int nWidth;
  int nHeight;
  HWND hWndParent;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  
  DAT_00413a90 = param_1;
  if ((DAT_0041370c == 0) && (DAT_0041374c == 0)) {
    DAT_00413750 = FUN_0040bbac(0x6f,&DAT_00413b84);
    GetObjectA(DAT_00413750,0x18,local_1c);
    lpParam = (LPVOID)0x0;
    hMenu = (HMENU)0x0;
    hWndParent = (HWND)0x0;
    nWidth = local_18;
    nHeight = local_14;
    hInstance = param_1;
    iVar1 = GetSystemMetrics(1);
    iVar1 = (iVar1 - local_14) / 2;
    iVar2 = GetSystemMetrics(0);
    DAT_00413694 = CreateWindowExA(0,PTR_s_GLBSUninstall_0041205c,&DAT_0041216c,0x90000000,
                                   (iVar2 - local_18) / 2,iVar1,nWidth,nHeight,hWndParent,hMenu,
                                   hInstance,lpParam);
    SetTimer(DAT_00413694,1,0x9c4,(TIMERPROC)0x0);
  }
  DAT_00413698 = CreateWindowExA(0,PTR_s_GLBSUninstall_0041205c,&DAT_0041216c,0xcd0000,0,0,0x280,
                                 0x1e0,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (DAT_00413698 == (HWND)0x0) {
    uVar3 = 0;
  }
  else {
    if (DAT_00413ac4 != (LPCSTR)0x0) {
      SetWindowTextA(DAT_00413698,DAT_00413ac4);
    }
    if (((DAT_0041370c == 0) && (DAT_0041374c == 0)) && (DAT_004136b4 == 0)) {
      ShowWindow(DAT_00413698,3);
    }
    UpdateWindow(DAT_00413698);
    uVar3 = 1;
  }
  return uVar3;
}

