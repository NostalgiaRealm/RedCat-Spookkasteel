/*
 * FUN_00507c4c at 00507c4c
 * undefined __register FUN_00507c4c(int param_1)
 * Address ranges: 00507c4c-0050805d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00507c4c(int param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar2;
  int extraout_EDX;
  uint uVar3;
  uint extraout_EDX_00;
  int iVar4;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint extraout_EDX_03;
  int iVar5;
  int extraout_EDX_04;
  uint extraout_EDX_05;
  undefined **extraout_EDX_06;
  uint extraout_EDX_07;
  undefined **extraout_EDX_08;
  undefined **ppuVar6;
  int extraout_EDX_09;
  uint extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  uint extraout_EDX_13;
  int extraout_EDX_14;
  undefined4 *in_FS_OFFSET;
  int *piVar7;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_2c = (undefined *)0x0;
  local_28 = (undefined *)0x0;
  local_24 = (undefined *)0x0;
  puStack_34 = &LAB_0050805e;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = *(int **)(param_1 + 0x1f0);
  local_8 = param_1;
  FUN_0041c318((int *)local_c[5],*(undefined4 *)(param_1 + 0x60));
  FUN_0041c034((int *)local_c[4],0xffffff);
  local_10 = (int *)(local_8 + 0x210);
  FUN_0041cb34(local_c,*local_10,*(int *)(local_8 + 0x214),*(int *)(local_8 + 0x21c),
               *(int *)(local_8 + 0x218));
  piVar7 = *(int **)(local_8 + 0x1f8);
  uVar1 = (**(code **)(**(int **)(local_8 + 0x1f8) + 0x2c))();
  iVar2 = local_10[1] + local_10[3];
  if (SCARRY4(local_10[1],local_10[3])) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar2 = extraout_EDX;
  }
  uVar3 = iVar2 - uVar1;
  if (SBORROW4(iVar2,uVar1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    uVar3 = extraout_EDX_00;
  }
  iVar2 = (int)uVar3 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar3 & 1) != 0);
  }
  iVar4 = iVar2 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(uVar1);
    iVar4 = extraout_EDX_01;
  }
  uVar1 = (**(code **)(**(int **)(local_8 + 0x1f8) + 0x2c))();
  iVar2 = *local_10 + local_10[2];
  if (SCARRY4(*local_10,local_10[2])) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar2 = extraout_EDX_02;
  }
  uVar3 = iVar2 - uVar1;
  if (SBORROW4(iVar2,uVar1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    uVar3 = extraout_EDX_03;
  }
  iVar2 = (int)uVar3 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar3 & 1) != 0);
  }
  iVar5 = iVar2 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(uVar1);
    iVar5 = extraout_EDX_04;
  }
  FUN_0041c8d0(local_c,iVar5,iVar4,piVar7);
  local_14 = (int *)(local_8 + 0x230);
  uVar3 = (uint)*(ushort *)(local_8 + 0x26c);
  uVar1 = *(ushort *)(local_8 + 0x878) - 1;
  if (SBORROW4((uint)*(ushort *)(local_8 + 0x878),1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
    uVar1 = extraout_EDX_05;
  }
  if (uVar3 == uVar1) {
    FUN_0041c318((int *)local_c[5],0x8000000d);
    FUN_0041bb48((int *)local_c[3],-0x7ffffff2,extraout_ECX);
  }
  else {
    FUN_0041c318((int *)local_c[5],*(undefined4 *)(local_8 + 0x60));
    FUN_0041bb48((int *)local_c[3],-0x7fffffee,extraout_ECX_00);
  }
  FUN_0041cb34(local_c,*local_14,local_14[1],local_14[3],local_14[2]);
  ppuVar6 = &local_24;
  uVar1 = *(ushort *)(local_8 + 0x878) - 1;
  if (SBORROW4((uint)*(ushort *)(local_8 + 0x878),1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    ppuVar6 = extraout_EDX_06;
  }
  FUN_00409bd8(uVar1,(int *)ppuVar6);
  FUN_00507b68(local_8,(int *)(local_8 + 0x230),local_24);
  local_18 = (int *)(local_8 + 0x240);
  if (*(short *)(local_8 + 0x26c) == *(short *)(local_8 + 0x878)) {
    FUN_0041c318((int *)local_c[5],0x8000000d);
    FUN_0041bb48((int *)local_c[3],-0x7ffffff2,extraout_ECX_01);
  }
  else {
    FUN_0041c318((int *)local_c[5],*(undefined4 *)(local_8 + 0x60));
    FUN_0041bb48((int *)local_c[3],-0x7fffffee,extraout_ECX_02);
  }
  FUN_0041cb34(local_c,*local_18,local_18[1],local_18[3],local_18[2]);
  FUN_00409bd8((uint)*(ushort *)(local_8 + 0x878),(int *)&local_28);
  FUN_00507b68(local_8,(int *)(local_8 + 0x240),local_28);
  local_1c = (int *)(local_8 + 0x250);
  uVar3 = (uint)*(ushort *)(local_8 + 0x26c);
  uVar1 = *(ushort *)(local_8 + 0x878) + 1;
  if (SCARRY4((uint)*(ushort *)(local_8 + 0x878),1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
    uVar1 = extraout_EDX_07;
  }
  if (uVar3 == uVar1) {
    FUN_0041c318((int *)local_c[5],0x8000000d);
    FUN_0041bb48((int *)local_c[3],-0x7ffffff2,extraout_ECX_03);
  }
  else {
    FUN_0041c318((int *)local_c[5],*(undefined4 *)(local_8 + 0x60));
    FUN_0041bb48((int *)local_c[3],-0x7fffffee,extraout_ECX_04);
  }
  FUN_0041cb34(local_c,*local_1c,local_1c[1],local_1c[3],local_1c[2]);
  ppuVar6 = &local_2c;
  uVar1 = *(ushort *)(local_8 + 0x878) + 1;
  if (SCARRY4((uint)*(ushort *)(local_8 + 0x878),1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    ppuVar6 = extraout_EDX_08;
  }
  FUN_00409bd8(uVar1,(int *)ppuVar6);
  FUN_00507b68(local_8,(int *)(local_8 + 0x250),local_2c);
  local_20 = (int *)(local_8 + 0x220);
  FUN_0041c318((int *)local_c[5],*(undefined4 *)(local_8 + 0x60));
  FUN_0041cb34(local_c,*local_20,local_20[1],local_20[3],local_20[2]);
  piVar7 = *(int **)(local_8 + 0x1fc);
  uVar1 = (**(code **)(**(int **)(local_8 + 0x1fc) + 0x2c))();
  iVar2 = local_20[1] + local_20[3];
  if (SCARRY4(local_20[1],local_20[3])) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar2 = extraout_EDX_09;
  }
  uVar3 = iVar2 - uVar1;
  if (SBORROW4(iVar2,uVar1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    uVar3 = extraout_EDX_10;
  }
  iVar2 = (int)uVar3 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar3 & 1) != 0);
  }
  iVar4 = iVar2 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(uVar1);
    iVar4 = extraout_EDX_11;
  }
  uVar1 = (**(code **)(**(int **)(local_8 + 0x1fc) + 0x2c))();
  iVar2 = *local_20 + local_20[2];
  if (SCARRY4(*local_20,local_20[2])) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar2 = extraout_EDX_12;
  }
  uVar3 = iVar2 - uVar1;
  if (SBORROW4(iVar2,uVar1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    uVar3 = extraout_EDX_13;
  }
  iVar2 = (int)uVar3 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar3 & 1) != 0);
  }
  iVar5 = iVar2 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(uVar1);
    iVar5 = extraout_EDX_14;
  }
  FUN_0041c8d0(local_c,iVar5,iVar4,piVar7);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00508065;
  puStack_34 = (undefined1 *)0x50805d;
  FUN_00403dd4((int *)&local_2c,3);
  return;
}

