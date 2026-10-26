/*
 * FUN_00402fa0 at 00402fa0
 * undefined __cdecl FUN_00402fa0(HWND param_1)
 * Address ranges: 00402fa0-00403154
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00402fa0(HWND param_1)

{
  bool bVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  int iVar4;
  int iVar5;
  WPARAM wParam;
  
  if (DAT_00413a60 == '\0') {
    LVar2 = SendDlgItemMessageA(DAT_00413690,1000,0xf0,0,0);
    if (LVar2 == 0) {
      LVar2 = SendDlgItemMessageA(DAT_00413690,0x3f1,0xf0,0,0);
      DAT_004136c4 = (-(uint)(LVar2 != 0) & 8) + 0x3e9;
    }
    else {
      DAT_004136c4 = 1000;
    }
  }
  else if (DAT_00413a60 == '\f') {
    LVar2 = SendDlgItemMessageA(DAT_00413690,1000,0xf0,0,0);
    DAT_00413770 = (uint)(LVar2 != 0);
  }
  else if (DAT_00413a60 == '\v') {
    return;
  }
  wParam = 0;
  if (0 < DAT_00413af8) {
    do {
      LVar3 = SendDlgItemMessageA(param_1,0x3eb,0x187,wParam,0);
      LVar2 = DAT_004136d0;
      switch(DAT_00413a60) {
      case '\x01':
        *(LRESULT *)(*(int *)(DAT_004136e8 + wParam * 4) + 0x264) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\x02':
        *(LRESULT *)(*(int *)(DAT_00413b0c + wParam * 4) + 0x25c) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\x03':
        iVar5 = DAT_004136fc;
        goto LAB_004030c5;
      case '\x04':
        iVar5 = DAT_004136a8;
        goto LAB_004030c5;
      case '\x05':
        *(LRESULT *)(*(int *)(DAT_004137a8 + wParam * 4) + 0x70c) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\x06':
        *(LRESULT *)(*(int *)(DAT_004136cc + wParam * 4) + 0x21c) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\a':
        iVar5 = DAT_004137c0;
LAB_004030c5:
        iVar5 = *(int *)(iVar5 + wParam * 4);
LAB_0040313d:
        *(LRESULT *)(iVar5 + 0x104) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\b':
        *(LRESULT *)(*(int *)(DAT_00413a84 + wParam * 4) + 0x121c) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\t':
        *(LRESULT *)(*(int *)(DAT_00413734 + wParam * 4) + 0x300) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\n':
        iVar5 = 0;
        if ((DAT_0041379c != 0) && (iVar5 = 1, LVar2 = LVar3, wParam == 0)) break;
        iVar4 = wParam - iVar5;
        bVar1 = iVar4 < DAT_00413aa0;
        if (bVar1) {
          *(LRESULT *)(*(int *)(DAT_00413748 + iVar4 * 4) + 0x204) = LVar3;
        }
        LVar2 = DAT_004136d0;
        if (bVar1) break;
        iVar5 = *(int *)(DAT_00413b98 + (wParam - (iVar5 + DAT_00413aa0)) * 4);
        goto LAB_0040313d;
      }
      DAT_004136d0 = LVar2;
      wParam = wParam + 1;
    } while ((int)wParam < DAT_00413af8);
  }
  return;
}

