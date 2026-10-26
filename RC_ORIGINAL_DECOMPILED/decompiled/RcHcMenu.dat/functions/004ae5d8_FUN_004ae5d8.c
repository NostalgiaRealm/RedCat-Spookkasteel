/*
 * FUN_004ae5d8 at 004ae5d8
 * undefined __register FUN_004ae5d8(int * param_1)
 * Address ranges: 004ae5d8-004ae97c;004ae984-004ae99e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ae5d8(int *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  LPCSTR pCVar4;
  HDC pHVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar6;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  LONG *pLVar7;
  int *piVar8;
  tagRECT *ptVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  RECT local_58;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  tagRECT local_30;
  int local_20 [4];
  uint local_10;
  int *local_c;
  int *local_8;
  
  bVar10 = 0;
  puStack_68 = &stack0xfffffffc;
  puStack_74 = &stack0xfffffffc;
  local_48 = (undefined *)0x0;
  local_44 = 0;
  local_40 = (undefined *)0x0;
  local_3c = 0;
  local_38 = (undefined *)0x0;
  local_34 = 0;
  puStack_6c = &LAB_004ae99f;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_8 = param_1;
  if ((char)param_1[0x5c] != '\0') {
    *in_FS_OFFSET = uStack_70;
    puStack_68 = &LAB_004ae9a6;
    puStack_6c = (undefined1 *)0x4ae99e;
    FUN_00403dd4((int *)&local_48,6);
    return;
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  puStack_78 = &LAB_004ae97d;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  (**(code **)(*param_1 + 200))();
  local_c = (int *)0x0;
  if (local_8[0x5d] != 0) {
    local_c = FUN_004aea3c((int)local_8);
  }
  (**(code **)(*local_8 + 0x40))(local_8,local_20);
  if ((local_c == (int *)0x0) || (cVar1 = (**(code **)(*local_c + 0x1c))(), cVar1 != '\0')) {
    (**(code **)(*local_8 + 0xc0))(local_8,local_8[0x48],local_20);
  }
  else {
    cVar1 = (**(code **)(*local_c + 0x28))();
    if ((cVar1 == '\0') && (*(char *)(local_8[0x5d] + 0x5c) == '\0')) {
      FUN_0041c8d0((int *)local_8[0x48],0,0,local_c);
    }
    else {
      piVar8 = local_20;
      piVar2 = (int *)FUN_0049ac74(local_8[0x5f],extraout_EDX,extraout_ECX);
      FUN_0041c848(piVar2,local_20,(int *)local_8[0x48],piVar8);
      cVar1 = FUN_00498668(local_8[0x5f],local_c,*(char *)(local_8[0x5d] + 0x5c),
                           *(char *)(local_8[0x5d] + 0x5d));
      if (cVar1 == '\0') {
        piVar8 = local_c;
        piVar2 = (int *)FUN_0049ac74(local_8[0x5f],extraout_EDX_00,extraout_ECX_00);
        FUN_0041c8d0(piVar2,0,0,piVar8);
      }
      FUN_0041c8d0((int *)local_8[0x48],0,0,(int *)local_8[0x5f]);
    }
  }
  if (local_8[0x5d] == 0) {
    FUN_0041ce68(local_8[0x48]);
    local_10 = 0x25;
    piVar8 = local_20;
    ptVar9 = &local_30;
    for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
      ptVar9->left = *piVar8;
      piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
      ptVar9 = (tagRECT *)((int)ptVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
  }
  else {
    FUN_0041ce68(local_8[0x48]);
    local_10 = FUN_004ad960(local_8[0x5d]);
    pLVar7 = (LONG *)(*(int *)(local_8[0x5d] + 0x68) + 0x10);
    ptVar9 = &local_30;
    for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
      ptVar9->left = *pLVar7;
      pLVar7 = pLVar7 + (uint)bVar10 * -2 + 1;
      ptVar9 = (tagRECT *)((int)ptVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    uVar3 = local_30.right - local_30.left;
    if (SBORROW4(local_30.right,local_30.left)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (0 < (int)uVar3) {
      uVar3 = local_30.right - local_30.left;
      if (SBORROW4(local_30.right,local_30.left)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      if (0 < (int)uVar3) goto LAB_004ae7f6;
    }
    piVar8 = local_20;
    ptVar9 = &local_30;
    for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
      ptVar9->left = *piVar8;
      piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
      ptVar9 = (tagRECT *)((int)ptVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
  }
LAB_004ae7f6:
  FUN_0041c434(*(int **)(local_8[0x48] + 0x14),'\x01');
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
    OffsetRect(&local_30,1,1);
    FUN_0041bb48(*(int **)(local_8[0x48] + 0xc),-0x7fffffec,extraout_ECX_01);
    ptVar9 = &local_30;
    uVar3 = local_10;
    FUN_00432714((int)local_8,&local_34);
    iVar6 = FUN_00404030(local_34);
    FUN_00432714((int)local_8,(int *)&local_38);
    pCVar4 = FUN_004041f4(local_38);
    pHVar5 = (HDC)FUN_0041cf6c((int *)local_8[0x48]);
    DrawTextA(pHVar5,pCVar4,iVar6,ptVar9,uVar3);
    OffsetRect(&local_30,-1,-1);
    FUN_0041bb48(*(int **)(local_8[0x48] + 0xc),-0x7ffffff0,extraout_ECX_02);
    ptVar9 = &local_30;
    uVar3 = local_10;
    FUN_00432714((int)local_8,&local_3c);
    iVar6 = FUN_00404030(local_3c);
    FUN_00432714((int)local_8,(int *)&local_40);
    pCVar4 = FUN_004041f4(local_40);
    pHVar5 = (HDC)FUN_0041cf6c((int *)local_8[0x48]);
    DrawTextA(pHVar5,pCVar4,iVar6,ptVar9,uVar3);
  }
  else {
    ptVar9 = &local_30;
    uVar3 = local_10;
    FUN_00432714((int)local_8,&local_44);
    iVar6 = FUN_00404030(local_44);
    FUN_00432714((int)local_8,(int *)&local_48);
    pCVar4 = FUN_004041f4(local_48);
    pHVar5 = (HDC)FUN_0041cf6c((int *)local_8[0x48]);
    DrawTextA(pHVar5,pCVar4,iVar6,ptVar9,uVar3);
  }
  if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
    FUN_0041c434(*(int **)(local_8[0x48] + 0x14),'\0');
    (**(code **)(*local_8 + 0x40))(local_8,&local_58);
    FUN_0041c97c((int *)local_8[0x48],&local_58);
  }
  *in_FS_OFFSET = uStack_7c;
  *(undefined1 *)(local_8 + 0x5c) = 0;
  return;
}

