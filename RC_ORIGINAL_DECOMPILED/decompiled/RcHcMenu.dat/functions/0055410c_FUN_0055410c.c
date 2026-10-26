/*
 * FUN_0055410c at 0055410c
 * undefined __register FUN_0055410c(int * param_1, int * param_2, LONG * param_3)
 * Address ranges: 0055410c-0055416b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055410c(int *param_1,int *param_2,LONG *param_3)

{
  char cVar1;
  HDC pHVar2;
  int iVar3;
  tagRECT *ptVar4;
  UINT UVar5;
  UINT UVar6;
  tagRECT local_1c;
  int *local_c;
  int *local_8;
  
  ptVar4 = &local_1c;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar4->left = *param_3;
    param_3 = param_3 + 1;
    ptVar4 = (tagRECT *)&ptVar4->top;
  }
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 == '\0') {
    UVar6 = 4;
    UVar5 = 4;
    ptVar4 = &local_1c;
    pHVar2 = (HDC)FUN_0041cf6c(local_c);
    DrawFrameControl(pHVar2,ptVar4,UVar5,UVar6);
  }
  else {
    UVar6 = 0x404;
    UVar5 = 4;
    ptVar4 = &local_1c;
    pHVar2 = (HDC)FUN_0041cf6c(local_c);
    DrawFrameControl(pHVar2,ptVar4,UVar5,UVar6);
  }
  return;
}

