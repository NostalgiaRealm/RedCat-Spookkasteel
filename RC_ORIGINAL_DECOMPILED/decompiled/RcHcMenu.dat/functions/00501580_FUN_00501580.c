/*
 * FUN_00501580 at 00501580
 * undefined __register FUN_00501580(int * param_1)
 * Address ranges: 00501580-005015af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501580(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  UINT_PTR uIDEvent;
  
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    uIDEvent = 1;
    hWnd = (HWND)FUN_00438988(param_1);
    KillTimer(hWnd,uIDEvent);
  }
  *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) & 0xf7;
  return;
}

