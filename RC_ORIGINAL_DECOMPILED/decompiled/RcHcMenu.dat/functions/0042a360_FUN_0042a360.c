/*
 * FUN_0042a360 at 0042a360
 * undefined __register FUN_0042a360(int * param_1, uint * param_2)
 * Address ranges: 0042a360-0042a3b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42614c slot 53 for TCustomMemo. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42614c slot 53 for
   TCustomMemo. Original bytes unchanged; names and types still inferred. */

void FUN_0042a360(int *param_1,uint *param_2)

{
  HWND pHVar1;
  uint uVar2;
  LRESULT LVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0xb0;
  pHVar1 = (HWND)FUN_00438988(param_1);
  uVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  *param_2 = uVar2 >> 0x10;
  LVar6 = 0;
  uVar2 = *param_2;
  UVar4 = 0xc9;
  pHVar1 = (HWND)FUN_00438988(param_1);
  uVar2 = SendMessageA(pHVar1,UVar4,uVar2,LVar6);
  param_2[1] = uVar2;
  LVar6 = 0;
  WVar5 = 0xffffffff;
  UVar4 = 0xbb;
  pHVar1 = (HWND)FUN_00438988(param_1);
  LVar3 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  *param_2 = *param_2 - LVar3;
  return;
}

