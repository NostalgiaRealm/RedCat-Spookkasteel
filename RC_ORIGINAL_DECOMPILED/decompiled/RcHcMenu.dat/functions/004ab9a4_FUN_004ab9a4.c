/*
 * FUN_004ab9a4 at 004ab9a4
 * undefined __register FUN_004ab9a4(int * param_1)
 * Address ranges: 004ab9a4-004abb82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ab9a4(int *param_1)

{
  char cVar1;
  HPALETTE pHVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  int local_34 [2];
  RECT local_2c;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    FUN_00403d94("CreateDisabledMask: The source bitmap must be transparent");
  }
  local_10 = (**(code **)(*local_8 + 0x2c))();
  local_14 = (**(code **)(*local_8 + 0x20))();
  uStack_4c = 0x4ab9fa;
  FUN_00411624(0,0,local_10,&local_2c.left,local_14);
  local_18 = (int *)0x0;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_50 = (undefined1 *)0x4aba19;
  local_18 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX);
  puStack_50 = (undefined1 *)0x4aba27;
  (**(code **)(*local_18 + 0x40))(local_18,local_10);
  puStack_50 = (undefined1 *)0x4aba32;
  (**(code **)(*local_18 + 0x34))(local_18,local_14);
  puStack_50 = (undefined1 *)0x4aba3a;
  pHVar2 = (HPALETTE)(**(code **)(*local_8 + 0x24))();
  puStack_50 = (undefined1 *)0x4aba3f;
  pHVar2 = FUN_00420cb4(pHVar2);
  puStack_50 = (undefined1 *)0x4aba49;
  (**(code **)(*local_18 + 0x38))(local_18,pHVar2);
  local_1c = (int *)0x0;
  puStack_54 = &LAB_004abb83;
  puStack_58 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_58;
  puStack_50 = &stack0xfffffffc;
  local_1c = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_00);
  (**(code **)(*local_1c + 8))(local_1c,local_8);
  (**(code **)(*local_1c + 0x68))(local_1c,1);
  iVar3 = FUN_00421490(local_1c);
  FUN_0041c318(*(int **)(iVar3 + 0x14),0);
  (**(code **)(*local_1c + 0x40))(local_1c,local_10);
  uVar4 = FUN_00421544((int)local_1c);
  if ((char)uVar4 != '\0') {
    iVar3 = FUN_00421490(local_1c);
    FUN_0041bb48(*(int **)(iVar3 + 0xc),0xffffff,extraout_ECX_01);
    FUN_00422254(local_1c,0);
    iVar3 = FUN_00421490(local_1c);
    FUN_0041c318(*(int **)(iVar3 + 0x14),0xffffff);
  }
  FUN_00422254(local_1c,1);
  (**(code **)(*local_18 + 0x3c))(local_18,1);
  uVar5 = FUN_00421574(local_8);
  iVar3 = FUN_00421490(local_18);
  FUN_0041c318(*(int **)(iVar3 + 0x14),uVar5);
  piVar6 = (int *)FUN_00421490(local_18);
  FUN_0041c9f8(piVar6,&local_2c);
  uVar4 = 0xffffff;
  FUN_0041160c(1,1,local_34);
  piVar6 = local_34;
  piVar7 = (int *)FUN_00421490(local_18);
  FUN_004ab83c(piVar7,piVar6,local_1c,uVar4);
  uVar4 = 0x808080;
  FUN_0041160c(0,0,local_34);
  piVar6 = (int *)FUN_00421490(local_18);
  FUN_004ab83c(piVar6,local_34,local_1c,uVar4);
  *in_FS_OFFSET = uVar4;
  puStack_58 = &LAB_004abb8a;
  FUN_00403094(local_1c);
  return;
}

