/*
 * FUN_004bc090 at 004bc090
 * undefined FUN_004bc090(void)
 * Address ranges: 004bc090-004bc1e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004bc090(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  HWND hWnd;
  tagRECT *lpRect;
  tagRECT tStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f748;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x45) == '\0') {
    ExceptionList = &local_c;
    FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x58);
    local_4 = 0;
    *(undefined1 *)(param_1 + 0x45) = 1;
    FUN_005afdd0(&LAB_004c4110);
    if (DAT_006c8de0 != 0) {
      iVar1 = FUN_00516d70();
      iVar3 = *(int *)(iVar1 + 100);
      if (iVar3 == -0x80000000) {
        puVar2 = *(undefined1 **)(iVar1 + 0x18);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_0064a3b4;
        }
        iVar3 = FUN_0060af10(puVar2);
        *(int *)(iVar1 + 100) = iVar3;
      }
      if (iVar3 != 0) {
        FUN_005afe30(s_m_Engine_RemoveAllSubLevels___00697690);
      }
      FUN_0055d670();
    }
    if (*(undefined4 **)(param_1 + 0x3a4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x3a4))(1);
      *(undefined4 *)(param_1 + 0x3a4) = 0;
    }
    if (DAT_006c8de0 != 0) {
      FUN_0055b480(*(undefined4 *)(param_1 + 0x3a0));
    }
    lpRect = &tStack_1c;
    hWnd = GetDesktopWindow();
    GetWindowRect(hWnd,lpRect);
    SetWindowPos(*(HWND *)(*(int *)(param_1 + 0x58) + 0x54),(HWND)0x0,
                 (tStack_1c.left + tStack_1c.right) / 2 + -0xa0,
                 (tStack_1c.top + tStack_1c.bottom) / 2 + -100,0x140,200,0x104);
    FUN_004c4380();
    local_4 = 0xffffffff;
    FUN_005ae770();
  }
  ExceptionList = local_c;
  return;
}

