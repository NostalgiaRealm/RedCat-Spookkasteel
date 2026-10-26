/*
 * FUN_0044c1e8 at 0044c1e8
 * undefined __register FUN_0044c1e8(int * param_1, UINT * param_2)
 * Address ranges: 0044c1e8-0044c249
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot -4 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot -4 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044c1e8(int *param_1,UINT *param_2)

{
  HWND pHVar1;
  UINT UVar2;
  HWND hWnd;
  UINT UVar3;
  UINT UVar4;
  
  if (param_1[0x8f] == 0) {
    FUN_004363ac((int)param_1,param_2);
  }
  else {
    if (*param_2 != 5) {
      UVar2 = param_2[2];
      UVar4 = param_2[1];
      UVar3 = *param_2;
      pHVar1 = (HWND)param_1[0x8f];
      hWnd = (HWND)FUN_00438988(param_1);
      UVar2 = DefFrameProcA(hWnd,pHVar1,UVar3,UVar4,UVar2);
      param_2[3] = UVar2;
      return;
    }
    UVar2 = param_2[2];
    UVar4 = param_2[1];
    UVar3 = *param_2;
    pHVar1 = (HWND)FUN_00438988(param_1);
    UVar2 = DefWindowProcA(pHVar1,UVar3,UVar4,UVar2);
    param_2[3] = UVar2;
  }
  return;
}

