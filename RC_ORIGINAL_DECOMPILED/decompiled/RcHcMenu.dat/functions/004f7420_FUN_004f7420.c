/*
 * FUN_004f7420 at 004f7420
 * undefined __register FUN_004f7420(int * param_1)
 * Address ranges: 004f7420-004f749a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f7420(int *param_1)

{
  bool bVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  int iVar5;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM LVar8;
  
  bVar1 = FUN_00438c84((int)param_1);
  if ((bVar1) && ((char)param_1[0x7e] == '\0')) {
    LVar8 = 0;
    WVar7 = 0;
    UVar6 = 0x1200;
    pHVar2 = (HWND)FUN_00438988(param_1);
    LVar3 = SendMessageA(pHVar2,UVar6,WVar7,LVar8);
    if (-1 < LVar3 + -1) {
      do {
        LVar8 = 0;
        WVar7 = 0;
        UVar6 = 0x1202;
        pHVar2 = (HWND)FUN_00438988(param_1);
        SendMessageA(pHVar2,UVar6,WVar7,LVar8);
        LVar3 = LVar3 + -1;
      } while (LVar3 != 0);
    }
    iVar4 = FUN_0041300c(param_1[0x7c]);
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        FUN_004f7300(param_1,0x1201,iVar5);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

