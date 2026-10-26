/*
 * FUN_0042a6a8 at 0042a6a8
 * undefined __register FUN_0042a6a8(int param_1)
 * Address ranges: 0042a6a8-0042a70b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042a6a8(int param_1)

{
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_14 = &LAB_0042a70c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00432714(*(int *)(param_1 + 0xc),(int *)&local_8);
  lParam = 0;
  wParam = 0;
  Msg = 0x14b;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_00432744(*(int *)(param_1 + 0xc),local_8);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x80))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0042a713;
  puStack_14 = (undefined1 *)0x42a70b;
  FUN_00403db0((int *)&local_8);
  return;
}

