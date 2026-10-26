/*
 * FUN_10004130 at 10004130
 * undefined4 __stdcall FUN_10004130(void)
 * Address ranges: 10004130-10004200
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004130(void)

{
  int iVar1;
  
  if (DAT_100270a4 != 0) {
    DAT_100270a4 = 0;
    if (DAT_1002a6c8 != 0) {
      iVar1 = (**(code **)(*DAT_100274a8 + 0x4c))(DAT_100274a8);
      if (iVar1 != 0) {
        FUN_10001000(iVar1);
        FUN_100020f0(s_D3DMain_RestoreDisplayMode__Rest_10014f8c);
        return 0;
      }
      iVar1 = (**(code **)(*DAT_100274a8 + 0x50))(DAT_100274a8,DAT_10026fe8,8);
      if (iVar1 != 0) {
        FUN_10001000(iVar1);
        FUN_100020f0(s_SetCooperativeLevel_to_normal_fa_10014804);
        return 0;
      }
    }
    SetWindowLongA(DAT_10026fe8,-0x10,DAT_100270a0);
    SetWindowPos(DAT_10026fe8,(HWND)0x0,DAT_10027090,DAT_10027094,DAT_10027098 - DAT_10027090,
                 DAT_1002709c - DAT_10027094,0x104);
    ShowWindow(DAT_10026fe8,1);
  }
  return 1;
}

