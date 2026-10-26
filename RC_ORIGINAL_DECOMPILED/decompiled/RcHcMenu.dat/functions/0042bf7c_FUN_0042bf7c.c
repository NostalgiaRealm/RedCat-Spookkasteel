/*
 * FUN_0042bf7c at 0042bf7c
 * undefined __register FUN_0042bf7c(int param_1, WPARAM param_2, int * param_3)
 * Address ranges: 0042bf7c-0042c011
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042bf7c(int param_1,WPARAM param_2,int *param_3)

{
  HWND hWnd;
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 *lParam;
  undefined4 uStack_1024;
  undefined1 *puStack_1020;
  undefined1 *puStack_101c;
  byte *local_100c;
  undefined4 local_1008;
  int iStack_1004;
  int *local_8;
  
  puStack_101c = &stack0xfffffffc;
  local_100c = (byte *)0x0;
  puStack_1020 = &LAB_0042c012;
  uStack_1024 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1024;
  lParam = &local_1008;
  Msg = 0x189;
  wParam = param_2;
  iStack_1004 = param_1;
  local_8 = param_3;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  uVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if ((int)uVar1 < 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_005724ac,(int *)&local_100c);
    FUN_004136fc(param_1,local_100c,param_2);
  }
  FUN_00403e98(local_8,&local_1008,uVar1);
  *in_FS_OFFSET = uStack_1024;
  puStack_101c = &LAB_0042c019;
  puStack_1020 = (undefined1 *)0x42c011;
  FUN_00403db0((int *)&local_100c);
  return;
}

