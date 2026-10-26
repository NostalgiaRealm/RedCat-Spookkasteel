/*
 * FUN_0043e910 at 0043e910
 * undefined __register FUN_0043e910(int * param_1, int param_2, int * param_3, int param_4)
 * Address ranges: 0043e910-0043ea9a;0043eadf-0043eb26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e910(int *param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  HDC pHVar3;
  HIMAGELIST p_Var4;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  BOOL BVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined4 *in_FS_OFFSET;
  int iVar8;
  int iVar9;
  int iVar10;
  UINT UVar11;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  puStack_2c = &LAB_0043eb27;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x43e93d;
  local_8 = param_1;
  bVar1 = FUN_0043e3b4((int)param_1);
  uVar6 = extraout_ECX;
  uVar7 = extraout_EDX;
  if (bVar1) {
    puStack_34 = (undefined1 *)0x43e94f;
    FUN_0043f17c((int)local_8,param_3);
    puStack_34 = (undefined1 *)0x43e95c;
    local_c = FUN_0043e788(local_8,param_3,param_4);
    if (local_c != -1) {
      puStack_38 = &LAB_0043ead8;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_40 = (undefined1 *)0x43e983;
      puStack_34 = &stack0xfffffffc;
      local_10 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_00);
      puStack_44 = &LAB_0043eab8;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_48;
      puStack_4c = (undefined1 *)0x43e9a2;
      puStack_40 = &stack0xfffffffc;
      (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
      puStack_4c = (undefined1 *)0x43e9b0;
      (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
      puStack_4c = (undefined1 *)0x43e9bc;
      local_14 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_01);
      puStack_50 = &LAB_0043ea9b;
      uStack_54 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_54;
      puStack_4c = &stack0xfffffffc;
      FUN_00422254(local_14,1);
      (**(code **)(*local_14 + 0x34))(local_14,local_8[9]);
      (**(code **)(*local_14 + 0x40))(local_14,local_8[10]);
      UVar11 = 0;
      iVar10 = 0;
      iVar9 = 0;
      piVar2 = (int *)FUN_00421490(local_10);
      pHVar3 = (HDC)FUN_0041cf6c(piVar2);
      iVar8 = local_c;
      p_Var4 = (HIMAGELIST)FUN_0043e588(local_8);
      ImageList_Draw(p_Var4,iVar8,pHVar3,iVar9,iVar10,UVar11);
      UVar11 = 0x10;
      iVar10 = 0;
      iVar9 = 0;
      piVar2 = (int *)FUN_00421490(local_14);
      pHVar3 = (HDC)FUN_0041cf6c(piVar2);
      iVar8 = local_c;
      p_Var4 = (HIMAGELIST)FUN_0043e588(local_8);
      ImageList_Draw(p_Var4,iVar8,pHVar3,iVar9,iVar10,UVar11);
      hbmMask = (HBITMAP)(**(code **)(*local_14 + 0x60))();
      hbmImage = (HBITMAP)(**(code **)(*local_10 + 0x60))();
      p_Var4 = (HIMAGELIST)FUN_0043e588(local_8);
      BVar5 = ImageList_Replace(p_Var4,param_2,hbmImage,hbmMask);
      if (BVar5 == 0) {
        FUN_00406a48((undefined4 *)PTR_PTR_0057212c,(int *)&local_18);
        piVar2 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_18);
        FUN_0040382c(piVar2);
      }
      *in_FS_OFFSET = uStack_54;
      puStack_4c = &LAB_0043eaa2;
      puStack_50 = (undefined1 *)0x43ea9a;
      FUN_00403094(local_14);
      return;
    }
    puStack_34 = (undefined1 *)0x43eaec;
    FUN_00406a48((undefined4 *)PTR_PTR_0057212c,(int *)&local_1c);
    puStack_34 = (undefined1 *)0x43eafb;
    piVar2 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_1c);
    puStack_34 = (undefined1 *)0x43eb00;
    FUN_0040382c(piVar2);
    uVar6 = extraout_ECX_02;
    uVar7 = extraout_EDX_00;
  }
  puStack_34 = (undefined1 *)0x43eb0c;
  FUN_00403270(local_8,uVar7,uVar6);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0043eb2e;
  puStack_2c = (undefined1 *)0x43eb26;
  FUN_00403dd4((int *)&local_1c,2);
  return;
}

