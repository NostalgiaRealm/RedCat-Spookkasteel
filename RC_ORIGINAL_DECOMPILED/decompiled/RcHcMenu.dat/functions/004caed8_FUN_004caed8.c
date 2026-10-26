/*
 * FUN_004caed8 at 004caed8
 * undefined __register FUN_004caed8(undefined4 param_1, int * param_2, undefined * param_3, uint param_4, char param_5, LONG * param_6)
 * Address ranges: 004caed8-004cafba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004caed8(undefined4 param_1,int *param_2,undefined *param_3,uint param_4,char param_5,
                 LONG *param_6)

{
  uint uVar1;
  LPCSTR pCVar2;
  HDC pHVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  tagRECT *ptVar5;
  tagRECT local_14;
  
  ptVar5 = &local_14;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar5->left = *param_6;
    param_6 = param_6 + 1;
    ptVar5 = (tagRECT *)&ptVar5->top;
  }
  FUN_0041c434((int *)param_2[5],'\x01');
  if (param_5 == '\x01') {
    OffsetRect(&local_14,1,1);
    FUN_0041bb48((int *)param_2[3],-0x7fffffec,extraout_ECX);
    uVar1 = param_4 | 5;
    ptVar5 = &local_14;
    iVar4 = FUN_00404030((int)param_3);
    pCVar2 = FUN_004041f4(param_3);
    pHVar3 = (HDC)FUN_0041cf6c(param_2);
    DrawTextA(pHVar3,pCVar2,iVar4,ptVar5,uVar1);
    OffsetRect(&local_14,-1,-1);
    FUN_0041bb48((int *)param_2[3],-0x7ffffff0,extraout_ECX_00);
    uVar1 = param_4 | 5;
    ptVar5 = &local_14;
    iVar4 = FUN_00404030((int)param_3);
    pCVar2 = FUN_004041f4(param_3);
    pHVar3 = (HDC)FUN_0041cf6c(param_2);
    DrawTextA(pHVar3,pCVar2,iVar4,ptVar5,uVar1);
  }
  else {
    uVar1 = param_4 | 5;
    ptVar5 = &local_14;
    iVar4 = FUN_00404030((int)param_3);
    pCVar2 = FUN_004041f4(param_3);
    pHVar3 = (HDC)FUN_0041cf6c(param_2);
    DrawTextA(pHVar3,pCVar2,iVar4,ptVar5,uVar1);
  }
  return;
}

