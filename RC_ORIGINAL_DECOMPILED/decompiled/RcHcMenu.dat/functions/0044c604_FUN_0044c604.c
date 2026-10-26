/*
 * FUN_0044c604 at 0044c604
 * undefined __register FUN_0044c604(int * param_1)
 * Address ranges: 0044c604-0044c650
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044c604(int *param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  
  if (((int *)param_1[0x82] != (int *)0x0) && (param_1[0x8e] == 0)) {
    param_1 = (int *)param_1[0x82];
  }
  pHVar1 = (HWND)FUN_00438988(param_1);
  SetFocus(pHVar1);
  pHVar1 = (HWND)FUN_00438988(param_1);
  pHVar2 = GetFocus();
  if (pHVar1 == pHVar2) {
    FUN_00433700((int)param_1,0xb029,0,0);
  }
  return;
}

