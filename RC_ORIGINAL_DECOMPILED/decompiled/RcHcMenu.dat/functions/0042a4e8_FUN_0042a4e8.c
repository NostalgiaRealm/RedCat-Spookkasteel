/*
 * FUN_0042a4e8 at 0042a4e8
 * undefined __register FUN_0042a4e8(int param_1, WPARAM param_2)
 * Address ranges: 0042a4e8-0042a54d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 6 for TComboBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 6 for
   TComboBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042a4e8(int param_1,WPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_1c = &LAB_0042a54e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lParam = 0;
  Msg = 0x150;
  wParam = param_2;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == -1) {
    FUN_00406a48((undefined4 *)PTR_PTR_005724ac,(int *)&local_8);
    FUN_004136fc(param_1,local_8,param_2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042a555;
  puStack_1c = (undefined1 *)0x42a54d;
  FUN_00403db0((int *)&local_8);
  return;
}

