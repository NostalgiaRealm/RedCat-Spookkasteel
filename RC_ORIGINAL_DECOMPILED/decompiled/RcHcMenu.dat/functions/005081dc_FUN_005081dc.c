/*
 * FUN_005081dc at 005081dc
 * undefined __register FUN_005081dc(uint param_1)
 * Address ranges: 005081dc-0050847f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005081dc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint extraout_ECX_03;
  int extraout_ECX_04;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined *puVar5;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  puStack_18 = &LAB_00508480;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  FUN_0041c318(*(int **)(*(int *)(param_1 + 0x1f0) + 0x14),*(undefined4 *)(param_1 + 0x60));
  FUN_0041c034(*(int **)(*(int *)(local_8 + 0x1f0) + 0x10),0xffffff);
  FUN_0041c140(*(int **)(*(int *)(local_8 + 0x1f0) + 0x10),1);
  FUN_0041c110(*(int **)(*(int *)(local_8 + 0x1f0) + 0x10),0);
  FUN_0041cad0(*(int **)(local_8 + 0x1f0),*(int *)(local_8 + 0x200),*(int *)(local_8 + 0x20c));
  FUN_0041ca70(*(int **)(local_8 + 0x1f0),*(int *)(local_8 + 0x200),*(int *)(local_8 + 0x204));
  FUN_0041ca70(*(int **)(local_8 + 0x1f0),*(int *)(local_8 + 0x208),*(int *)(local_8 + 0x204));
  FUN_0041c034(*(int **)(*(int *)(local_8 + 0x1f0) + 0x10),0x80000010);
  FUN_0041ca70(*(int **)(local_8 + 0x1f0),*(int *)(local_8 + 0x208),*(int *)(local_8 + 0x20c));
  FUN_0041ca70(*(int **)(local_8 + 0x1f0),*(int *)(local_8 + 0x200),*(int *)(local_8 + 0x20c));
  FUN_0041bb48(*(int **)(*(int *)(local_8 + 0x1f0) + 0xc),-0x7fffffee,extraout_ECX);
  FUN_0041c034(*(int **)(*(int *)(local_8 + 0x1f0) + 0x10),0xff);
  FUN_0041c140(*(int **)(*(int *)(local_8 + 0x1f0) + 0x10),2);
  uVar1 = *(int *)(local_8 + 0x200) + *(int *)(local_8 + 0x20c);
  if (SCARRY4(*(int *)(local_8 + 0x200),*(int *)(local_8 + 0x20c))) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar2 = uVar1 - *(int *)(local_8 + 0x204);
  if (SBORROW4(uVar1,*(int *)(local_8 + 0x204))) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar1 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar2 = *(int *)(local_8 + 0x20c) - 2;
  if (SBORROW4(*(int *)(local_8 + 0x20c),2)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  iVar3 = *(int *)(local_8 + 0x204) + 3;
  if (SCARRY4(*(int *)(local_8 + 0x204),3)) {
    thunk_FUN_00402874(local_8);
    iVar3 = extraout_ECX_00;
  }
  iVar4 = *(int *)(local_8 + 0x200) + 4;
  if (SCARRY4(*(int *)(local_8 + 0x200),4)) {
    thunk_FUN_00402874(local_8);
    iVar3 = extraout_ECX_01;
    iVar4 = extraout_EDX;
  }
  FUN_0041c9b0(*(int **)(local_8 + 0x1f0),iVar4,iVar3,uVar2,uVar1);
  FUN_0041c034(*(int **)(*(int *)(local_8 + 0x1f0) + 0x10),0xffffff);
  FUN_0041c140(*(int **)(*(int *)(local_8 + 0x1f0) + 0x10),1);
  FUN_00406a48(&PTR_DAT_00507828,(int *)&local_c);
  puVar5 = local_c;
  FUN_00406a48(&PTR_DAT_00507828,(int *)&local_10);
  uVar1 = FUN_0041cdc4(*(int **)(local_8 + 0x1f0),local_10);
  iVar3 = *(int *)(local_8 + 0x204) + *(int *)(local_8 + 0x20c);
  if (SCARRY4(*(int *)(local_8 + 0x204),*(int *)(local_8 + 0x20c))) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar3 = extraout_ECX_02;
  }
  uVar2 = iVar3 - uVar1;
  if (SBORROW4(iVar3,uVar1)) {
    thunk_FUN_00402874(uVar1);
    uVar2 = extraout_ECX_03;
  }
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  iVar4 = *(int *)(local_8 + 0x200) + 0x1e;
  if (SCARRY4(*(int *)(local_8 + 0x200),0x1e)) {
    thunk_FUN_00402874(local_8);
    iVar3 = extraout_ECX_04;
    iVar4 = extraout_EDX_00;
  }
  FUN_0041cc34(*(int **)(local_8 + 0x1f0),iVar4,iVar3,puVar5);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00508487;
  puStack_18 = (undefined1 *)0x50847f;
  FUN_00403dd4((int *)&local_10,2);
  return;
}

