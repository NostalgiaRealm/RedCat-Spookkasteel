/*
 * FUN_004fe4ac at 004fe4ac
 * undefined __register FUN_004fe4ac(int * param_1)
 * Address ranges: 004fe4ac-004fe5a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe4ac(int *param_1)

{
  HWND pHVar1;
  HDC pHVar2;
  uint dy;
  uint dx;
  undefined4 *in_FS_OFFSET;
  tagRECT *lpRect;
  undefined4 uVar3;
  tagRECT local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = param_1;
  pHVar1 = (HWND)FUN_00438988(param_1);
  pHVar2 = GetWindowDC(pHVar1);
  FUN_0041cfec((int *)local_8[0x83],(int)pHVar2);
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffcc;
  lpRect = &local_28;
  pHVar1 = (HWND)FUN_00438988(local_8);
  GetWindowRect(pHVar1,lpRect);
  dy = -local_28.top;
  if (SBORROW4(0,local_28.top)) {
    dy = thunk_FUN_00402874(dy);
  }
  dx = -local_28.left;
  if (SBORROW4(0,local_28.left)) {
    dx = thunk_FUN_00402874(dx);
  }
  OffsetRect(&local_28,dx,dy);
  local_18 = *(undefined4 *)(local_8[0x84] + 0x10);
  local_14 = *(undefined4 *)(local_8[0x84] + 0xc);
  local_10 = *(undefined4 *)(local_8[0x84] + 0x14);
  local_c = *(undefined4 *)(local_8[0x84] + 0x18);
  FUN_004ab5ec((int *)local_8[0x83],&local_28.left,(int)&local_18,0);
  *in_FS_OFFSET = uVar3;
  pHVar2 = (HDC)FUN_0041cf6c((int *)local_8[0x83]);
  pHVar1 = (HWND)FUN_00438988(local_8);
  ReleaseDC(pHVar1,pHVar2);
  FUN_0041cfec((int *)local_8[0x83],0);
  return;
}

