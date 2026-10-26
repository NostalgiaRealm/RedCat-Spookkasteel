/*
 * FUN_0044a85c at 0044a85c
 * undefined __register FUN_0044a85c(int * param_1, LPRECT param_2)
 * Address ranges: 0044a85c-0044a8e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 16 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 16 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044a85c(int *param_1,LPRECT param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  DWORD dwExStyle;
  DWORD dwStyle;
  int nIndex;
  int iVar3;
  
  pHVar1 = (HWND)FUN_00438988(param_1);
  BVar2 = IsIconic(pHVar1);
  if (BVar2 != 0) {
    SetRect(param_2,0,0,0,0);
    iVar3 = -0x14;
    pHVar1 = (HWND)FUN_00438988(param_1);
    dwExStyle = GetWindowLongA(pHVar1,iVar3);
    iVar3 = -(uint)(param_1[0x8c] != 0);
    nIndex = -0x10;
    pHVar1 = (HWND)FUN_00438988(param_1);
    dwStyle = GetWindowLongA(pHVar1,nIndex);
    AdjustWindowRectEx(param_2,dwStyle,iVar3,dwExStyle);
    SetRect(param_2,0,0,(param_1[0xe] - param_2->right) + param_2->left,
            (param_1[0xf] - param_2->bottom) + param_2->top);
    return;
  }
  FUN_00438a50(param_1,param_2);
  return;
}

