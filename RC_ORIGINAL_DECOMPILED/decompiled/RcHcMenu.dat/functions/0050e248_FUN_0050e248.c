/*
 * FUN_0050e248 at 0050e248
 * undefined __register FUN_0050e248(int * param_1, uint * param_2)
 * Address ranges: 0050e248-0050e30a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e248(int *param_1,uint *param_2)

{
  HWND hWnd;
  uint uVar1;
  int iVar2;
  int iVar3;
  tagRECT *lpRect;
  undefined1 local_34 [8];
  int local_2c;
  tagRECT local_24;
  uint local_14;
  int local_10;
  uint *local_c;
  int *local_8;
  
  lpRect = &local_24;
  local_c = param_2;
  local_8 = param_1;
  hWnd = (HWND)FUN_00438988(param_1);
  GetWindowRect(hWnd,lpRect);
  local_10 = GetSystemMetrics(0x47);
  local_14 = GetSystemMetrics(0x48);
  if (*(char *)((int)local_8 + 0x209) == '\0') {
    (**(code **)(*local_8 + 0x40))(local_8,local_34);
    uVar1 = local_2c - local_10;
    if (SBORROW4(local_2c,local_10)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    *local_c = uVar1;
  }
  else if (*(char *)((int)local_8 + 0x209) == '\x01') {
    *local_c = 0;
  }
  uVar1 = local_24.bottom - local_24.top;
  if (SBORROW4(local_24.bottom,local_24.top)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
  }
  iVar3 = (int)local_14 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((local_14 & 1) != 0);
  }
  uVar1 = iVar2 - iVar3;
  if (SBORROW4(iVar2,iVar3)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  local_c[1] = uVar1;
  uVar1 = *local_c + local_10;
  if (SCARRY4(*local_c,local_10)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  local_c[2] = uVar1;
  uVar1 = local_c[1] + local_14;
  if (SCARRY4(local_c[1],local_14)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  local_c[3] = uVar1;
  return;
}

