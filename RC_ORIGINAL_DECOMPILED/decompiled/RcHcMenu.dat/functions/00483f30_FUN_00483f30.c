/*
 * FUN_00483f30 at 00483f30
 * undefined __register FUN_00483f30(int param_1)
 * Address ranges: 00483f30-00484125
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483f30(int param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *in_FS_OFFSET;
  int iStack_6a0;
  undefined1 *puStack_69c;
  undefined1 *puStack_698;
  ushort local_55f;
  ushort local_555;
  ushort local_4db;
  short local_4d9;
  short local_4d3;
  int local_18;
  int local_10;
  uint local_c;
  int local_8;
  
  puStack_698 = &stack0xfffffffc;
  local_10 = 0;
  puStack_69c = &LAB_00484149;
  iStack_6a0 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_6a0;
  thunk_FUN_00479cbe(*(undefined4 *)(param_1 + 0x168));
  local_18 = 0;
  uVar6 = extraout_ECX;
  if ((*(char *)(*(int *)(param_1 + 0x2c) + 0x3c) != '\0') &&
     (bVar2 = FUN_0047fc9c(*(undefined4 *)(param_1 + 0x168),0x4050004,0xffffffff),
     uVar6 = extraout_ECX_00, bVar2)) {
    thunk_FUN_00479cbe(*(undefined4 *)(param_1 + 0x168));
    local_18 = (uint)local_55f - (uint)local_55f;
    uVar6 = extraout_ECX_01;
  }
  uVar9 = (uint)local_55f;
  piVar3 = (int *)FUN_00403064((int *)&DAT_00410838,'\x01',uVar6);
  *in_FS_OFFSET = (int)&stack0xfffff944;
  iVar4 = FUN_0047fc6c(*(undefined4 *)(param_1 + 0x168),0x5000f);
  if (iVar4 < 1) {
    FUN_004128e8((int)piVar3,uVar9 + 1);
  }
  else {
    FUN_004128e8((int)piVar3,iVar4 + 1);
  }
  uVar7 = (uint)local_555;
  if (uVar7 != 0) {
    local_8 = 1;
    do {
      thunk_FUN_00478f5f(*(undefined4 *)(param_1 + 0x168));
      if ((local_4d9 != 0) && (local_4d3 == 0)) {
        FUN_0041298c((int)piVar3,(uint)local_4db,'\x01');
      }
      local_8 = local_8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_00406454(&local_10,(int)&DAT_0047d6a0,1);
  iVar4 = *(int *)(param_1 + 0x168);
  thunk_FUN_00479cb8(iVar4);
  local_c = *(uint *)(param_1 + 0x88);
  local_8 = local_c - 1;
  FUN_00412f38(*(int **)(param_1 + 0x2c));
  while (local_8 < (int)uVar9) {
    iVar4 = *(int *)(param_1 + 0x2c);
    FUN_00484a34(param_1,local_10,&local_8,iVar4,(int)piVar3,&local_c);
  }
  if ((*(char *)(*(int *)(param_1 + 0x2c) + 0x3c) != '\0') &&
     (FUN_0047fc9c(*(undefined4 *)(param_1 + 0x168),0x4050004,0), 0 < local_18)) {
    local_18 = uVar9 - local_18;
    if (local_18 <= (int)(uVar9 - 1)) {
      iVar8 = ((uVar9 - 1) - local_18) + 1;
      local_8 = local_18;
      do {
        iVar5 = FUN_00467ef4(*(int *)(param_1 + 0x2c),local_8);
        bVar1 = *(byte *)(iVar5 + 0x22);
        iVar5 = FUN_00467ef4(*(int *)(param_1 + 0x2c),local_8);
        FUN_004677fc(iVar5,bVar1 | 1);
        local_8 = local_8 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  *in_FS_OFFSET = iVar4;
  FUN_00403094(piVar3);
  return;
}

