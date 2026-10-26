/*
 * FUN_0050e30c at 0050e30c
 * undefined __register FUN_0050e30c(int * param_1, LPRECT param_2)
 * Address ranges: 0050e30c-0050e396
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e30c(int *param_1,LPRECT param_2)

{
  HWND hWnd;
  uint uVar1;
  uint dx;
  int iVar2;
  LPRECT lpRect;
  int dy;
  
  lpRect = param_2;
  hWnd = (HWND)FUN_00438988(param_1);
  GetWindowRect(hWnd,lpRect);
  uVar1 = -param_2->top;
  if (SBORROW4(0,param_2->top)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  dx = -param_2->left;
  if (SBORROW4(0,param_2->left)) {
    dx = thunk_FUN_00402874(dx);
  }
  OffsetRect(param_2,dx,uVar1);
  iVar2 = GetSystemMetrics(0x47);
  if (*(char *)((int)param_1 + 0x209) == '\0') {
    OffsetRect(param_2,5,-1);
  }
  else if (*(char *)((int)param_1 + 0x209) == '\x01') {
    dy = -1;
    uVar1 = iVar2 + 5;
    if (SCARRY4(iVar2,5)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    OffsetRect(param_2,uVar1,dy);
  }
  return;
}

