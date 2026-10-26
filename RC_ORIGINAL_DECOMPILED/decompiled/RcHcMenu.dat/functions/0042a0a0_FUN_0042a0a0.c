/*
 * FUN_0042a0a0 at 0042a0a0
 * undefined __register FUN_0042a0a0(int param_1, byte * param_2)
 * Address ranges: 0042a0a0-0042a166
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042a0a0(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  LRESULT LVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  uint *local_c;
  uint *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_20 = &LAB_0042a167;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00409aa8(param_2,(int *)&local_8);
  iVar1 = FUN_00404030((int)local_8);
  iVar2 = FUN_00432688(*(int *)(param_1 + 0xc));
  uVar5 = iVar1 == iVar2;
  if ((bool)uVar5) {
    FUN_00432714(*(int *)(param_1 + 0xc),(int *)&local_c);
    FUN_00404140(local_8,local_c);
    if ((bool)uVar5) goto LAB_0042a141;
  }
  wParam = 0;
  Msg = 0xc;
  lParam = local_8;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  LVar3 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar3 == 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572484,(int *)&local_10);
    piVar4 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_10);
    FUN_0040382c(piVar4);
  }
  FUN_00433700(*(int *)(param_1 + 0xc),0xb012,0,0);
LAB_0042a141:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0042a16e;
  puStack_20 = (undefined1 *)0x42a156;
  FUN_00403db0((int *)&local_10);
  puStack_20 = (undefined1 *)0x42a15e;
  FUN_00403db0((int *)&local_c);
  puStack_20 = (undefined1 *)0x42a166;
  FUN_00403db0((int *)&local_8);
  return;
}

