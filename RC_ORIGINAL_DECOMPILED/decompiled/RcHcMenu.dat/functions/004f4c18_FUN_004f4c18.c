/*
 * FUN_004f4c18 at 004f4c18
 * undefined __register FUN_004f4c18(int param_1, byte param_2)
 * Address ranges: 004f4c18-004f4c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f463c slot 12 for TTabStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f463c slot 12 for
   TTabStrings. Original bytes unchanged; names and types still inferred. */

void FUN_004f4c18(int param_1,byte param_2)

{
  int *piVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  piVar1 = *(int **)(param_1 + 0xc);
  *(byte *)(piVar1 + 0x86) = param_2;
  lParam = 0;
  wParam = (param_2 ^ 1) & 0x7f;
  Msg = 0xb;
  hWnd = (HWND)FUN_00438988(piVar1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  if (param_2 != 1) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
    FUN_004f547c(*(int **)(param_1 + 0xc));
  }
  return;
}

