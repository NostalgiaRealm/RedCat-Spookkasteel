/*
 * FUN_0040859c at 0040859c
 * undefined __register FUN_0040859c(LPCSTR param_1, LPCSTR param_2, DWORD param_3, LPVOID param_4, HINSTANCE param_5, HMENU param_6, HWND param_7, int param_8, int param_9, int param_10, int param_11)
 * Address ranges: 0040859c-004085ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040859c(LPCSTR param_1,LPCSTR param_2,DWORD param_3,LPVOID param_4,HINSTANCE param_5,
                 HMENU param_6,HWND param_7,int param_8,int param_9,int param_10,int param_11)

{
  CreateWindowExA(0,param_1,param_2,param_3,param_11,param_10,param_9,param_8,param_7,param_6,
                  param_5,param_4);
  return;
}

