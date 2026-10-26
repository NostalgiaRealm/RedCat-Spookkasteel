/*
 * FUN_00439e38 at 00439e38
 * undefined __register FUN_00439e38(int * param_1, int * param_2, uint * param_3)
 * Address ranges: 00439e38-00439f44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00439e38(int *param_1,int *param_2,uint *param_3)

{
  HWND hWnd;
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  UINT uFlags;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18 [4];
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  piVar2 = local_18;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x7e) = 1;
  puStack_2c = &LAB_00439f45;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  FUN_00432744((int)param_1,param_3);
  local_18[3] = local_18[3] + 4;
  FUN_004337a4((int)local_8,local_18);
  iVar1 = FUN_0044f0e4();
  if (iVar1 < local_8[0xf] + local_18[1]) {
    local_18[1] = FUN_0044f0e4();
    local_18[1] = local_18[1] - local_8[0xf];
  }
  iVar1 = FUN_0044f0f0();
  if (iVar1 < local_8[0xe] + local_18[0]) {
    local_18[0] = FUN_0044f0f0();
    local_18[0] = local_18[0] - local_8[0xe];
  }
  iVar1 = FUN_0044f0d8();
  if (local_18[0] < iVar1) {
    local_18[0] = FUN_0044f0d8();
  }
  iVar1 = FUN_0044f0cc();
  if (local_18[3] < iVar1) {
    local_18[3] = FUN_0044f0cc();
  }
  uFlags = 0x50;
  iVar1 = local_8[0xf];
  cx = local_8[0xe];
  hWndInsertAfter = (HWND)0xffffffff;
  X = local_18[0];
  Y = local_18[1];
  hWnd = (HWND)FUN_00438988(local_8);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,iVar1,uFlags);
  (**(code **)(*local_8 + 0x74))();
  *in_FS_OFFSET = uStack_30;
  *(undefined1 *)(local_8 + 0x7e) = 0;
  return;
}

