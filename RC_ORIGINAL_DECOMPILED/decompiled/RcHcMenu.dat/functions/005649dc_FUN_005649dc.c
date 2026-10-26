/*
 * FUN_005649dc at 005649dc
 * undefined __register FUN_005649dc(undefined4 param_1)
 * Address ranges: 005649dc-00564afa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005649dc(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 uStack_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  uStack_10 = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_1c = 0;
  puStack_24 = &LAB_00564afb;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,(undefined4 *)"ShowLeader",0);
  FUN_0040a014(*(undefined **)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x18),(int *)&local_14);
  FUN_0040407c((int *)&local_c,*(undefined4 **)(*(int *)PTR_DAT_00572108 + 0x110),local_14);
  uVar3 = FUN_00409dd0((undefined *)local_c);
  cVar1 = (char)uVar3;
  uStack_10._3_1_ = cVar1;
  if (cVar1 == '\0') {
    FUN_0040407c(&local_18,(undefined4 *)"intro not found : ",local_c);
    iVar5 = local_18;
    iVar4 = FUN_004a418c();
    FUN_004a4bf4(iVar4,iVar5);
    iVar5 = FUN_004a418c();
    FUN_004a4bf4(iVar5,0x564b44);
    FUN_005650c4(local_8,*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x18),(int *)&local_c
                );
    uStack_10._3_1_ = local_c != (undefined4 *)0x0;
  }
  if (uStack_10._3_1_ == '\0') {
    FUN_0040407c(&local_1c,(undefined4 *)"final search: intro not found : ",local_c);
    iVar5 = local_1c;
    iVar4 = FUN_004a418c();
    FUN_004a4bf4(iVar4,iVar5);
  }
  else {
    FUN_0056405c(local_c);
  }
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00564b02;
  puStack_24 = (undefined1 *)0x564af2;
  FUN_00403dd4(&local_1c,3);
  puStack_24 = (undefined1 *)0x564afa;
  FUN_00403db0((int *)&local_c);
  return;
}

