/*
 * FUN_00529c14 at 00529c14
 * undefined __register FUN_00529c14(int * param_1, int param_2)
 * Address ranges: 00529c14-00529c5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00529c14(int *param_1,int param_2)

{
  HWND hWnd;
  UINT_PTR uIDEvent;
  
  if (*(int *)(param_2 + 4) == 1) {
    uIDEvent = 1;
    hWnd = (HWND)FUN_00438988(param_1);
    KillTimer(hWnd,uIDEvent);
    FUN_00403db0(param_1 + 0xa8);
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}

