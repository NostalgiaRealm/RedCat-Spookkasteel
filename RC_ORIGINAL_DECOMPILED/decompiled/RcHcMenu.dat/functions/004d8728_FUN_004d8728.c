/*
 * FUN_004d8728 at 004d8728
 * undefined __register FUN_004d8728(int * param_1, undefined4 param_2)
 * Address ranges: 004d8728-004d8a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d8728(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  LPCSTR pCVar3;
  HDC pHVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined *extraout_EDX;
  undefined *extraout_EDX_00;
  undefined *puVar7;
  tagRECT *ptVar8;
  LONG *pLVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  RECT local_48;
  LONG local_38 [3];
  int local_2c;
  tagRECT local_28;
  int *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  int *local_8;
  
  bVar10 = 0;
  puStack_58 = &stack0xfffffffc;
  local_14 = (undefined *)0x0;
  puStack_5c = &LAB_004d8a08;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_18 = (int *)param_1[0x48];
  local_c = param_2;
  local_8 = param_1;
  uVar2 = FUN_00429280((int)param_1);
  if ((char)uVar2 == '\0') {
    FUN_0041c318((int *)local_18[5],local_8[0x18]);
    FUN_0041c434((int *)local_18[5],'\0');
    (**(code **)(*local_8 + 0x40))(local_8,&local_48);
    FUN_0041c9f8(local_18,&local_48);
  }
  FUN_0041c434((int *)local_18[5],'\x01');
  (**(code **)(*local_8 + 0x40))(local_8,&local_28);
  local_10 = (uint)(ushort)(*(ushort *)(&DAT_00571d30 + (uint)*(byte *)((int)local_8 + 0x12f) * 2) |
                            0x40 | *(ushort *)(&DAT_00571d28 + (uint)*(byte *)(local_8 + 0x4b) * 2))
  ;
  if (*(char *)((int)local_8 + 0x12e) != '\0') {
    ptVar8 = &local_28;
    pLVar9 = local_38;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar9 = ptVar8->left;
      ptVar8 = (tagRECT *)((int)ptVar8 + ((uint)bVar10 * -2 + 1) * 4);
      pLVar9 = pLVar9 + (uint)bVar10 * -2 + 1;
    }
    FUN_00403270(local_8,local_38,local_10 | 0x400);
    if (*(char *)((int)local_8 + 0x12e) == '\x02') {
      uVar2 = local_8[0xf] - local_2c;
      if (SBORROW4(local_8[0xf],local_2c)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      OffsetRect(&local_28,0,uVar2);
    }
    else {
      uVar2 = local_8[0xf] - local_2c;
      if (SBORROW4(local_8[0xf],local_2c)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      iVar5 = (int)uVar2 >> 1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + (uint)((uVar2 & 1) != 0);
      }
      OffsetRect(&local_28,0,iVar5);
    }
  }
  (**(code **)(*local_8 + 0x88))(local_8,&local_14);
  uVar6 = extraout_ECX;
  if ((local_10 & 0x400) == 0) goto LAB_004d88c3;
  if (local_14 != (undefined *)0x0) {
    if ((char)local_8[0x4c] == '\0') goto LAB_004d88c3;
    iVar5 = 0;
    puVar7 = local_14;
    if (*(int *)(local_14 + -4) == 0) {
      iVar5 = thunk_FUN_00402874(0);
      uVar6 = extraout_ECX_00;
      puVar7 = extraout_EDX;
    }
    if (puVar7[iVar5] != '&') goto LAB_004d88c3;
    iVar5 = 1;
    puVar7 = local_14;
    if (*(uint *)(local_14 + -4) < 2) {
      iVar5 = thunk_FUN_00402874(1);
      uVar6 = extraout_ECX_01;
      puVar7 = extraout_EDX_00;
    }
    if (puVar7[iVar5] != '\0') goto LAB_004d88c3;
  }
  FUN_00404038((int *)&local_14,(undefined4 *)&LAB_004d8a20);
  uVar6 = extraout_ECX_02;
LAB_004d88c3:
  if ((char)local_8[0x4c] == '\0') {
    local_10 = local_10 | 0x800;
  }
  local_10 = FUN_00434648(local_8,local_10,uVar6);
  FUN_0041ce68(local_8[0x48]);
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
    OffsetRect(&local_28,1,1);
    FUN_0041bb48(*(int **)(local_8[0x48] + 0xc),-0x7fffffec,extraout_ECX_03);
    uVar2 = local_10;
    if ((int)local_10 < 0) {
      uVar2 = thunk_FUN_00402874(local_10);
    }
    ptVar8 = &local_28;
    iVar5 = FUN_00404030((int)local_14);
    pCVar3 = FUN_004041f4(local_14);
    pHVar4 = (HDC)FUN_0041cf6c((int *)local_8[0x48]);
    DrawTextA(pHVar4,pCVar3,iVar5,ptVar8,uVar2);
    OffsetRect(&local_28,-1,-1);
    FUN_0041bb48(*(int **)(local_8[0x48] + 0xc),-0x7ffffff0,extraout_ECX_04);
    uVar2 = local_10;
    if ((int)local_10 < 0) {
      uVar2 = thunk_FUN_00402874(local_10);
    }
    ptVar8 = &local_28;
    iVar5 = FUN_00404030((int)local_14);
    pCVar3 = FUN_004041f4(local_14);
    pHVar4 = (HDC)FUN_0041cf6c((int *)local_8[0x48]);
    DrawTextA(pHVar4,pCVar3,iVar5,ptVar8,uVar2);
  }
  else {
    uVar2 = local_10;
    if ((int)local_10 < 0) {
      uVar2 = thunk_FUN_00402874(local_10);
    }
    ptVar8 = &local_28;
    iVar5 = FUN_00404030((int)local_14);
    pCVar3 = FUN_004041f4(local_14);
    pHVar4 = (HDC)FUN_0041cf6c((int *)local_8[0x48]);
    DrawTextA(pHVar4,pCVar3,iVar5,ptVar8,uVar2);
  }
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_004d8a0f;
  puStack_5c = (undefined1 *)0x4d8a07;
  FUN_00403db0((int *)&local_14);
  return;
}

