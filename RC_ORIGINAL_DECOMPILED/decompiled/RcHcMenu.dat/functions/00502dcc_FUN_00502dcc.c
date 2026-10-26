/*
 * FUN_00502dcc at 00502dcc
 * undefined __register FUN_00502dcc(int * param_1, int param_2)
 * Address ranges: 00502dcc-00502ea4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00502dcc(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint dy;
  HWND hWnd;
  RECT *prcScroll;
  RECT *prcClip;
  HRGN hrgnUpdate;
  LPRECT prcUpdate;
  UINT flags;
  int local_c;
  
  iVar2 = (**(code **)(*(int *)param_1[0x82] + 0x14))();
  uVar3 = FUN_00502c08(param_1);
  if (SBORROW4(iVar2,uVar3)) {
    thunk_FUN_00402874(uVar3);
  }
  local_c = param_2;
  if ((int)(iVar2 - uVar3) < param_2) {
    iVar2 = (**(code **)(*(int *)param_1[0x82] + 0x14))();
    uVar3 = FUN_00502c08(param_1);
    local_c = iVar2 - uVar3;
    if (SBORROW4(iVar2,uVar3)) {
      thunk_FUN_00402874(uVar3);
    }
  }
  if (local_c < 0) {
    local_c = 0;
  }
  if (param_1[0x83] != local_c) {
    uVar3 = param_1[0x83] - local_c;
    if (SBORROW4(param_1[0x83],local_c)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    dy = (uint)((longlong)(int)uVar3 * (longlong)param_1[0x80]);
    if ((longlong)(int)dy != (longlong)(int)uVar3 * (longlong)param_1[0x80]) {
      dy = thunk_FUN_00402874(dy);
    }
    param_1[0x83] = local_c;
    bVar1 = FUN_00438c84((int)param_1);
    if (bVar1) {
      FUN_00503518(param_1);
      flags = 6;
      prcUpdate = (LPRECT)0x0;
      hrgnUpdate = (HRGN)0x0;
      prcClip = (RECT *)0x0;
      prcScroll = (RECT *)0x0;
      iVar2 = 0;
      hWnd = (HWND)FUN_00438988(param_1);
      ScrollWindowEx(hWnd,iVar2,dy,prcScroll,prcClip,hrgnUpdate,prcUpdate,flags);
    }
  }
  return;
}

