/*
 * FUN_004f46f8 at 004f46f8
 * undefined __register FUN_004f46f8(int param_1)
 * Address ranges: 004f46f8-004f475b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f46f8(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_004f475c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  lParam = 0;
  wParam = 0;
  Msg = 0x1309;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572400,(int *)&local_8);
    FUN_004f46e0(local_8);
  }
  FUN_004f547c(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f4763;
  puStack_14 = (undefined1 *)0x4f475b;
  FUN_00403db0((int *)&local_8);
  return;
}

