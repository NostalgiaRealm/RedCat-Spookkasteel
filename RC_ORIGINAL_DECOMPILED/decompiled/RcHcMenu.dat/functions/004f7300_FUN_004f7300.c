/*
 * FUN_004f7300 at 004f7300
 * undefined __register FUN_004f7300(int * param_1, UINT param_2, int param_3)
 * Address ranges: 004f7300-004f73f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f7300(int *param_1,UINT param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  WPARAM wParam;
  HWND hWnd;
  uint *lParam;
  char local_34;
  uint local_33;
  undefined4 local_2f;
  undefined *local_2b;
  undefined4 local_23;
  uint local_1f;
  undefined4 local_17;
  
  iVar1 = FUN_004f6c58(param_1[0x7c],param_3);
  FUN_00402cfc(&local_33,0x24,0);
  local_33 = 7;
  local_2f = *(undefined4 *)(iVar1 + 0x10);
  local_2b = FUN_004041f4(*(undefined **)(iVar1 + 0xc));
  local_23 = FUN_00404030(*(int *)(iVar1 + 0xc));
  local_34 = *(char *)(iVar1 + 0x1c);
  uVar2 = FUN_004f6ac8(iVar1);
  if ((char)uVar2 != '\0') {
    FUN_0042f860(&local_34);
  }
  if (local_34 == '\0') {
    local_1f = 0;
  }
  else if (local_34 == '\x01') {
    local_1f = 1;
  }
  else {
    local_1f = 2;
  }
  if (*(char *)(iVar1 + 0x1d) == '\x01') {
    local_1f = local_1f | 0x8000;
  }
  else {
    local_1f = local_1f | 0x4000;
  }
  uVar2 = FUN_004f6ab0(iVar1);
  if ((char)uVar2 != '\0') {
    local_1f = local_1f | 4;
  }
  if ((param_1[0x84] != 0) && (-1 < *(int *)(iVar1 + 0x20))) {
    local_33 = local_33 | 0x20;
    local_1f = local_1f | 0x800;
    local_17 = *(undefined4 *)(iVar1 + 0x20);
  }
  lParam = &local_33;
  wParam = FUN_00412ca4(iVar1);
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,param_2,wParam,(LPARAM)lParam);
  return;
}

