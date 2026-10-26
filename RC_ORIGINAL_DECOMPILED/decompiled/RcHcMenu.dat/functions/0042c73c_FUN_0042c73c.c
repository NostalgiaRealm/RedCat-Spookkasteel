/*
 * FUN_0042c73c at 0042c73c
 * undefined __register FUN_0042c73c(int * param_1)
 * Address ranges: 0042c73c-0042c777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c73c(int *param_1)

{
  HWND pHVar1;
  UINT UVar2;
  WPARAM WVar3;
  LPARAM LVar4;
  
  if (*(char *)((int)param_1 + 0x206) != '\0') {
    LVar4 = 0;
    WVar3 = 0;
    UVar2 = 0x19f;
    pHVar1 = (HWND)FUN_00438988(param_1);
    SendMessageA(pHVar1,UVar2,WVar3,LVar4);
    return;
  }
  LVar4 = 0;
  WVar3 = 0;
  UVar2 = 0x188;
  pHVar1 = (HWND)FUN_00438988(param_1);
  SendMessageA(pHVar1,UVar2,WVar3,LVar4);
  return;
}

