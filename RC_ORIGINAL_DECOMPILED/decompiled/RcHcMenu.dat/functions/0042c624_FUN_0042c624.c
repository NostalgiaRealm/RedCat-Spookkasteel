/*
 * FUN_0042c624 at 0042c624
 * undefined __register FUN_0042c624(int * param_1, WPARAM param_2, LPARAM param_3)
 * Address ranges: 0042c624-0042c644
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c624(int *param_1,WPARAM param_2,LPARAM param_3)

{
  HWND hWnd;
  UINT Msg;
  
  Msg = 0x19a;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,param_2,param_3);
  return;
}

