/*
 * FUN_004c02c0 at 004c02c0
 * undefined __register FUN_004c02c0(int * param_1, int * param_2)
 * Address ranges: 004c02c0-004c059a;004c05a2-004c0675
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 10 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 10 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004c02c0(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *unaff_EBX;
  int unaff_ESI;
  undefined4 *in_FS_OFFSET;
  VARIANT local_1c4;
  undefined4 *local_1b4;
  VARIANTARG local_1b0;
  VARIANT local_1a0;
  undefined4 *local_190;
  VARIANTARG local_18c;
  int local_17c;
  int local_178;
  VARIANTARG local_174;
  VARIANTARG *local_164;
  byte local_160 [256];
  int local_60;
  VARIANT local_5c;
  VARIANTARG *local_4c;
  VARIANTARG *pVVar8;
  VARIANTARG *pVVar9;
  VARIANTARG *pVVar10;
  undefined4 uStack_34;
  int *local_30;
  int *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *local_20;
  
  local_20 = (int *)&stack0xfffffffc;
  iVar7 = 0x38;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uStack_24 = &LAB_004c07af;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar4 = (int *)&stack0xfffffffc;
  if (param_1[0x14] == 0) {
    local_2c = (int *)0x4c0300;
    FUN_00402fe0(*param_1,local_160);
    local_2c = (int *)0x4c030e;
    FUN_00403fd4(&local_60,local_160);
    local_2c = (int *)0x4c031b;
    FUN_00404038(&local_60,(undefined4 *)": No database open.");
    local_2c = (int *)0x4c032d;
    FUN_00403d94(local_60);
    piVar4 = local_20;
  }
  local_20 = piVar4;
  local_2c = (int *)0x4c033e;
  iVar7 = FUN_00403224((int *)param_1[1],(int)&PTR_FUN_004bcac4);
  if (*(char *)(iVar7 + 0x2c) != '\0') {
    local_2c = (int *)0x4c0358;
    FUN_00403d94("Cannot insert because the database is opened readonly.");
  }
  uStack_24 = (undefined1 *)((uint)uStack_24 & 0xffffff);
  local_20 = (int *)0x0;
  local_30 = (int *)&LAB_004c070f;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *in_FS_OFFSET = &stack0xffffffc0;
  local_2c = (int *)&stack0xfffffffc;
  iVar7 = FUN_00494858(param_2);
  local_20 = (int *)(**(code **)(*param_1 + 0x54))(param_1,*(undefined4 *)(iVar7 + 0x34));
  iVar7 = FUN_00403224(local_20,(int)&DAT_004bcb7c);
  if (*(char *)(iVar7 + 8) == '\0') {
    iVar7 = FUN_00403224(local_20,(int)&DAT_004bcb7c);
    iVar7 = *(int *)(iVar7 + 4);
    iVar3 = FUN_00403224(local_20,(int)&DAT_004bcb7c);
    *(undefined1 *)(iVar3 + 8) = 1;
  }
  else {
    local_4c = (VARIANTARG *)0x4c03c4;
    pVVar8 = (VARIANTARG *)PTR_DAT_005725ac;
    pVVar9 = (VARIANTARG *)PTR_DAT_005725ac;
    iVar7 = FUN_00494858(param_2);
    local_4c = (VARIANTARG *)0x4c03d2;
    FUN_004045b8((BSTR)&local_164,*(LPCSTR *)(iVar7 + 0x3c));
    local_4c = local_164;
    local_5c.n1._12_4_ = 0x4c03e9;
    FUN_004053dc(&local_174,1);
    pVVar10 = local_4c;
    local_4c = (VARIANTARG *)0x4c03fb;
    iVar7 = FUN_004b9204(param_1[0x14],pVVar10,&local_174,pVVar8,pVVar9);
    uStack_24 = (undefined1 *)CONCAT13(1,(undefined3)uStack_24);
  }
  FUN_004ba2f8(iVar7);
  iVar3 = FUN_00494858(param_2);
  bVar1 = FUN_00491e60(iVar3,(byte *)&local_4c);
  if (bVar1) {
    do {
      piVar4 = (int *)FUN_00494858(param_2);
      uVar5 = FUN_004917c4(piVar4,(byte *)&local_4c);
      if ((char)uVar5 != '\0') {
        local_4c = (VARIANTARG *)0x4c0477;
        FUN_00494e38(param_2,(byte *)&local_4c,'\0',(undefined4 *)&stack0xffffffec,
                     (undefined4 *)&stack0xffffffe8);
        if ((*(byte *)(unaff_ESI + 0x18) & 8) == 0) {
          if (unaff_EBX == (int *)0x0) {
            local_4c = (VARIANTARG *)0x4c049a;
            FUN_00402fe0(*param_1,local_160);
            local_4c = (VARIANTARG *)0x4c04ab;
            FUN_00403fd4(&local_178,local_160);
            local_4c = (VARIANTARG *)0x4c04bb;
            FUN_00404038(&local_178,
                         (undefined4 *)
                         ".DoInsertAppObj: Cannot insert object with unallocated native props");
            local_4c = (VARIANTARG *)0x4c04d0;
            FUN_00403d94(local_178);
          }
          local_4c = (VARIANTARG *)0x4c04d8;
          cVar2 = (**(code **)(*unaff_EBX + 0x4c))();
          if (cVar2 == '\0') {
            local_4c = (VARIANTARG *)0x4c04ec;
            FUN_00402fe0(*param_1,local_160);
            local_4c = (VARIANTARG *)0x4c04fd;
            FUN_00403fd4(&local_17c,local_160);
            local_4c = (VARIANTARG *)0x4c050d;
            FUN_00404038(&local_17c,
                         (undefined4 *)
                         ".DoInsertAppObj: Cannot insert object with uninitialized native props");
            local_4c = (VARIANTARG *)0x4c0522;
            FUN_00403d94(local_17c);
          }
          local_4c = (VARIANTARG *)0x4c052a;
          piVar4 = (int *)FUN_00494858(param_2);
          local_4c = (VARIANTARG *)0x4c0538;
          FUN_0049145c(piVar4,(byte *)&local_4c,(int *)&local_190);
          local_4c = (VARIANTARG *)0x4c0549;
          FUN_004054ac(&local_18c,local_190);
          local_4c = &local_18c;
          local_5c.n1._12_4_ = 0x4c0558;
          iVar7 = FUN_004ba1d8(iVar7);
          pVVar10 = local_4c;
          local_4c = (VARIANTARG *)0x4c055e;
          local_2c = (int *)FUN_004bb34c(iVar7,pVVar10);
          local_5c.n1._12_4_ = &LAB_004c059b;
          local_5c.n1._8_4_ = *in_FS_OFFSET;
          *in_FS_OFFSET = (undefined1 *)((int)&local_5c.n1 + 8);
          local_5c.n1.decVal.Hi32 = 0x4c057a;
          local_4c = (VARIANTARG *)&stack0xfffffffc;
          FUN_00496550(unaff_EBX,&local_5c);
          local_5c.n1.decVal.Hi32 = 0x4c0585;
          FUN_004baf6c((int)local_2c,&local_5c);
          *in_FS_OFFSET = local_5c.n1._8_4_;
          local_4c = (VARIANTARG *)0x4c05a2;
          local_5c.n1._12_4_ = 0x4c059a;
          FUN_00403094(local_2c);
          return;
        }
      }
      iVar3 = FUN_00494858(param_2);
      cVar2 = FUN_00491eac(iVar3,(byte *)&local_4c);
    } while (cVar2 != '\0');
  }
  FUN_004bac24(iVar7);
  FUN_004b9f38(iVar7,&local_1a0);
  FUN_004b9cc8(iVar7,(undefined2 *)&local_1a0);
  piVar4 = (int *)FUN_004949bc(param_2);
  iVar3 = FUN_00494954(param_2);
  iVar6 = FUN_00494858(param_2);
  FUN_00491818(iVar6,iVar3,(int *)&local_1b4);
  FUN_004054ac(&local_1b0,local_1b4);
  pVVar10 = &local_1b0;
  iVar7 = FUN_004ba1d8(iVar7);
  local_30 = (int *)FUN_004bb34c(iVar7,pVVar10);
  local_4c = (VARIANTARG *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_4c;
  local_5c.n1._12_4_ = 0x4c0652;
  FUN_004bae4c((int)local_30,&local_1c4);
  local_5c.n1._12_4_ = 0x4c0660;
  FUN_004964d0(piVar4,(undefined4 *)&local_1c4);
  *in_FS_OFFSET = local_4c;
  FUN_00403094(local_30);
  return;
}

