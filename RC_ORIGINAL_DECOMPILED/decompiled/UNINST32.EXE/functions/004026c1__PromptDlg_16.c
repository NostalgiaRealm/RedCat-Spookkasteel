/*
 * _PromptDlg@16 at 004026c1
 * undefined4 __stdcall _PromptDlg@16(HWND param_1, int param_2, int param_3)
 * Address ranges: 004026c1-00402832
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _PromptDlg_16(HWND param_1,int param_2,int param_3)

{
  CHAR local_214 [256];
  CHAR local_114 [256];
  tagRECT local_14;
  
                    /* 0x26c1  3  _PromptDlg@16 */
  if (param_2 == 0x110) {
    FUN_0040a9ec(param_1);
    FUN_0040ab9d(DAT_00413a90,0x4e,local_114,0x100);
    SetWindowTextA(param_1,local_114);
    FUN_0040ab9d(DAT_00413a90,0x4f,local_114,0x100);
    wsprintfA(local_214,local_114,DAT_00413778);
    SetDlgItemTextA(param_1,0x3ea,local_114);
    FUN_0040ab9d(DAT_00413a90,0x50,local_114,0x100);
    SetDlgItemTextA(param_1,1,local_114);
    FUN_0040ab9d(DAT_00413a90,0x30,local_114,0x100);
    SetDlgItemTextA(param_1,2,local_114);
    SetDlgItemTextA(param_1,0x3f2,DAT_00413714);
    GetWindowRect(param_1,&local_14);
    MoveWindow(param_1,(DAT_004137a0 - (local_14.right - local_14.left)) / 2,
               (DAT_004137a4 - (local_14.bottom - local_14.top)) / 2,local_14.right - local_14.left,
               local_14.bottom - local_14.top,0);
    return 1;
  }
  if (param_2 == 0x111) {
    if (param_3 == 1) {
      GetDlgItemTextA(param_1,0x3f2,DAT_00413714,0x100);
    }
    else if (param_3 != 2) {
      return 1;
    }
    EndDialog(param_1,param_3);
    return 1;
  }
  return 0;
}

