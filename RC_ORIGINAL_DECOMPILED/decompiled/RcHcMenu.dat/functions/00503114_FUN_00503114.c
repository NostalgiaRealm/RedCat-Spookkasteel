/*
 * FUN_00503114 at 00503114
 * undefined __register FUN_00503114(int * param_1, undefined1 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00503114-0050317f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00503114(int *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  UINT_PTR nIDEvent;
  UINT uElapse;
  TIMERPROC lpTimerFunc;
  LONG local_18 [2];
  uint local_10;
  undefined1 local_a;
  undefined1 local_9;
  int *local_8;
  
  local_a = param_3;
  local_9 = param_2;
  local_8 = param_1;
  FUN_0041160c(param_5,param_4,local_18);
  local_10 = FUN_0050300c(local_8,local_18);
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if (local_10 != 0xffffffff) {
    FUN_00502cb0(local_8,local_10);
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  FUN_00433a98((int)local_8,CONCAT31((int3)((uint)uVar2 >> 8),local_9),
               CONCAT31((int3)((uint)uVar1 >> 8),local_a),param_4,param_5);
  lpTimerFunc = (TIMERPROC)0x0;
  uElapse = 0x32;
  nIDEvent = 1;
  hWnd = (HWND)FUN_00438988(local_8);
  SetTimer(hWnd,nIDEvent,uElapse,lpTimerFunc);
  return;
}

