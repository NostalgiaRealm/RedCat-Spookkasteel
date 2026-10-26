/*
 * FUN_004c090c at 004c090c
 * undefined __register FUN_004c090c(int * param_1, int * param_2)
 * Address ranges: 004c090c-004c0cf4;004c0df7-004c0e04;004c0e61-004c0e85;004c0e8d-004c0f2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004c0b54) */

void FUN_004c090c(int *param_1,int *param_2)

{
  VARIANTARG *pVVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  short sVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *unaff_EDI;
  int *in_FS_OFFSET;
  int local_1fc [11];
  int local_1d0;
  VARIANT local_1cc;
  undefined4 *local_1bc;
  VARIANTARG local_1b8;
  undefined1 *local_1a8;
  int local_1a4;
  ULONG local_1a0;
  int local_19c;
  LPCSTR local_198;
  OLECHAR local_194 [2];
  VARIANTARG local_190;
  ULONG local_180;
  int local_17c;
  int local_178;
  byte local_174 [232];
  undefined4 uStackY_8c;
  int iStackY_88;
  undefined1 *puStackY_84;
  VARIANTARG *pVStackY_80;
  char *pcStackY_7c;
  char *pcStackY_78;
  undefined1 *local_74;
  char *local_70;
  char *local_6c [2];
  undefined4 uVar11;
  int iStack_5c;
  undefined1 *local_58;
  undefined1 *puStack_54;
  int iStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  char *pcStack_44;
  char *pcStack_40;
  undefined1 *puStack_3c;
  int *local_38;
  char *local_34;
  undefined4 uStack_30;
  int local_2c;
  int *local_28;
  undefined1 *local_24;
  
  local_24 = &stack0xfffffffc;
  iVar10 = 0x3e;
  do {
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  LOCK();
  UNLOCK();
  local_28 = (int *)&LAB_004c0f2d;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  puVar3 = &stack0xfffffffc;
  if (param_1[0x14] == 0) {
    uStack_30 = (undefined1 *)0x4c0953;
    FUN_00402fe0(*param_1,local_174);
    uStack_30 = (undefined1 *)0x4c0961;
    FUN_00403fd4((int *)&local_74,local_174);
    uStack_30 = local_74;
    local_34 = ".LoadAppObjViaTable: ";
    local_38 = (int *)0x4c0f6c;
    puStack_3c = (undefined1 *)0x4c097b;
    FUN_004040f0((int *)&local_70,3);
    puStack_3c = (undefined1 *)0x4c098d;
    FUN_00403d94(local_70);
    puVar3 = local_24;
  }
  local_24 = puVar3;
  puStack_3c = (undefined1 *)0x4c0995;
  piVar6 = (int *)FUN_004949bc(param_2);
  puStack_3c = (undefined1 *)0x4c099a;
  cVar4 = (**(code **)(*piVar6 + 0x4c))();
  if (cVar4 != '\0') {
    puStack_3c = (undefined1 *)0x4c09a6;
    piVar6 = (int *)FUN_004949bc(param_2);
    puStack_3c = (undefined1 *)0x4c09ab;
    cVar4 = (**(code **)(*piVar6 + 0x50))();
    if (cVar4 == '\0') goto LAB_004c0a05;
  }
  puStack_3c = (undefined1 *)0x4c09bf;
  FUN_00402fe0(*param_1,local_174);
  puStack_3c = (undefined1 *)0x4c09d0;
  FUN_00403fd4(&local_17c,local_174);
  puStack_3c = (undefined1 *)local_17c;
  pcStack_40 = ".LoadAppObjViaTable: ";
  pcStack_44 = ": No primary key defined; load impossible.";
  puStack_48 = (undefined1 *)0x4c09f0;
  FUN_004040f0(&local_178,3);
  puStack_48 = (undefined1 *)0x4c0a05;
  FUN_00403d94(local_178);
LAB_004c0a05:
  uStack_30 = (undefined1 *)((uint)uStack_30 & 0xffffff);
  local_28 = (int *)0x0;
  local_2c = 0;
  puStack_4c = &LAB_004c0e86;
  iStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_50;
  local_58 = &LAB_004c0e05;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  puStack_54 = &stack0xfffffffc;
  puStack_48 = &stack0xfffffffc;
  piVar6 = (int *)FUN_004949bc(param_2);
  FUN_00496550(piVar6,(VARIANT *)local_6c);
  iVar10 = FUN_00494858(param_2);
  piVar6 = (int *)(**(code **)(*param_1 + 0x54))(param_1,*(undefined4 *)(iVar10 + 0x34));
  local_2c = FUN_00403224(piVar6,(int)&DAT_004bcb7c);
  if (*(char *)(local_2c + 8) == '\0') {
    *(undefined1 *)(local_2c + 8) = 1;
    local_28 = *(int **)(local_2c + 4);
  }
  else {
    local_6c[1] = (char *)0x4c0a81;
    uVar9 = PTR_DAT_005725ac;
    uVar11 = PTR_DAT_005725ac;
    iVar10 = FUN_00494858(param_2);
    local_6c[1] = (char *)0x4c0a8f;
    FUN_004045b8((BSTR)&local_180,*(LPCSTR *)(iVar10 + 0x3c));
    local_6c[1] = (char *)local_180;
    local_6c[0] = (char *)0x4c0aa6;
    FUN_004053dc(&local_190,1);
    pcVar2 = local_6c[1];
    local_6c[1] = (char *)0x4c0ab8;
    local_28 = (int *)FUN_004b9204(param_1[0x14],pcVar2,&local_190,(VARIANTARG *)uVar9,
                                   (VARIANTARG *)uVar11);
    uStack_30 = (undefined1 *)CONCAT13(1,(undefined3)uStack_30);
  }
  iVar10 = FUN_00494858(param_2);
  FUN_004c4da4(param_1,*(undefined4 **)(iVar10 + 0x3c));
  FUN_004045b8(local_194,local_198);
  FUN_004b9e84((int)local_28);
  FUN_004bc4f4((int)local_28,"=",local_6c);
  sVar5 = FUN_004ba054((int)local_28);
  if (sVar5 != 0) {
    *in_FS_OFFSET = iStack_5c;
    puStack_54 = (undefined1 *)0x4c0b37;
    FUN_004038cc();
    *in_FS_OFFSET = (int)pcStack_44;
    puStack_3c = &LAB_004c0f37;
    pcStack_40 = (char *)0x4c0eaa;
    FUN_00403dd4(local_1fc,5);
    pcStack_40 = (char *)0x4c0eb5;
    FUN_00403db0(&local_1d0);
    pcStack_40 = (char *)0x4c0ec0;
    FUN_00405bcc(&local_1cc);
    pcStack_40 = (char *)0x4c0ecb;
    FUN_00403db0((int *)&local_1bc);
    pcStack_40 = (char *)0x4c0ed6;
    FUN_00405bcc(&local_1b8);
    pcStack_40 = (char *)0x4c0ee6;
    FUN_00403dd4((int *)&local_1a8,5);
    pcStack_40 = (char *)0x4c0ef1;
    FUN_00404474((undefined4 *)local_194);
    pcStack_40 = (char *)0x4c0efc;
    FUN_00405bcc(&local_190);
    pcStack_40 = (char *)0x4c0f07;
    FUN_00404474(&local_180);
    pcStack_40 = (char *)0x4c0f17;
    FUN_00403dd4(&local_17c,2);
    pcStack_40 = (char *)0x4c0f24;
    FUN_00403dd4((int *)&local_74,2);
    pcStack_40 = (char *)0x4c0f2c;
    FUN_00405bcc((VARIANTARG *)local_6c);
    return;
  }
  iVar10 = FUN_00494858(param_2);
  piVar6 = (int *)FUN_00491e30(iVar10,extraout_EDX,extraout_ECX);
  iVar10 = FUN_0048ec24((int)piVar6);
  uVar7 = iVar10 - 1;
  if (SBORROW4(iVar10,1)) {
    uVar7 = thunk_FUN_00402874(uVar7);
  }
  if ((int)uVar7 < 0) {
    *in_FS_OFFSET = iStack_5c;
    *in_FS_OFFSET = iStack_50;
    puStack_48 = (undefined1 *)0x4c0e8d;
    if (uStack_30._3_1_ == '\0') {
      *(undefined1 *)(local_2c + 8) = 0;
    }
    else {
      puStack_4c = (undefined1 *)0x4c0e7c;
      FUN_00403094(local_28);
    }
    return;
  }
  local_34 = (char *)(uVar7 + 1);
  FUN_0048f02c(piVar6,0,&local_58);
  local_6c[1] = (char *)0x4c0ba2;
  FUN_00494e38(param_2,(byte *)&local_58,'\0',(undefined4 *)&stack0xffffffe0,&local_24);
  local_6c[1] = (char *)0x4c0baa;
  piVar8 = (int *)FUN_00494858(param_2);
  local_6c[1] = (char *)0x4c0bb2;
  uVar9 = FUN_004917c4(piVar8,(byte *)&local_58);
  if ((char)uVar9 == '\0') {
    local_6c[1] = (char *)0x4c0bc6;
    FUN_00402fe0(*piVar6,local_174);
    local_6c[1] = (char *)0x4c0bd7;
    FUN_00403fd4((int *)&local_1a0,local_174);
    local_6c[1] = (char *)local_1a0;
    local_6c[0] = ".LoadAppObjViaTable: ";
    local_70 = " Internal inconsistency";
    local_74 = (undefined1 *)0x4c0bf7;
    FUN_004040f0(&local_19c,3);
    local_74 = (undefined1 *)0x4c0c0c;
    FUN_00403d94(local_19c);
  }
  if (unaff_EDI == (int *)0x0) {
    local_74 = (undefined1 *)0x4c0c22;
    FUN_00402fe0(*piVar6,local_174);
    local_74 = (undefined1 *)0x4c0c33;
    FUN_00403fd4((int *)&local_1a8,local_174);
    local_74 = local_1a8;
    pcStackY_78 = ".LoadAppObjViaTable: ";
    pcStackY_7c = "Cannot load object with unallocated native props";
    pVStackY_80 = (VARIANTARG *)0x4c0c53;
    FUN_004040f0(&local_1a4,3);
    pVStackY_80 = (VARIANTARG *)0x4c0c68;
    FUN_00403d94(local_1a4);
  }
  pcStackY_78 = &LAB_004c0d09;
  pcStackY_7c = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStackY_7c;
  pVStackY_80 = (VARIANTARG *)0x4c0c7e;
  local_74 = &stack0xfffffffc;
  piVar6 = (int *)FUN_00494858(param_2);
  pVStackY_80 = (VARIANTARG *)0x4c0c8c;
  FUN_0049145c(piVar6,(byte *)&local_58,(int *)&local_1bc);
  pVStackY_80 = (VARIANTARG *)0x4c0c9d;
  FUN_004054ac(&local_1b8,local_1bc);
  pVStackY_80 = &local_1b8;
  puStackY_84 = (undefined1 *)0x4c0cac;
  iVar10 = FUN_004ba1d8((int)local_28);
  pVVar1 = pVStackY_80;
  pVStackY_80 = (VARIANTARG *)0x4c0cb2;
  local_38 = (int *)FUN_004bb34c(iVar10,pVVar1);
  puStackY_84 = &LAB_004c0cf5;
  iStackY_88 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStackY_88;
  uStackY_8c = 0x4c0cd1;
  pVStackY_80 = (VARIANTARG *)&stack0xfffffffc;
  FUN_004bae4c((int)local_38,&local_1cc);
  uStackY_8c = 0x4c0cdf;
  FUN_004964d0(unaff_EDI,(undefined4 *)&local_1cc);
  *in_FS_OFFSET = iStackY_88;
  pVStackY_80 = (VARIANTARG *)&DAT_004c0cfc;
  puStackY_84 = (undefined1 *)0x4c0cf4;
  FUN_00403094(local_38);
  return;
}

