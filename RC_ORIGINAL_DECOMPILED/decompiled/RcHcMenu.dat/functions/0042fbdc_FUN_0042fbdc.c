/*
 * FUN_0042fbdc at 0042fbdc
 * undefined __register FUN_0042fbdc(int * param_1)
 * Address ranges: 0042fbdc-0042fc1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042fbdc(int *param_1)

{
  undefined4 uVar1;
  HWND hWnd;
  int *piVar2;
  
  ReleaseCapture();
  DAT_0056f858 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    uVar1 = FUN_0040320c(param_1,(int)&PTR_FUN_0042ebec);
    piVar2 = param_1;
    if ((char)uVar1 == '\0') {
      if (param_1[9] == 0) {
        return;
      }
      piVar2 = (int *)param_1[9];
      DAT_0056f858 = param_1;
    }
    hWnd = (HWND)FUN_00438988(piVar2);
    SetCapture(hWnd);
  }
  return;
}

