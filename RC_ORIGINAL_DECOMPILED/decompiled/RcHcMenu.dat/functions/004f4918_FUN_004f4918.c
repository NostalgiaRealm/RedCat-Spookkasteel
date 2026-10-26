/*
 * FUN_004f4918 at 004f4918
 * undefined __register FUN_004f4918(int param_1, WPARAM param_2)
 * Address ranges: 004f4918-004f49a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f4918(int param_1,WPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 *lParam;
  undefined4 **ppuVar2;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  WPARAM local_30;
  undefined1 local_2c;
  byte *local_28;
  undefined4 *local_24;
  undefined4 local_20 [7];
  
  puStack_3c = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_28 = (byte *)0x0;
  puStack_40 = &LAB_004f49a8;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_20[0] = 8;
  lParam = local_20;
  Msg = 0x1305;
  wParam = param_2;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar1 == 0) {
    ppuVar2 = &local_24;
    FUN_00406a48((undefined4 *)PTR_PTR_00572384,(int *)&local_28);
    local_2c = 0;
    local_30 = param_2;
    FUN_0040a894(local_28,&local_30,0,(int *)ppuVar2);
    FUN_004f46e0(local_24);
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004f49af;
  puStack_40 = (undefined1 *)0x4f49a7;
  FUN_00403dd4((int *)&local_28,2);
  return;
}

