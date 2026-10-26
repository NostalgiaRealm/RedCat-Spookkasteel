/*
 * _SharedDlg@16 at 00402558
 * undefined4 __stdcall _SharedDlg@16(HWND param_1, int param_2, INT_PTR param_3)
 * Address ranges: 00402558-004026c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _SharedDlg_16(HWND param_1,int param_2,INT_PTR param_3)

{
  undefined4 uVar1;
  UINT UVar2;
  CHAR local_114 [256];
  tagRECT local_14;
  
                    /* 0x2558  4  _SharedDlg@16 */
  if (param_2 == 0x110) {
    FUN_0040a9ec(param_1);
    SetDlgItemTextA(param_1,0x3ea,DAT_00413754);
    if (DAT_004136c0 == 0) {
      UVar2 = 0x3e;
    }
    else {
      UVar2 = 0x4c;
    }
    FUN_0040ab9d(DAT_00413a90,UVar2,local_114,0x100);
    SetWindowTextA(param_1,local_114);
    FUN_0040ab9d(DAT_00413a90,0x33,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ed,local_114);
    FUN_0040ab9d(DAT_00413a90,0x34,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ee,local_114);
    FUN_0040ab9d(DAT_00413a90,0x45,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ef,local_114);
    FUN_0040ab9d(DAT_00413a90,0x35,local_114,0x100);
    SetDlgItemTextA(param_1,1,local_114);
    GetWindowRect(param_1,&local_14);
    MoveWindow(param_1,(DAT_004137a0 - (local_14.right - local_14.left)) / 2,
               (DAT_004137a4 - (local_14.bottom - local_14.top)) / 2,local_14.right - local_14.left,
               local_14.bottom - local_14.top,0);
    uVar1 = 1;
  }
  else if (param_2 == 0x111) {
    EndDialog(param_1,param_3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

