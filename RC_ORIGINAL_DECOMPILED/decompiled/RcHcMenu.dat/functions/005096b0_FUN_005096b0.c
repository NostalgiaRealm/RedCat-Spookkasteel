/*
 * FUN_005096b0 at 005096b0
 * undefined __register FUN_005096b0(int param_1, LONG * param_2, byte param_3)
 * Address ranges: 005096b0-0050982f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005096b0(int param_1,LONG *param_2,byte param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int iVar2;
  int extraout_EDX;
  LONG *pLVar3;
  tagRECT *ptVar4;
  uint uVar5;
  LONG LVar6;
  tagRECT local_30;
  LONG local_20 [4];
  int *local_10;
  byte local_9;
  int local_8;
  
  pLVar3 = local_20;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = *param_2;
    param_2 = param_2 + 1;
    pLVar3 = pLVar3 + 1;
  }
  local_9 = param_3;
  local_8 = param_1;
  pLVar3 = local_20;
  ptVar4 = &local_30;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    ptVar4->left = *pLVar3;
    pLVar3 = pLVar3 + 1;
    ptVar4 = (tagRECT *)&ptVar4->top;
  }
  local_10 = *(int **)(local_8 + 0x1f0);
  if ((local_9 & 1) == 0) {
    if ((local_9 & 8) == 0) {
      FUN_0041c318((int *)local_10[5],0x80000005);
      FUN_0041bb48((int *)local_10[3],-0x7ffffff8,extraout_ECX_01);
    }
    else {
      FUN_0041c318((int *)local_10[5],0x8000000f);
      FUN_0041bb48((int *)local_10[3],-0x7fffffee,extraout_ECX_00);
    }
  }
  else {
    FUN_0041c318((int *)local_10[5],0x8000000d);
    FUN_0041bb48((int *)local_10[3],-0x7ffffff2,extraout_ECX);
  }
  if ((local_9 & 4) == 0) {
    FUN_0041c034((int *)local_10[4],0xff);
  }
  else {
    FUN_0041c034((int *)local_10[4],0x80000010);
    FUN_0041bb48((int *)local_10[3],-0x7ffffff0,extraout_ECX_02);
  }
  if ((local_9 & 2) == 0) {
    if ((local_9 & 1) == 0) {
      if ((local_9 & 8) != 0) {
        InflateRect(&local_30,-5,-5);
        FUN_0041c9f8(local_10,&local_30);
      }
    }
    else {
      InflateRect(&local_30,-5,-5);
      FUN_0041c9f8(local_10,&local_30);
    }
  }
  else {
    FUN_0041c140((int *)local_10[4],2);
    InflateRect(&local_30,-2,-2);
    iVar1 = local_30.top + 1;
    uVar5 = local_30.bottom;
    LVar6 = local_30.right;
    if (SCARRY4(local_30.top,1)) {
      local_30.bottom = thunk_FUN_00402874(local_30.bottom);
      iVar1 = extraout_ECX_03;
      LVar6 = local_30.right;
    }
    iVar2 = local_30.left + 1;
    if (SCARRY4(local_30.left,1)) {
      thunk_FUN_00402874(local_30.bottom);
      iVar1 = extraout_ECX_04;
      iVar2 = extraout_EDX;
    }
    FUN_0041c9b0(local_10,iVar2,iVar1,uVar5,LVar6);
    FUN_0041c140((int *)local_10[4],1);
  }
  return;
}

