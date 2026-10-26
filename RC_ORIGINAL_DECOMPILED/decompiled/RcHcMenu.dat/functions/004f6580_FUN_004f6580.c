/*
 * FUN_004f6580 at 004f6580
 * undefined __register FUN_004f6580(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 004f6580-004f65e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6580(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  SHORT SVar2;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar3;
  
  cVar1 = FUN_00403270(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    hWnd = GetFocus();
    hWndParent = (HWND)FUN_00438988(param_1);
    BVar3 = IsChild(hWndParent,hWnd);
    if (BVar3 == 0) goto LAB_004f65dd;
  }
  if ((*(short *)(param_2 + 4) == 9) && (SVar2 = GetKeyState(0x11), SVar2 < 0)) {
    SVar2 = GetKeyState(0x10);
    FUN_004f63b0(param_1,-1 < SVar2);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
LAB_004f65dd:
  FUN_00437ea8((int)param_1,param_2);
  return;
}

