/*
 * FUN_004c718c at 004c718c
 * int __register FUN_004c718c(int param_1, byte param_2)
 * Address ranges: 004c718c-004c76e5;004c770c-004c7721;004c7743-004c774a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004c718c(int param_1,byte param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  HPALETTE pHVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  HDC pHVar9;
  undefined4 uVar10;
  HDC pHVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int iVar12;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 *in_FS_OFFSET;
  int iVar13;
  int iVar14;
  int iVar15;
  DWORD DVar16;
  COLORREF CVar17;
  undefined4 uStack_70;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  int local_54 [4];
  RECT local_44;
  int *local_34;
  int *local_30;
  HDC local_2c;
  byte local_25;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  byte local_9;
  int local_8;
  
  local_9 = param_2;
  if ((param_2 == 2) && (*(byte *)(param_1 + 0x20) < 3)) {
    local_9 = 0;
  }
  local_10 = *(int *)(param_1 + 0xc + (uint)local_9 * 4);
  if (local_10 != -1) {
    return local_10;
  }
  puStack_5c = (undefined1 *)0x4c71d0;
  local_8 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  puStack_5c = (undefined1 *)0x4c71dd;
  iVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  if (iVar2 == 0 && iVar3 == 0) {
    return local_10;
  }
  puStack_5c = (undefined1 *)0x4c71f0;
  local_20 = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
  local_20 = local_20 / (int)(uint)*(byte *)(local_8 + 0x20);
  puStack_5c = (undefined1 *)0x4c720a;
  local_24 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  uVar10 = extraout_ECX;
  if (*(int *)(local_8 + 8) == 0) {
    if (DAT_00571ccc == (int *)0x0) {
      puStack_5c = (undefined1 *)0x4c722b;
      DAT_00571ccc = FUN_004c6d74((int *)&DAT_004c6b88,'\x01',extraout_ECX);
    }
    puStack_5c = (undefined1 *)0x4c7240;
    piVar4 = FUN_004c6e04((int)DAT_00571ccc,local_20,local_24);
    *(int **)(local_8 + 8) = piVar4;
    uVar10 = extraout_ECX_00;
  }
  puStack_5c = (undefined1 *)0x4c7252;
  local_14 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',uVar10);
  puStack_60 = &LAB_004c7722;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  puStack_5c = &stack0xfffffffc;
  (**(code **)(*local_14 + 0x40))(local_14,local_20);
  (**(code **)(*local_14 + 0x34))(local_14,local_24);
  uStack_70 = 0x4c728d;
  FUN_00411624(0,0,local_20,&local_44.left,local_24);
  iVar2 = FUN_00421490(local_14);
  FUN_0041c318(*(int **)(iVar2 + 0x14),0x8000000f);
  pHVar5 = (HPALETTE)(**(code **)(**(int **)(local_8 + 4) + 0x24))();
  pHVar5 = FUN_00420cb4(pHVar5);
  (**(code **)(*local_14 + 0x38))(local_14,pHVar5);
  local_25 = local_9;
  if (*(char *)(local_8 + 0x20) <= (char)local_9) {
    local_25 = 0;
  }
  piVar4 = local_54;
  iVar2 = local_25 + 1;
  piVar7 = piVar4;
  iVar3 = local_24;
  if (SCARRY4((uint)local_25,1)) {
    uStack_70 = 0x4c72e8;
    piVar4 = (int *)thunk_FUN_00402874((uint)piVar4);
    iVar2 = extraout_ECX_01;
  }
  iVar12 = (int)((longlong)iVar2 * (longlong)local_20);
  if ((longlong)iVar12 != (longlong)iVar2 * (longlong)local_20) {
    uStack_70 = 0x4c72f3;
    thunk_FUN_00402874((uint)piVar4);
    iVar12 = extraout_ECX_02;
  }
  uVar1 = (longlong)(int)(uint)local_25 * (longlong)local_20;
  if ((longlong)(int)(uint)uVar1 != uVar1) {
    uStack_70 = 0x4c7302;
    uVar6 = thunk_FUN_00402874((uint)uVar1);
    uVar1 = (ulonglong)uVar6;
    iVar12 = extraout_ECX_03;
  }
  uStack_70 = 0x4c7309;
  FUN_00411624((int)uVar1,0,iVar12,piVar7,iVar3);
  if (local_9 != 0) {
    if (local_9 == 1) {
      local_1c = (int *)0x0;
      local_18 = (int *)0x0;
      uStack_70 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_70;
      local_1c = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_04);
      local_18 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_05);
      (**(code **)(*local_18 + 8))(local_18,*(undefined4 *)(local_8 + 4));
      (**(code **)(*local_18 + 0x68))(local_18,1);
      if (*(byte *)(local_8 + 0x20) < 2) {
        (**(code **)(*local_1c + 8))(local_1c,*(undefined4 *)(local_8 + 4));
        (**(code **)(*local_1c + 0x68))(local_1c,1);
        iVar2 = FUN_00421490(local_1c);
        FUN_0041c318(*(int **)(iVar2 + 0x14),0);
        (**(code **)(*local_1c + 0x40))(local_1c,local_20);
        uVar10 = FUN_00421544((int)local_1c);
        if ((char)uVar10 != '\0') {
          iVar2 = FUN_00421490(local_1c);
          FUN_0041bb48(*(int **)(iVar2 + 0xc),0xffffff,extraout_ECX_06);
          FUN_00422254(local_1c,0);
          iVar2 = FUN_00421490(local_1c);
          FUN_0041c318(*(int **)(iVar2 + 0x14),0xffffff);
        }
        FUN_00422254(local_1c,1);
        local_34 = (int *)FUN_00421490(local_14);
        FUN_0041c318((int *)local_34[5],0x8000000f);
        FUN_0041c9f8(local_34,&local_44);
        FUN_0041c318((int *)local_34[5],0x80000014);
        CVar17 = 0;
        pHVar9 = (HDC)FUN_0041cf6c(local_34);
        SetTextColor(pHVar9,CVar17);
        CVar17 = 0xffffff;
        pHVar9 = (HDC)FUN_0041cf6c(local_34);
        SetBkColor(pHVar9,CVar17);
        DVar16 = 0xe20746;
        iVar15 = 0;
        iVar14 = 0;
        piVar4 = (int *)FUN_00421490(local_1c);
        pHVar9 = (HDC)FUN_0041cf6c(piVar4);
        iVar13 = 1;
        iVar12 = 1;
        iVar2 = local_20;
        iVar3 = local_24;
        pHVar11 = (HDC)FUN_0041cf6c(local_34);
        BitBlt(pHVar11,iVar12,iVar13,iVar2,iVar3,pHVar9,iVar14,iVar15,DVar16);
        FUN_0041c318((int *)local_34[5],0x80000010);
        CVar17 = 0;
        pHVar9 = (HDC)FUN_0041cf6c(local_34);
        SetTextColor(pHVar9,CVar17);
        CVar17 = 0xffffff;
        pHVar9 = (HDC)FUN_0041cf6c(local_34);
        SetBkColor(pHVar9,CVar17);
        DVar16 = 0xe20746;
        iVar15 = 0;
        iVar14 = 0;
        piVar4 = (int *)FUN_00421490(local_1c);
        pHVar9 = (HDC)FUN_0041cf6c(piVar4);
        iVar13 = 0;
        iVar12 = 0;
        iVar2 = local_20;
        iVar3 = local_24;
        pHVar11 = (HDC)FUN_0041cf6c(local_34);
        BitBlt(pHVar11,iVar12,iVar13,iVar2,iVar3,pHVar9,iVar14,iVar15,DVar16);
      }
      else {
        local_30 = (int *)FUN_00421490(local_14);
        piVar4 = local_54;
        piVar7 = (int *)FUN_00421490(local_18);
        FUN_0041c848(local_30,&local_44.left,piVar7,piVar4);
        FUN_00422254(local_1c,1);
        (**(code **)(*local_1c + 0x40))(local_1c,local_20);
        (**(code **)(*local_1c + 0x34))(local_1c,local_24);
        iVar2 = FUN_00421490(local_18);
        FUN_0041c318(*(int **)(iVar2 + 0x14),0xffffff);
        piVar4 = local_54;
        piVar7 = (int *)FUN_00421490(local_18);
        piVar8 = (int *)FUN_00421490(local_1c);
        FUN_0041c848(piVar8,&local_44.left,piVar7,piVar4);
        FUN_0041c318((int *)local_30[5],0x80000014);
        local_2c = (HDC)FUN_0041cf6c(local_30);
        SetTextColor(local_2c,0);
        SetBkColor(local_2c,0xffffff);
        DVar16 = 0xe20746;
        iVar3 = 0;
        iVar2 = 0;
        piVar4 = (int *)FUN_00421490(local_1c);
        pHVar9 = (HDC)FUN_0041cf6c(piVar4);
        BitBlt(local_2c,0,0,local_20,local_24,pHVar9,iVar2,iVar3,DVar16);
        iVar2 = FUN_00421490(local_18);
        FUN_0041c318(*(int **)(iVar2 + 0x14),0x808080);
        piVar4 = local_54;
        piVar7 = (int *)FUN_00421490(local_18);
        piVar8 = (int *)FUN_00421490(local_1c);
        FUN_0041c848(piVar8,&local_44.left,piVar7,piVar4);
        FUN_0041c318((int *)local_30[5],0x80000010);
        local_2c = (HDC)FUN_0041cf6c(local_30);
        SetTextColor(local_2c,0);
        SetBkColor(local_2c,0xffffff);
        DVar16 = 0xe20746;
        iVar3 = 0;
        iVar2 = 0;
        piVar4 = (int *)FUN_00421490(local_1c);
        pHVar9 = (HDC)FUN_0041cf6c(piVar4);
        BitBlt(local_2c,0,0,local_20,local_24,pHVar9,iVar2,iVar3,DVar16);
      }
      *in_FS_OFFSET = uStack_70;
      FUN_00403094(local_18);
      iVar2 = FUN_00403094(local_1c);
      return iVar2;
    }
    if (1 < (byte)(local_9 - 2)) goto LAB_004c770c;
  }
  piVar4 = local_54;
  piVar7 = (int *)FUN_00421490(*(int **)(local_8 + 4));
  uStack_70 = 0x4c7333;
  piVar8 = (int *)FUN_00421490(local_14);
  FUN_0041c848(piVar8,&local_44.left,piVar7,piVar4);
  if (*(char *)(*(int *)(local_8 + 4) + 0x30) == '\x01') {
    uVar6 = FUN_004c6cf0(*(int **)(local_8 + 8),local_14,*(int *)(local_8 + 0x1c));
    *(uint *)(local_8 + 0xc + (uint)local_9 * 4) = uVar6;
  }
  else {
    uVar6 = FUN_004c6cf0(*(int **)(local_8 + 8),local_14,0x20000000);
    *(uint *)(local_8 + 0xc + (uint)local_9 * 4) = uVar6;
  }
LAB_004c770c:
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &DAT_004c7729;
  puStack_60 = (undefined1 *)0x4c7721;
  iVar2 = FUN_00403094(local_14);
  return iVar2;
}

