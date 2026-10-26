/*
 * FUN_0043ee54 at 0043ee54
 * undefined __register FUN_0043ee54(int * param_1, HIMAGELIST param_2)
 * Address ranges: 0043ee54-0043efa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043ee54(int *param_1,HIMAGELIST param_2)

{
  int iVar1;
  int *piVar2;
  HDC pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int i;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  UINT UVar6;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  RECT local_24;
  int *local_14;
  int *local_10;
  HIMAGELIST local_c;
  int *local_8;
  
  uStack_3c = 0x43ee7d;
  local_c = param_2;
  local_8 = param_1;
  FUN_00411624(0,0,param_1[10],&local_24.left,param_1[9]);
  FUN_0043f8c4((int)local_8);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x43ee9f;
  local_10 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX);
  puStack_44 = &LAB_0043efbf;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x43eebe;
  puStack_40 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
  puStack_4c = (undefined1 *)0x43eecc;
  (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
  puStack_4c = (undefined1 *)0x43eed8;
  local_14 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_00);
  puStack_50 = &LAB_0043efa2;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  FUN_00422254(local_14,1);
  (**(code **)(*local_14 + 0x34))(local_14,local_8[9]);
  (**(code **)(*local_14 + 0x40))(local_14,local_8[10]);
  iVar1 = ImageList_GetImageCount(local_c);
  if (-1 < iVar1 + -1) {
    i = 0;
    do {
      piVar2 = (int *)FUN_00421490(local_10);
      FUN_0041c9f8(piVar2,&local_24);
      UVar6 = 0;
      iVar5 = 0;
      iVar4 = 0;
      pHVar3 = (HDC)FUN_0041cf6c(piVar2);
      ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
      piVar2 = (int *)FUN_00421490(local_14);
      FUN_0041c9f8(piVar2,&local_24);
      UVar6 = 0x10;
      iVar5 = 0;
      iVar4 = 0;
      pHVar3 = (HDC)FUN_0041cf6c(piVar2);
      ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
      FUN_0043e6bc(local_8,local_10,local_14);
      i = i + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_0043efa9;
  puStack_50 = (undefined1 *)0x43efa1;
  FUN_00403094(local_14);
  return;
}

