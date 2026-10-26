/*
 * FUN_004c782c at 004c782c
 * undefined __register FUN_004c782c(undefined4 param_1, int * param_2, undefined * param_3, char param_4, LONG * param_5)
 * Address ranges: 004c782c-004c7918
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c782c(undefined4 param_1,int *param_2,undefined *param_3,char param_4,LONG *param_5)

{
  LPCSTR pCVar1;
  HDC pHVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  tagRECT *ptVar4;
  UINT UVar5;
  tagRECT local_20;
  undefined *local_10;
  int *local_c;
  undefined4 local_8;
  
  ptVar4 = &local_20;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar4->left = *param_5;
    param_5 = param_5 + 1;
    ptVar4 = (tagRECT *)&ptVar4->top;
  }
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0041c434((int *)param_2[5],'\x01');
  if (param_4 == '\x01') {
    OffsetRect(&local_20,1,1);
    FUN_0041bb48((int *)local_c[3],-0x7fffffec,extraout_ECX);
    UVar5 = 0;
    ptVar4 = &local_20;
    iVar3 = FUN_00404030((int)local_10);
    pCVar1 = FUN_004041f4(local_10);
    pHVar2 = (HDC)FUN_0041cf6c(local_c);
    DrawTextA(pHVar2,pCVar1,iVar3,ptVar4,UVar5);
    OffsetRect(&local_20,-1,-1);
    FUN_0041bb48((int *)local_c[3],-0x7ffffff0,extraout_ECX_00);
    UVar5 = 0;
    ptVar4 = &local_20;
    iVar3 = FUN_00404030((int)local_10);
    pCVar1 = FUN_004041f4(local_10);
    pHVar2 = (HDC)FUN_0041cf6c(local_c);
    DrawTextA(pHVar2,pCVar1,iVar3,ptVar4,UVar5);
  }
  else {
    UVar5 = 0x25;
    ptVar4 = &local_20;
    iVar3 = FUN_00404030((int)local_10);
    pCVar1 = FUN_004041f4(local_10);
    pHVar2 = (HDC)FUN_0041cf6c(local_c);
    DrawTextA(pHVar2,pCVar1,iVar3,ptVar4,UVar5);
  }
  return;
}

