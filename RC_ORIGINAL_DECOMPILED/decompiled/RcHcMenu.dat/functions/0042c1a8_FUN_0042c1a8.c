/*
 * FUN_0042c1a8 at 0042c1a8
 * undefined __register FUN_0042c1a8(int param_1, WPARAM param_2, undefined * param_3)
 * Address ranges: 0042c1a8-0042c21a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 21 for TListBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 21 for
   TListBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042c1a8(int param_1,WPARAM param_2,undefined *param_3)

{
  undefined *lParam;
  HWND hWnd;
  LRESULT LVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_0042c21b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lParam = FUN_004041f4(param_3);
  Msg = 0x181;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,param_2,(LPARAM)lParam);
  if (LVar1 < 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572184,(int *)&local_8);
    piVar2 = FUN_0040ceec((int *)&DAT_004106c0,'\x01',local_8);
    FUN_0040382c(piVar2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042c222;
  puStack_1c = (undefined1 *)0x42c21a;
  FUN_00403db0((int *)&local_8);
  return;
}

