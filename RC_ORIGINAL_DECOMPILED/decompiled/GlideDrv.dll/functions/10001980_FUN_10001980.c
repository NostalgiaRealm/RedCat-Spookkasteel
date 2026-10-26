/*
 * FUN_10001980 at 10001980
 * undefined4 __cdecl FUN_10001980(int param_1)
 * Address ranges: 10001980-10001bb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10001980(int param_1)

{
  HWND hWnd;
  int iVar1;
  undefined4 uVar2;
  tagRECT *lpRect;
  tagRECT local_10;
  
  switch(*(undefined4 *)(param_1 + 0x404)) {
  case 0:
    DAT_101f5568 = 0x200;
    DAT_101f556c = 0x180;
    uVar2 = 3;
    break;
  case 1:
    DAT_101f5568 = 0x280;
    DAT_101f556c = 0x1e0;
    uVar2 = 7;
    break;
  case 2:
    DAT_101f5568 = 800;
    DAT_101f556c = 600;
    uVar2 = 8;
    break;
  case 3:
    DAT_101f5568 = 0x400;
    DAT_101f556c = 0x300;
    uVar2 = 0xc;
    break;
  default:
    FUN_10001920(2,s_GLIDE_DrvInit__Invalid_display_m_1000e33c);
    return 0;
  }
  DAT_101f5560 = *(HWND *)(param_1 + 0x610);
  GetWindowRect(DAT_101f5560,(LPRECT)&DAT_100118e0);
  lpRect = &local_10;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,lpRect);
  MoveWindow(DAT_101f5560,local_10.left + -4,local_10.top + -0x28,local_10.right + 0x14,
             local_10.bottom + 0x14,1);
  SetCursorPos(DAT_101f5568 / 2,DAT_101f556c / 2);
  _grGlideInit_0();
  iVar1 = FUN_10001c10();
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_101f55c4 < 1) {
    FUN_10001920(3,s_GLIDE_DrvInit__Not_enough_textur_1000e408);
    return 0;
  }
  _grSstSelect_4(0);
  iVar1 = _grSstWinOpen_28(DAT_101f5560,uVar2,0,1,0,2,1);
  if (iVar1 != 0) {
    _DAT_101f5578 = 0xb;
    _DAT_101f557c = 5;
    _DAT_101f5580 = 0;
    _DAT_101f5584 = 0xf800;
    _DAT_101f5588 = 0x7e0;
    _DAT_101f558c = 0x1f;
    _DAT_101f5590 = 5;
    _DAT_101f5594 = 6;
    _DAT_101f5598 = 5;
    FUN_10001920(0,s_GMain_Startup__No_error__1000e3c4);
    iVar1 = FUN_100020a0();
    if (iVar1 == 0) {
      FUN_10001920(7,s_GMain_Startup__GTHandle_Startup_f_1000e398);
      return 0;
    }
    iVar1 = FUN_10001cc0();
    if (iVar1 == 0) {
      FUN_10001920(7,s_GMain_Startup__GMain_InitGlideRe_1000e364);
      return 0;
    }
    _grGammaCorrectionValue_4(0x3f800000);
    return 1;
  }
  FUN_10001920(3,s_GLIDE_DrvInit__grSstWinOpen_fail_1000e3e0);
  return 0;
}

