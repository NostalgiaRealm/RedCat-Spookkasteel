/*
 * FUN_0040b864 at 0040b864
 * undefined __cdecl FUN_0040b864(HDC param_1, HWND param_2)
 * Address ranges: 0040b864-0040bbab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040b864(HDC param_1,HWND param_2)

{
  int hDest;
  HWND hWnd;
  DWORD color;
  HDC hdc;
  uint uVar1;
  int wDest;
  int local_104 [48];
  RECT local_44;
  tagRECT local_34;
  HGDIOBJ local_24;
  tagPOINT local_20;
  tagPOINT local_18;
  HBRUSH local_10;
  uint local_c;
  HBITMAP local_8;
  
  local_104[0] = 99;
  local_104[1] = 99;
  local_104[2] = 0;
  local_104[3] = 10;
  local_104[4] = 5;
  local_104[7] = 6;
  local_104[5] = 8;
  local_104[6] = 8;
  local_104[0xb] = 2;
  local_104[0xd] = 2;
  local_104[0xf] = 2;
  local_104[0x11] = 2;
  local_104[0x13] = 2;
  local_104[0x1d] = 2;
  local_104[8] = 0xe;
  local_104[9] = 5;
  local_104[10] = 0x13;
  local_104[0xc] = 0x1a;
  local_104[0xe] = 0x1e;
  local_104[0x10] = 0x26;
  local_104[0x12] = 0x2a;
  local_104[0x14] = 0x32;
  local_104[0x15] = 0;
  local_104[0x16] = 0x39;
  local_104[0x17] = 0;
  local_104[0x18] = 0x3e;
  local_104[0x19] = 0;
  local_104[0x1a] = 0x48;
  local_104[0x1b] = 0;
  local_104[0x1c] = 0x4e;
  local_104[0x1e] = 0x57;
  local_104[0x1f] = 3;
  local_104[0x20] = 0x5e;
  local_104[0x21] = 4;
  local_104[0x22] = 0x66;
  local_104[0x23] = 8;
  local_104[0x24] = 0x6e;
  local_104[0x25] = 10;
  local_104[0x26] = 0x72;
  local_104[0x27] = 0xb;
  local_104[0x28] = 0x76;
  local_104[0x29] = 0xd;
  local_104[0x2a] = 0x79;
  local_104[0x2b] = 5;
  local_104[0x2c] = 0x7e;
  local_104[0x2d] = 0x10;
  local_104[0x2e] = 0x7e;
  local_104[0x2f] = 0x11;
  hWnd = GetDlgItem(param_2,0x3ee);
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&local_34);
    local_18.x = local_34.left;
    local_18.y = local_34.top;
    local_20.x = local_34.right;
    local_20.y = local_34.bottom;
    ScreenToClient(param_2,&local_18);
    ScreenToClient(param_2,&local_20);
    DAT_00413a70 = local_18.x;
    DAT_00413a74 = local_18.y;
    DAT_00413a78 = local_20.x;
    DAT_00413a7c = local_20.y;
    color = GetSysColor(0xf);
    local_10 = CreateSolidBrush(color);
    local_c = GetDialogBaseUnits();
    local_8 = CreateCompatibleBitmap
                        (param_1,(DAT_00413a78 - DAT_00413a70) + 1,(DAT_00413a7c - DAT_00413a74) + 1
                        );
    if (local_8 != (HBITMAP)0x0) {
      hdc = CreateCompatibleDC(param_1);
      if (hdc != (HDC)0x0) {
        local_24 = SelectObject(hdc,local_8);
        local_44.left = 0;
        local_44.top = 0;
        local_44.right = (DAT_00413a78 - DAT_00413a70) + 1;
        local_44.bottom = (DAT_00413a7c - DAT_00413a74) + 1;
        FillRect(hdc,&local_44,local_10);
        uVar1 = local_c >> 0x10;
        DrawIcon(hdc,0,(uVar1 * 10) / 8,DAT_00413b20);
        if (DAT_00412060 < 0x18) {
          DrawIcon(hdc,(int)(local_104[DAT_00412060 * 2] * (local_c & 0xffff)) / 4,
                   (int)(local_104[DAT_00412060 * 2 + 1] * uVar1) / 8,(&DAT_00413b20)[DAT_00412060])
          ;
        }
        hDest = (DAT_00413a7c - DAT_00413a74) + 1;
        wDest = (DAT_00413a78 - DAT_00413a70) + 1;
        StretchBlt(param_1,DAT_00413a70,DAT_00413a74,wDest,hDest,hdc,0,0,wDest,hDest,0xcc0020);
        SelectObject(hdc,local_24);
        DeleteObject(local_8);
        DeleteObject(local_10);
        DeleteDC(hdc);
      }
    }
  }
  return;
}

