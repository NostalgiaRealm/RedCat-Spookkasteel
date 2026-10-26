/*
 * FUN_004aaa10 at 004aaa10
 * undefined1 __register FUN_004aaa10(int * param_1, int param_2)
 * Address ranges: 004aaa10-004aaa5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_004aaa10(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  HWND hWnd;
  BOOL BVar3;
  
  uVar2 = FUN_00439d34(param_1,param_2);
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    hWnd = (HWND)FUN_00438988(param_1);
    BVar3 = IsWindowVisible(hWnd);
    if (BVar3 == 0) {
      FUN_0040e4b4(param_1 + 0x80);
    }
  }
  return (char)uVar2;
}

