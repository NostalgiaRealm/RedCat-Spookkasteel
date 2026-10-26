/*
 * FUN_00503518 at 00503518
 * undefined __register FUN_00503518(int * param_1)
 * Address ranges: 00503518-005035a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00503518(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  HWND hwnd;
  SCROLLINFO *lpsi;
  BOOL redraw;
  SCROLLINFO local_24;
  int *local_8;
  
  local_8 = param_1;
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    local_24.cbSize = 0x1c;
    local_24.fMask = 0x17;
    local_24.nMin = 0;
    local_24.nMax = 0;
    local_24.nPos = 0;
    local_24.nPage = 0;
    iVar2 = (**(code **)(*(int *)local_8[0x82] + 0x14))();
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    local_24.nPos = local_8[0x83];
    local_24.nMax = uVar3;
    uVar3 = FUN_00502c08(local_8);
    if ((int)uVar3 < 0) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    redraw = -1;
    lpsi = &local_24;
    iVar2 = 1;
    local_24.nPage = uVar3;
    hwnd = (HWND)FUN_00438988(local_8);
    SetScrollInfo(hwnd,iVar2,lpsi,redraw);
  }
  return;
}

