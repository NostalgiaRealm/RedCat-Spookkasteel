/*
 * FUN_004f4768 at 004f4768
 * undefined __register FUN_004f4768(int param_1, WPARAM param_2)
 * Address ranges: 004f4768-004f47f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f4768(int param_1,WPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 **ppuVar2;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  WPARAM local_14;
  undefined1 local_10;
  byte *local_c;
  undefined4 *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (byte *)0x0;
  puStack_24 = &LAB_004f47f4;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  lParam = 0;
  Msg = 0x1308;
  wParam = param_2;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == 0) {
    ppuVar2 = &local_8;
    FUN_00406a48((undefined4 *)PTR_PTR_005723b4,(int *)&local_c);
    local_10 = 0;
    local_14 = param_2;
    FUN_0040a894(local_c,&local_14,0,(int *)ppuVar2);
    FUN_004f46e0(local_8);
  }
  FUN_004f547c(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004f47fb;
  puStack_24 = (undefined1 *)0x4f47f3;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

