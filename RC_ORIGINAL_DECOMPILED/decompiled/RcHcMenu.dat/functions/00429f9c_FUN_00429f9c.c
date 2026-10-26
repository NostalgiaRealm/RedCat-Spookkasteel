/*
 * FUN_00429f9c at 00429f9c
 * undefined __register FUN_00429f9c(int param_1, WPARAM param_2)
 * Address ranges: 00429f9c-0042a029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x428840 slot 17 for TMemoStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x428840
   slot 17 for TMemoStrings. Original bytes unchanged; names and types still inferred. */

void FUN_00429f9c(int param_1,WPARAM param_2)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  WPARAM WVar4;
  UINT UVar5;
  LPARAM LVar6;
  
  LVar6 = 0;
  UVar5 = 0xbb;
  WVar2 = param_2;
  pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  WVar2 = SendMessageA(pHVar1,UVar5,WVar2,LVar6);
  if (-1 < (int)WVar2) {
    LVar6 = 0;
    WVar4 = param_2 + 1;
    UVar5 = 0xbb;
    pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar1,UVar5,WVar4,LVar6);
    if (LVar3 < 0) {
      LVar6 = 0;
      UVar5 = 0xc1;
      WVar4 = WVar2;
      pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
      LVar3 = SendMessageA(pHVar1,UVar5,WVar4,LVar6);
      LVar3 = LVar3 + WVar2;
    }
    UVar5 = 0xb1;
    pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar5,WVar2,LVar3);
    WVar2 = 0;
    UVar5 = 0xc2;
    LVar6 = DAT_0056f6e0;
    pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar5,WVar2,LVar6);
  }
  return;
}

