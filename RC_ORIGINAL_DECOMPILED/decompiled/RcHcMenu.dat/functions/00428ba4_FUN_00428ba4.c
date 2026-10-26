/*
 * FUN_00428ba4 at 00428ba4
 * undefined __register FUN_00428ba4(int * param_1)
 * Address ranges: 00428ba4-00428d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00428ba4(int *param_1)

{
  int *piVar1;
  char cVar2;
  LONG LVar3;
  uint uVar4;
  uint format;
  LPCSTR pCVar5;
  HDC pHVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_EDX;
  LONG *pLVar9;
  RECT *pRVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  LONG local_2c [4];
  int local_1c;
  RECT local_18;
  uint local_8;
  
  bVar11 = 0;
  puStack_50 = &stack0xfffffffc;
  local_40 = (undefined *)0x0;
  local_3c = 0;
  local_38 = (undefined *)0x0;
  local_34 = 0;
  local_30 = (undefined *)0x0;
  local_1c = 0;
  puStack_54 = &LAB_00428d98;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  piVar1 = (int *)param_1[0x7c];
  FUN_0041ce68((int)piVar1);
  local_8 = FUN_0041cdc4(piVar1,&LAB_00428db0);
  iVar8 = (int)local_8 >> 1;
  if (iVar8 < 0) {
    iVar8 = iVar8 + (uint)((local_8 & 1) != 0);
  }
  FUN_00411624(0,iVar8 + -1,param_1[0xe],&local_18.left,param_1[0xf]);
  if ((char)param_1[0x4e] == '\0') {
    FUN_0041c318((int *)piVar1[5],0x80000006);
  }
  else {
    local_18.left = local_18.left + 1;
    local_18.top = local_18.top + 1;
    FUN_0041c318((int *)piVar1[5],0x80000014);
    FUN_0041ca34(piVar1,&local_18);
    OffsetRect(&local_18,-1,-1);
    FUN_0041c318((int *)piVar1[5],0x80000010);
  }
  FUN_0041ca34(piVar1,&local_18);
  FUN_00432714((int)param_1,&local_1c);
  if (local_1c != 0) {
    cVar2 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    if (cVar2 == '\0') {
      FUN_00411624(8,0,0,&local_18.left,local_8);
      uVar7 = extraout_ECX_00;
    }
    else {
      pLVar9 = local_2c;
      uVar4 = local_8;
      FUN_00432714((int)param_1,(int *)&local_30);
      LVar3 = FUN_0041cda8((int *)param_1[0x7c],local_30);
      FUN_00411624((local_18.right - LVar3) + -8,0,0,pLVar9,uVar4);
      pLVar9 = local_2c;
      pRVar10 = &local_18;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        pRVar10->left = *pLVar9;
        pLVar9 = pLVar9 + (uint)bVar11 * -2 + 1;
        pRVar10 = (RECT *)((int)pRVar10 + ((uint)bVar11 * -2 + 1) * 4);
      }
      uVar7 = 0;
    }
    uVar4 = FUN_00434648(param_1,0x20,uVar7);
    format = uVar4 | 0x400;
    pRVar10 = &local_18;
    FUN_00432714((int)param_1,&local_34);
    iVar8 = FUN_00404030(local_34);
    FUN_00432714((int)param_1,(int *)&local_38);
    pCVar5 = FUN_004041f4(local_38);
    pHVar6 = (HDC)FUN_0041cf6c(piVar1);
    DrawTextA(pHVar6,pCVar5,iVar8,pRVar10,format);
    FUN_0041c318((int *)piVar1[5],param_1[0x18]);
    pRVar10 = &local_18;
    FUN_00432714((int)param_1,&local_3c);
    iVar8 = FUN_00404030(local_3c);
    FUN_00432714((int)param_1,(int *)&local_40);
    pCVar5 = FUN_004041f4(local_40);
    pHVar6 = (HDC)FUN_0041cf6c(piVar1);
    DrawTextA(pHVar6,pCVar5,iVar8,pRVar10,uVar4);
  }
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_00428d9f;
  puStack_54 = (undefined1 *)0x428d8f;
  FUN_00403dd4((int *)&local_40,5);
  puStack_54 = (undefined1 *)0x428d97;
  FUN_00403db0(&local_1c);
  return;
}

