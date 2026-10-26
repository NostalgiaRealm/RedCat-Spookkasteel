/*
 * FUN_0042a584 at 0042a584
 * undefined __register FUN_0042a584(int param_1, undefined * param_2)
 * Address ranges: 0042a584-0042a5f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 13 for TComboBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 13 for
   TComboBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042a584(int param_1,undefined *param_2)

{
  undefined *lParam;
  HWND hWnd;
  LRESULT LVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0042a5f7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  lParam = FUN_004041f4(param_2);
  wParam = 0;
  Msg = 0x143;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar1 < 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572184,(int *)&local_8);
    piVar2 = FUN_0040ceec((int *)&DAT_004106c0,'\x01',local_8);
    FUN_0040382c(piVar2);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042a5fe;
  puStack_18 = (undefined1 *)0x42a5f6;
  FUN_00403db0((int *)&local_8);
  return;
}

