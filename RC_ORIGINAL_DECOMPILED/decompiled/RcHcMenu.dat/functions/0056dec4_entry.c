/*
 * entry at 0056dec4
 * undefined __register entry(void)
 * Address ranges: 0056dec4-0056e0d0;0056e105-0056e11f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void entry(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX_01;
  undefined4 *unaff_ESI;
  undefined *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined4 *local_28;
  undefined *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  iVar3 = 6;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_1c = (undefined4 *)0x56dee0;
  FUN_00407994(&DAT_0056d5d4);
  local_20 = (undefined4 *)&LAB_0056e120;
  local_24 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined4 *)0x56defa;
  local_1c = (undefined4 *)&stack0xfffffffc;
  FUN_004512f4();
  local_28 = (undefined4 *)0x56df09;
  FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&stack0xffffffe8);
  local_28 = (undefined4 *)0x56df14;
  FUN_00409f84(unaff_EDI,(int *)&stack0xffffffec);
  local_28 = (undefined4 *)0x56df26;
  FUN_0040407c((int *)PTR_DAT_00572240,unaff_ESI,(undefined4 *)"\\MenuTrac.log");
  local_28 = (undefined4 *)0x56df2b;
  FUN_0056d460();
  local_28 = (undefined4 *)0x56df35;
  cVar2 = FUN_004b0610((byte *)"/FIRSTTIME");
  if (cVar2 == '\0') {
    local_28 = (undefined4 *)0x56df66;
    cVar2 = FUN_004b0610((byte *)"/DEFAULT");
    if (cVar2 == '\0') {
      local_28 = (undefined4 *)0x56df77;
      FUN_004570ec(*(uint **)(PTR_DAT_00572404 + 0x44));
      local_28 = (undefined4 *)0x56df83;
      FUN_00451440();
      *in_FS_OFFSET = local_24;
      local_1c = (undefined4 *)&DAT_0056e127;
      local_20 = (undefined4 *)0x56e11f;
      FUN_00403dd4((int *)&local_34,9);
      return;
    }
  }
  else {
    local_28 = (undefined4 *)0x56df3e;
    iVar3 = FUN_004a418c();
    local_28 = (undefined4 *)0x56df43;
    FUN_004a4a44(iVar3);
    local_28 = (undefined4 *)0x56df4b;
    FUN_004b03dc((int *)&local_1c);
    local_28 = local_1c;
    local_2c = (undefined1 *)0x56df54;
    iVar3 = FUN_004a418c();
    puVar1 = local_28;
    local_28 = (undefined4 *)0x56df5a;
    FUN_004a4bf4(iVar3,(int)puVar1);
  }
  local_28 = (undefined4 *)0x56df8d;
  cVar2 = FUN_0056d494();
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (cVar2 == '\0') {
    local_28 = (undefined4 *)0x56df96;
    FUN_004b06c0();
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  local_2c = &LAB_0056e0e2;
  local_30 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_38 = &LAB_0056e0d1;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_34 = &stack0xfffffffc;
  local_28 = (undefined4 *)&stack0xfffffffc;
  FUN_00497450(0,uVar5,uVar4);
  FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_24);
  FUN_00409f84(local_24,(int *)&local_20);
  FUN_00404038((int *)&local_20,(undefined4 *)"Agent\\RedCat.ghc");
  FUN_0054bd44(local_20);
  FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_2c);
  FUN_00409f84(local_2c,(int *)&local_28);
  FUN_00404038((int *)&local_28,(undefined4 *)"Agent\\RedCat.adb");
  puVar1 = local_28;
  iVar3 = FUN_0054c258();
  FUN_0054d24c(iVar3,puVar1);
  FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_34);
  FUN_00409f84(local_34,(int *)&local_30);
  FUN_00404038((int *)&local_30,(undefined4 *)"Agent\\RedCat.HLP");
  puVar1 = local_30;
  iVar3 = FUN_0054c258();
  FUN_0054d22c(iVar3,puVar1);
  FUN_0056cdec(&DAT_0056ca40);
  FUN_0045130c(*(int *)PTR_DAT_005723fc,(int)&PTR_FUN_0056449c,(undefined4 *)PTR_DAT_005722d0);
  FUN_0045130c(*(int *)PTR_DAT_005723fc,(int)&PTR_FUN_00567c30,(undefined4 *)PTR_DAT_00572108);
  FUN_0045130c(*(int *)PTR_DAT_005723fc,(int)&LAB_0055476c,(undefined4 *)PTR_DAT_005725d4);
  FUN_0044aa98(*(int **)PTR_DAT_005722d0,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1),
               extraout_ECX_01);
  FUN_0045138c(*(int *)PTR_DAT_005723fc);
  *in_FS_OFFSET = uStack_3c;
  local_34 = &DAT_0056e0d8;
  puStack_38 = (undefined1 *)0x56e0d0;
  FUN_004b05f4();
  return;
}

