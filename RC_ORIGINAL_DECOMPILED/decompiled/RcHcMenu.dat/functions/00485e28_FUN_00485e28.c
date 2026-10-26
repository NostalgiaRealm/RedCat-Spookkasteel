/*
 * FUN_00485e28 at 00485e28
 * undefined __register FUN_00485e28(int param_1, undefined4 * param_2, VARIANTARG * param_3, undefined4 param_4, byte param_5)
 * Address ranges: 00485e28-00485f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485e28(int param_1,undefined4 *param_2,VARIANTARG *param_3,undefined4 param_4,
                 byte param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  VARIANTARG *extraout_ECX;
  VARIANTARG *extraout_ECX_00;
  VARIANTARG *extraout_ECX_01;
  VARIANTARG *pVVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar7;
  int unaff_ESI;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  _union_2683 *p_Var9;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int local_30;
  _union_2683 local_2c;
  int local_1c;
  int *local_18;
  VARIANTARG *local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_2c._0_4_ = 0;
  local_2c.decVal.Hi32 = 0;
  local_2c._8_4_ = 0;
  local_2c._12_4_ = 0;
  puStack_44 = &LAB_00485fa7;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  if ((param_5 & 1) == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_18 = FUN_00475a74((int *)&DAT_00474b58,'\x01',param_1,(int *)&DAT_0057149c,0,
                          (undefined4 *)0x0,0,uVar1);
  uVar6 = 0;
  *in_FS_OFFSET = &stack0xffffffac;
  iVar8 = local_c[2];
  if (iVar8 == 1) {
    pVVar5 = local_10;
    piVar2 = (int *)FUN_00412384(local_c,0);
    unaff_ESI = FUN_00475cbc((int)local_18,piVar2,3,pVVar5);
    local_1c = unaff_ESI;
  }
  else if (-1 < iVar8 + -1) {
    iVar7 = 0;
    pVVar5 = extraout_ECX;
    do {
      FUN_00405e00(&local_2c,uVar6,pVVar5,(VARIANTARG *)&local_2c,(ushort *)local_10,1);
      p_Var9 = &local_2c;
      piVar2 = (int *)FUN_00412384(local_c,iVar7);
      unaff_ESI = FUN_00475cbc((int)local_18,piVar2,3,(VARIANTARG *)&p_Var9->n2);
      pVVar5 = extraout_ECX_00;
      uVar6 = extraout_EDX;
      iVar3 = unaff_ESI;
      if (iVar7 != 0) {
        iVar3 = FUN_00475d68((int)local_18,'\x02',10,unaff_ESI,local_1c,
                             (VARIANTARG *)PTR_DAT_00572140);
        pVVar5 = extraout_ECX_01;
        uVar6 = extraout_EDX_00;
      }
      local_1c = iVar3;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((param_5 & 2) != 0) {
    *(undefined1 *)(unaff_ESI + 5) = 1;
  }
  FUN_00475c34((int)local_18,local_1c,&local_30);
  uVar6 = *(undefined4 *)(local_8 + 0x168);
  uVar4 = thunk_FUN_00479465(uVar6);
  FUN_0047fe48(uVar4);
  *in_FS_OFFSET = uVar6;
  FUN_00403094(local_18);
  return;
}

