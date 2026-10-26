/*
 * FUN_004bfedc at 004bfedc
 * undefined __register FUN_004bfedc(int * param_1, int * param_2)
 * Address ranges: 004bfedc-004c00dc;004c0126-004c0151;004c0159-004c01a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 9 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 9 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004bfedc(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  int local_158;
  LPCSTR local_154;
  OLECHAR local_150 [2];
  VARIANTARG local_14c;
  undefined4 local_13c;
  byte local_138 [244];
  undefined4 uStackY_44;
  undefined4 uStackY_40;
  VARIANTARG *pVVar8;
  int in_stack_ffffffc8;
  VARIANTARG *pVVar9;
  _union_2683 local_34;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  
  uStack_20 = &stack0xfffffffc;
  iVar7 = 0x2a;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_24 = &LAB_004c01a8;
  local_34._12_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (undefined1 *)((int)&local_34.n2.n3 + 4);
  puVar2 = &stack0xfffffffc;
  if (param_1[0x14] == 0) {
    local_34._8_4_ = 0x4bff1c;
    FUN_00402fe0(*param_1,local_138);
    local_34._8_4_ = 0x4bff2a;
    FUN_00403fd4((int *)&stack0xffffffc8,local_138);
    local_34._8_4_ = 0x4bff37;
    FUN_00404038((int *)&stack0xffffffc8,(undefined4 *)": No database open.");
    local_34._8_4_ = 0x4bff49;
    FUN_00403d94(in_stack_ffffffc8);
    puVar2 = uStack_20;
  }
  uStack_20 = puVar2;
  local_34._8_4_ = 0x4bff5a;
  iVar7 = FUN_00403224((int *)param_1[1],(int)&PTR_FUN_004bcac4);
  if (*(char *)(iVar7 + 0x2c) != '\0') {
    local_34._8_4_ = 0x4bff74;
    FUN_00403d94("Cannot delete because the database is opened readonly.");
  }
  uStack_20 = (undefined1 *)((uint)uStack_20 & 0xffffff);
  local_34._8_4_ = 0x4bff85;
  piVar5 = (int *)FUN_004949bc(param_2);
  local_34._8_4_ = 0x4bff90;
  cVar3 = (**(code **)(*piVar5 + 0x50))();
  if (cVar3 != '\0') {
    local_34._8_4_ = 0x4bffa8;
    FUN_00403d94("No primary key assigned; delete impossible.");
  }
  local_34._8_4_ = 0x4bffb3;
  FUN_00496550(piVar5,(VARIANT *)&local_34.n2);
  local_34.decVal.Hi32 = (ULONG)&LAB_004c0152;
  local_34._0_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_34._8_4_ = &stack0xfffffffc;
  iVar7 = FUN_00494858(param_2);
  piVar5 = (int *)(**(code **)(*param_1 + 0x54))(param_1,*(undefined4 *)(iVar7 + 0x34));
  iVar7 = FUN_00403224(piVar5,(int)&DAT_004bcb7c);
  if (*(char *)(iVar7 + 8) == '\0') {
    piVar5 = *(int **)(iVar7 + 4);
    *(undefined1 *)(iVar7 + 8) = 1;
  }
  else {
    uStackY_40 = 0x4c0009;
    pVVar8 = (VARIANTARG *)PTR_DAT_005725ac;
    pVVar9 = (VARIANTARG *)PTR_DAT_005725ac;
    iVar6 = FUN_00494858(param_2);
    uStackY_40 = 0x4c0017;
    FUN_004045b8((BSTR)&local_13c,*(LPCSTR *)(iVar6 + 0x3c));
    uStackY_40 = local_13c;
    uStackY_44 = 0x4c002e;
    FUN_004053dc(&local_14c,1);
    uVar1 = uStackY_40;
    uStackY_40 = 0x4c0040;
    piVar5 = (int *)FUN_004b9204(param_1[0x14],uVar1,&local_14c,pVVar8,pVVar9);
    uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
  }
  iVar6 = FUN_00494858(param_2);
  FUN_004c4da4(param_1,*(undefined4 **)(iVar6 + 0x3c));
  FUN_004045b8(local_150,local_154);
  FUN_004b9e84((int)piVar5);
  FUN_004bc4f4((int)piVar5,"=",&local_34);
  sVar4 = FUN_004ba054((int)piVar5);
  if (sVar4 != 0) {
    FUN_004038cc();
    *in_FS_OFFSET = local_34._12_4_;
    uStack_20 = &LAB_004c01af;
    puStack_24 = (undefined1 *)0x4c0176;
    FUN_00403dd4(&local_158,2);
    puStack_24 = (undefined1 *)0x4c0181;
    FUN_00404474((undefined4 *)local_150);
    puStack_24 = (undefined1 *)0x4c018c;
    FUN_00405bcc(&local_14c);
    puStack_24 = (undefined1 *)0x4c0197;
    FUN_00404474(&local_13c);
    puStack_24 = (undefined1 *)0x4c019f;
    FUN_00403db0((int *)&stack0xffffffc8);
    puStack_24 = (undefined1 *)0x4c01a7;
    FUN_00405bcc((VARIANTARG *)&local_34.n2);
    return;
  }
  uStackY_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_40;
  uStackY_44 = 0x4c00d3;
  FUN_004ba458((int)piVar5);
  *in_FS_OFFSET = uStackY_40;
  *in_FS_OFFSET = local_34._0_4_;
  local_34._8_4_ = 0x4c0159;
  if (uStack_20._3_1_ == '\0') {
    *(undefined1 *)(iVar7 + 8) = 0;
  }
  else {
    local_34.decVal.Hi32 = 0x4c0148;
    FUN_00403094(piVar5);
  }
  return;
}

