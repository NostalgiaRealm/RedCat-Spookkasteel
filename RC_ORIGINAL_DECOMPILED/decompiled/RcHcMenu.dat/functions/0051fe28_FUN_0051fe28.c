/*
 * FUN_0051fe28 at 0051fe28
 * undefined __register FUN_0051fe28(int * param_1)
 * Address ranges: 0051fe28-005200cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051fe28(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  HDC hdc;
  BOOL BVar5;
  int *piVar6;
  int iVar7;
  LONG *pLVar8;
  RECT *pRVar9;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar10;
  byte bVar11;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 *local_58;
  uint *local_54;
  uint *local_50;
  RECT local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  RECT local_28;
  int local_18;
  uint *local_14;
  uint *local_10;
  uint local_c;
  int *local_8;
  
  bVar11 = 0;
  puStack_68 = &stack0xfffffffc;
  local_58 = (undefined4 *)0x0;
  local_54 = (uint *)0x0;
  local_50 = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_14 = (uint *)0x0;
  puStack_6c = &LAB_005200ce;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_8 = param_1;
  FUN_005256e0(param_1);
  iVar1 = FUN_0051e1b8(local_8);
  FUN_0041c318(*(int **)(local_8[0x7c] + 0x14),*(undefined4 *)(iVar1 + 0x210));
  (**(code **)(*local_8 + 0x40))(local_8,&local_4c);
  FUN_0041c9f8((int *)local_8[0x7c],&local_4c);
  uVar2 = FUN_004321bc(local_8);
  FUN_00411624(0,0,0,&local_28.left,uVar2);
  uVar3 = FUN_0051e5f0((int)local_8);
  uVar4 = uVar3 - 1;
  if (SBORROW4(uVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_18 = uVar4 + 1;
    local_c = 0;
    do {
      iVar1 = FUN_0051e404(local_8,local_c);
      pLVar8 = (LONG *)(iVar1 + 0x14);
      pRVar9 = &local_28;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        pRVar9->left = *pLVar8;
        pLVar8 = pLVar8 + (uint)bVar11 * -2 + 1;
        pRVar9 = (RECT *)((int)pRVar9 + ((uint)bVar11 * -2 + 1) * 4);
      }
      pRVar9 = &local_28;
      hdc = (HDC)FUN_0041cf6c((int *)local_8[0x7c]);
      BVar5 = RectVisible(hdc,pRVar9);
      uVar10 = BVar5 == 0;
      if (!(bool)uVar10) {
        iVar1 = FUN_0051e404(local_8,local_c);
        FUN_00403e48((int *)&local_10,*(int *)(iVar1 + 0x28));
        iVar1 = FUN_0051e404(local_8,local_c);
        FUN_00403e48((int *)&local_14,*(int *)(iVar1 + 0x2c));
        FUN_004591c0((undefined *)local_10,&local_28.left,(int *)local_8[0x7c],(int *)&local_50);
        FUN_00404140(local_50,local_10);
        if ((bool)uVar10) {
          FUN_004591c0((undefined *)local_14,&local_28.left,(int *)local_8[0x7c],(int *)&local_54);
          FUN_00404140(local_54,local_14);
          if (!(bool)uVar10) goto LAB_0051ff81;
          iVar1 = FUN_0051e404(local_8,local_c);
          FUN_00403db0((int *)(iVar1 + 0x38));
        }
        else {
LAB_0051ff81:
          iVar1 = FUN_0051e404(local_8,local_c);
          piVar6 = (int *)(iVar1 + 0x38);
          iVar1 = FUN_0051e404(local_8,local_c);
          FUN_005257bc(iVar1,(int *)&local_58);
          FUN_00403e04(piVar6,local_58);
        }
        uVar2 = FUN_0051e404(local_8,local_c);
        piVar6 = (int *)FUN_0051e1b8(local_8);
        (**(code **)(*piVar6 + 0xbc))(piVar6,local_8[0x7c],&local_28,uVar2);
        uVar2 = FUN_0051e404(local_8,local_c);
        piVar6 = (int *)FUN_0051e1b8(local_8);
        (**(code **)(*piVar6 + 0xc0))(piVar6,local_8[0x7c],&local_28,uVar2);
      }
      local_c = local_c + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar1 = FUN_00432178(local_8);
  if (local_28.right < iVar1) {
    local_28.left = local_28.right;
    local_28.right = FUN_00432178(local_8);
    iVar1 = FUN_0051e1b8(local_8);
    local_3c = *(undefined4 *)(iVar1 + 0x210);
    iVar1 = FUN_0051e1b8(local_8);
    local_38 = *(undefined4 *)(iVar1 + 0x214);
    iVar1 = FUN_0051e1b8(local_8);
    local_34 = *(undefined4 *)(iVar1 + 0x218);
    iVar1 = FUN_0051e1b8(local_8);
    local_30 = *(undefined4 *)(iVar1 + 0x21c);
    iVar1 = FUN_0051e1b8(local_8);
    local_2c = *(undefined4 *)(iVar1 + 0x220);
    FUN_004ab470((int *)local_8[0x7c],&local_28.left,(int)&local_3c,4);
  }
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_005200d5;
  puStack_6c = (undefined1 *)0x5200c0;
  FUN_00403dd4((int *)&local_58,3);
  puStack_6c = (undefined1 *)0x5200cd;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

