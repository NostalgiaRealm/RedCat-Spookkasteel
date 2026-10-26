/*
 * FUN_004ca844 at 004ca844
 * int __register FUN_004ca844(int param_1, byte param_2)
 * Address ranges: 004ca844-004cadb6;004caddd-004cadf2;004cae11-004cae19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004ca844(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  HPALETTE pHVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  HDC pHVar9;
  HDC pHVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  byte bVar12;
  undefined4 *in_FS_OFFSET;
  int iVar13;
  int iVar14;
  int x1;
  int iVar15;
  int y1;
  DWORD DVar16;
  COLORREF CVar17;
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int local_3c [4];
  RECT local_2c;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  byte local_9;
  int local_8;
  
  local_9 = param_2;
  if ((param_2 == 2) && (*(byte *)(param_1 + 0x20) < 3)) {
    local_9 = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc + (uint)local_9 * 4);
  if (iVar1 != -1) {
    return iVar1;
  }
  puStack_4c = (undefined1 *)0x4ca886;
  local_8 = param_1;
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  puStack_4c = (undefined1 *)0x4ca893;
  iVar2 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  if (iVar1 == 0 && iVar2 == 0) {
    return -1;
  }
  puStack_4c = (undefined1 *)0x4ca8a6;
  iVar1 = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
  iVar1 = iVar1 / (int)(uint)*(byte *)(local_8 + 0x20);
  puStack_4c = (undefined1 *)0x4ca8bf;
  iVar2 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  uVar11 = extraout_ECX;
  if (*(int *)(local_8 + 8) == 0) {
    if (DAT_00571d08 == (int *)0x0) {
      puStack_4c = (undefined1 *)0x4ca8df;
      DAT_00571d08 = FUN_004ca53c((int *)&DAT_004ca3c0,'\x01',extraout_ECX);
    }
    puStack_4c = (undefined1 *)0x4ca8f2;
    piVar3 = FUN_004ca5b0((int)DAT_00571d08,iVar1,iVar2);
    *(int **)(local_8 + 8) = piVar3;
    uVar11 = extraout_ECX_00;
  }
  puStack_4c = (undefined1 *)0x4ca904;
  local_10 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',uVar11);
  puStack_50 = &LAB_004cadf3;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x40))(local_10,iVar1);
  (**(code **)(*local_10 + 0x34))(local_10,iVar2);
  uStack_60 = 0x4ca939;
  FUN_00411624(0,0,iVar1,&local_2c.left,iVar2);
  iVar4 = FUN_00421490(local_10);
  FUN_0041c318(*(int **)(iVar4 + 0x14),0x8000000f);
  pHVar5 = (HPALETTE)(**(code **)(**(int **)(local_8 + 4) + 0x24))();
  pHVar5 = FUN_00420cb4(pHVar5);
  (**(code **)(*local_10 + 0x38))(local_10,pHVar5);
  bVar12 = local_9;
  if (*(char *)(local_8 + 0x20) <= (char)local_9) {
    bVar12 = 0;
  }
  uStack_60 = 0x4ca98f;
  FUN_00411624((uint)bVar12 * iVar1,0,(bVar12 + 1) * iVar1,local_3c,iVar2);
  if (local_9 != 0) {
    if (local_9 == 1) {
      local_18 = (int *)0x0;
      local_14 = (int *)0x0;
      uStack_60 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_60;
      local_18 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_01);
      local_14 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_02);
      (**(code **)(*local_14 + 8))(local_14,*(undefined4 *)(local_8 + 4));
      (**(code **)(*local_14 + 0x68))(local_14,1);
      if (*(byte *)(local_8 + 0x20) < 2) {
        (**(code **)(*local_18 + 8))(local_18,*(undefined4 *)(local_8 + 4));
        (**(code **)(*local_18 + 0x68))(local_18,1);
        iVar4 = FUN_00421490(local_18);
        FUN_0041c318(*(int **)(iVar4 + 0x14),0);
        (**(code **)(*local_18 + 0x40))(local_18,iVar1);
        uVar11 = FUN_00421544((int)local_18);
        if ((char)uVar11 != '\0') {
          iVar4 = FUN_00421490(local_18);
          FUN_0041bb48(*(int **)(iVar4 + 0xc),0xffffff,extraout_ECX_03);
          FUN_00422254(local_18,0);
          iVar4 = FUN_00421490(local_18);
          FUN_0041c318(*(int **)(iVar4 + 0x14),0xffffff);
        }
        FUN_00422254(local_18,1);
        piVar3 = (int *)FUN_00421490(local_10);
        FUN_0041c318((int *)piVar3[5],0x8000000f);
        FUN_0041c9f8(piVar3,&local_2c);
        FUN_0041c318((int *)piVar3[5],0x80000014);
        CVar17 = 0;
        pHVar9 = (HDC)FUN_0041cf6c(piVar3);
        SetTextColor(pHVar9,CVar17);
        CVar17 = 0xffffff;
        pHVar9 = (HDC)FUN_0041cf6c(piVar3);
        SetBkColor(pHVar9,CVar17);
        DVar16 = 0xe20746;
        y1 = 0;
        x1 = 0;
        piVar6 = (int *)FUN_00421490(local_18);
        pHVar9 = (HDC)FUN_0041cf6c(piVar6);
        iVar14 = 1;
        iVar13 = 1;
        iVar4 = iVar1;
        iVar15 = iVar2;
        pHVar10 = (HDC)FUN_0041cf6c(piVar3);
        BitBlt(pHVar10,iVar13,iVar14,iVar4,iVar15,pHVar9,x1,y1,DVar16);
        FUN_0041c318((int *)piVar3[5],0x80000010);
        CVar17 = 0;
        pHVar9 = (HDC)FUN_0041cf6c(piVar3);
        SetTextColor(pHVar9,CVar17);
        CVar17 = 0xffffff;
        pHVar9 = (HDC)FUN_0041cf6c(piVar3);
        SetBkColor(pHVar9,CVar17);
        DVar16 = 0xe20746;
        iVar14 = 0;
        iVar13 = 0;
        piVar6 = (int *)FUN_00421490(local_18);
        pHVar9 = (HDC)FUN_0041cf6c(piVar6);
        iVar15 = 0;
        iVar4 = 0;
        pHVar10 = (HDC)FUN_0041cf6c(piVar3);
        BitBlt(pHVar10,iVar4,iVar15,iVar1,iVar2,pHVar9,iVar13,iVar14,DVar16);
      }
      else {
        local_1c = (int *)FUN_00421490(local_10);
        piVar3 = local_3c;
        piVar6 = (int *)FUN_00421490(local_14);
        FUN_0041c848(local_1c,&local_2c.left,piVar6,piVar3);
        FUN_00422254(local_18,1);
        (**(code **)(*local_18 + 0x40))(local_18,iVar1);
        (**(code **)(*local_18 + 0x34))(local_18,iVar2);
        iVar4 = FUN_00421490(local_14);
        FUN_0041c318(*(int **)(iVar4 + 0x14),0xffffff);
        piVar3 = local_3c;
        piVar6 = (int *)FUN_00421490(local_14);
        piVar7 = (int *)FUN_00421490(local_18);
        FUN_0041c848(piVar7,&local_2c.left,piVar6,piVar3);
        FUN_0041c318((int *)local_1c[5],0x80000014);
        pHVar9 = (HDC)FUN_0041cf6c(local_1c);
        SetTextColor(pHVar9,0);
        SetBkColor(pHVar9,0xffffff);
        DVar16 = 0xe20746;
        iVar15 = 0;
        iVar4 = 0;
        piVar3 = (int *)FUN_00421490(local_18);
        pHVar10 = (HDC)FUN_0041cf6c(piVar3);
        BitBlt(pHVar9,0,0,iVar1,iVar2,pHVar10,iVar4,iVar15,DVar16);
        iVar4 = FUN_00421490(local_14);
        FUN_0041c318(*(int **)(iVar4 + 0x14),0x808080);
        piVar3 = local_3c;
        piVar6 = (int *)FUN_00421490(local_14);
        piVar7 = (int *)FUN_00421490(local_18);
        FUN_0041c848(piVar7,&local_2c.left,piVar6,piVar3);
        FUN_0041c318((int *)local_1c[5],0x80000010);
        pHVar9 = (HDC)FUN_0041cf6c(local_1c);
        SetTextColor(pHVar9,0);
        SetBkColor(pHVar9,0xffffff);
        DVar16 = 0xe20746;
        iVar15 = 0;
        iVar4 = 0;
        piVar3 = (int *)FUN_00421490(local_18);
        pHVar10 = (HDC)FUN_0041cf6c(piVar3);
        BitBlt(pHVar9,0,0,iVar1,iVar2,pHVar10,iVar4,iVar15,DVar16);
        uVar11 = FUN_0041b688(*(uint *)(local_8 + 0x1c));
        iVar4 = FUN_00421490(local_14);
        FUN_0041c318(*(int **)(iVar4 + 0x14),uVar11);
        piVar3 = local_3c;
        piVar6 = (int *)FUN_00421490(local_14);
        piVar7 = (int *)FUN_00421490(local_18);
        FUN_0041c848(piVar7,&local_2c.left,piVar6,piVar3);
        FUN_0041c318((int *)local_1c[5],0x8000000f);
        pHVar9 = (HDC)FUN_0041cf6c(local_1c);
        SetTextColor(pHVar9,0);
        SetBkColor(pHVar9,0xffffff);
        DVar16 = 0xe20746;
        iVar15 = 0;
        iVar4 = 0;
        piVar3 = (int *)FUN_00421490(local_18);
        pHVar10 = (HDC)FUN_0041cf6c(piVar3);
        BitBlt(pHVar9,0,0,iVar1,iVar2,pHVar10,iVar4,iVar15,DVar16);
      }
      *in_FS_OFFSET = uStack_60;
      FUN_00403094(local_14);
      iVar1 = FUN_00403094(local_18);
      return iVar1;
    }
    if (1 < (byte)(local_9 - 2)) goto LAB_004caddd;
  }
  piVar3 = local_3c;
  piVar6 = (int *)FUN_00421490(*(int **)(local_8 + 4));
  uStack_60 = 0x4ca9b9;
  piVar7 = (int *)FUN_00421490(local_10);
  FUN_0041c848(piVar7,&local_2c.left,piVar6,piVar3);
  if (*(char *)(*(int *)(local_8 + 4) + 0x30) == '\x01') {
    uVar8 = FUN_004ca4e8(*(int **)(local_8 + 8),local_10,*(int *)(local_8 + 0x1c));
    *(uint *)(local_8 + 0xc + (uint)local_9 * 4) = uVar8;
  }
  else {
    uVar8 = FUN_004ca4e8(*(int **)(local_8 + 8),local_10,0x20000000);
    *(uint *)(local_8 + 0xc + (uint)local_9 * 4) = uVar8;
  }
LAB_004caddd:
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &DAT_004cadfa;
  puStack_50 = (undefined1 *)0x4cadf2;
  iVar1 = FUN_00403094(local_10);
  return iVar1;
}

