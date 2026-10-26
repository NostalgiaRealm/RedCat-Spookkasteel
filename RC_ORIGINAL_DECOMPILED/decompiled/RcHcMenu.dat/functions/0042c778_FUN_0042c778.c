/*
 * FUN_0042c778 at 0042c778
 * undefined __register FUN_0042c778(int * param_1, WPARAM param_2)
 * Address ranges: 0042c778-0042c7c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c778(int *param_1,WPARAM param_2)

{
  WPARAM WVar1;
  HWND pHVar2;
  UINT UVar3;
  LPARAM LVar4;
  
  WVar1 = FUN_0042c73c(param_1);
  if (param_2 != WVar1) {
    if (*(char *)((int)param_1 + 0x206) == '\0') {
      LVar4 = 0;
      UVar3 = 0x186;
      pHVar2 = (HWND)FUN_00438988(param_1);
      SendMessageA(pHVar2,UVar3,param_2,LVar4);
    }
    else {
      LVar4 = 0;
      UVar3 = 0x19e;
      pHVar2 = (HWND)FUN_00438988(param_1);
      SendMessageA(pHVar2,UVar3,param_2,LVar4);
    }
  }
  return;
}

