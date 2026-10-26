/*
 * FUN_004aacec at 004aacec
 * undefined __register FUN_004aacec(int * param_1)
 * Address ranges: 004aacec-004aaede;004aaee6-004aafb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aacec(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar7;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  tagRECT *lprc;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined *local_38;
  int local_34 [4];
  tagRECT local_24;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_38 = (undefined *)0x0;
  puStack_40 = &LAB_004aafba;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_14 = (int *)0x0;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x4a] != 0) {
    local_14 = FUN_004ab06c((int)param_1);
    puVar1 = puStack_3c;
  }
  puStack_3c = puVar1;
  (**(code **)(*local_8 + 0x40))(local_8,&local_24);
  if (local_14 != (int *)0x0) {
    cVar2 = (**(code **)(*local_14 + 0x1c))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*local_14 + 0x28))();
      if ((cVar2 != '\0') || (*(char *)(local_8[0x4a] + 0x5c) != '\0')) {
        local_c = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',extraout_ECX);
        uVar10 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffb0;
        uVar5 = FUN_0049b884(local_c,(int *)local_14[0x23],local_14[0x10],(undefined *)0x20);
        iVar11 = local_24.bottom - local_24.top;
        if (SBORROW4(local_24.bottom,local_24.top)) {
          thunk_FUN_00402874(uVar5);
          iVar11 = extraout_EDX;
        }
        iVar3 = FUN_0042429c(local_14[0x10],iVar11);
        piVar9 = local_34;
        iVar11 = local_24.right - local_24.left;
        if (SBORROW4(local_24.right,local_24.left)) {
          thunk_FUN_00402874((uint)piVar9);
          iVar11 = extraout_EDX_00;
        }
        iVar11 = FUN_0042429c(local_14[0x23],iVar11);
        FUN_00411640(local_24.left,local_24.top,iVar11,piVar9,iVar3);
        piVar9 = local_34;
        piVar4 = (int *)FUN_0049ac74((int)local_c,extraout_EDX_01,extraout_ECX_00);
        FUN_0041c848(piVar4,local_34,(int *)local_8[0x48],piVar9);
        cVar2 = FUN_00498668((int)local_c,local_14,*(char *)(local_8[0x4a] + 0x5c),
                             *(char *)(local_8[0x4a] + 0x5d));
        uVar6 = extraout_ECX_01;
        uVar7 = extraout_EDX_02;
        if (cVar2 == '\0') {
          piVar9 = local_14;
          piVar4 = (int *)FUN_0049ac74((int)local_c,extraout_EDX_02,extraout_ECX_01);
          FUN_0041c8d0(piVar4,0,0,piVar9);
          uVar6 = extraout_ECX_02;
          uVar7 = extraout_EDX_03;
        }
        piVar9 = local_34;
        piVar4 = (int *)FUN_0049ac74((int)local_c,uVar7,uVar6);
        FUN_0041c848((int *)local_8[0x48],local_34,piVar4,piVar9);
        *in_FS_OFFSET = uVar10;
        FUN_0040e4b4(&local_c);
        return;
      }
      FUN_0041c8d0((int *)local_8[0x48],0,0,local_14);
      goto LAB_004aaefc;
    }
  }
  local_10 = (int *)FUN_004ad63c(local_8[0x4a],5);
  cVar2 = (**(code **)(*local_10 + 0x1c))();
  if (cVar2 == '\0') {
    FUN_0041c8d0((int *)local_8[0x48],0,0,local_10);
  }
  else {
    FUN_0041c318(*(int **)(local_8[0x48] + 0x14),DAT_0057197c);
    FUN_0041cb34((int *)local_8[0x48],local_24.left,local_24.top,local_24.bottom,local_24.right);
  }
LAB_004aaefc:
  FUN_0041ce68(local_8[0x48]);
  FUN_0041c318(*(int **)(local_8[0x48] + 0x14),*(undefined4 *)(*(int *)(local_8[0x48] + 0xc) + 0x18)
              );
  uVar5 = FUN_0041c434(*(int **)(local_8[0x48] + 0x14),'\x01');
  bVar8 = SCARRY4(local_24.left,2);
  local_24.left = local_24.left + 2;
  if (bVar8) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  bVar8 = SCARRY4(local_24.top,2);
  local_24.top = local_24.top + 2;
  if (bVar8) {
    thunk_FUN_00402874(uVar5);
  }
  uVar5 = FUN_00434688((int)local_8);
  uVar5 = uVar5 | 0x810;
  if ((int)uVar5 < 0) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  lprc = &local_24;
  iVar11 = -1;
  FUN_00432714((int)local_8,(int *)&local_38);
  lpchText = FUN_004041f4(local_38);
  hdc = (HDC)FUN_0041cf6c((int *)local_8[0x48]);
  DrawTextA(hdc,lpchText,iVar11,lprc,uVar5);
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004aafc1;
  puStack_40 = (undefined1 *)0x4aafb9;
  FUN_00403db0((int *)&local_38);
  return;
}

