/*
 * FUN_00409026 at 00409026
 * undefined __cdecl FUN_00409026(int param_1)
 * Address ranges: 00409026-0040912b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00409026(int param_1)

{
  int iVar1;
  HWND hWnd;
  tagRECT *lpRect;
  CHAR local_81c [1024];
  CHAR local_41c [1024];
  tagRECT local_1c;
  tagPOINT local_c;
  
  if (DAT_00413690 != (HWND)0x0) {
    if (param_1 != 0) {
      wsprintfA(local_41c,s__s_004125e8,param_1);
      GetDlgItemTextA(DAT_00413690,0x3ef,local_81c,0x400);
      iVar1 = lstrcmpA(local_81c,local_41c);
      if (iVar1 != 0) {
        SetDlgItemTextA(DAT_00413690,0x3ef,local_41c);
      }
    }
    lpRect = &local_1c;
    hWnd = GetDlgItem(DAT_00413690,0xef6);
    GetWindowRect(hWnd,lpRect);
    local_c.x = local_1c.left;
    local_c.y = local_1c.top;
    ScreenToClient(DAT_00413690,&local_c);
    local_1c.left = local_c.x;
    local_1c.top = local_c.y;
    local_c.x = local_1c.right;
    local_c.y = local_1c.bottom;
    ScreenToClient(DAT_00413690,&local_c);
    local_1c.right = local_c.x;
    local_1c.bottom = local_c.y;
    InvalidateRect(DAT_00413690,&local_1c,0);
  }
  FUN_0040912c(1);
  return;
}

