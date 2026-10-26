/*
 * FUN_004ab7f0 at 004ab7f0
 * undefined __register FUN_004ab7f0(int * param_1, LONG * param_2, char param_3)
 * Address ranges: 004ab7f0-004ab83b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ab7f0(int *param_1,LONG *param_2,char param_3)

{
  bool bVar1;
  HWND hWnd;
  int iVar2;
  LONG *pLVar3;
  RECT *pRVar4;
  byte bVar5;
  RECT local_20;
  char local_d;
  LONG *local_c;
  int *local_8;
  
  bVar5 = 0;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    pLVar3 = local_c;
    pRVar4 = &local_20;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      pRVar4->left = *pLVar3;
      pLVar3 = pLVar3 + (uint)bVar5 * -2 + 1;
      pRVar4 = (RECT *)((int)pRVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    iVar2 = -(uint)(local_d != '\0');
    pRVar4 = &local_20;
    hWnd = (HWND)FUN_00438988(local_8);
    InvalidateRect(hWnd,pRVar4,iVar2);
  }
  return;
}

