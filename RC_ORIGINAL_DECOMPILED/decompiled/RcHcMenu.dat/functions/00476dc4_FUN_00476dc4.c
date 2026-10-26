/*
 * FUN_00476dc4 at 00476dc4
 * undefined __register FUN_00476dc4(int param_1, undefined4 * param_2, undefined4 param_3, undefined4 * param_4, byte param_5)
 * Address ranges: 00476dc4-00477035
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00476dc4(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
                 byte param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined *puVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar9;
  int iVar10;
  undefined4 *unaff_EBX;
  int *in_FS_OFFSET;
  int iVar11;
  VARIANTARG *pVVar12;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *puStack_20;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined3 local_8;
  undefined1 uStack_5;
  
  puStack_20 = &stack0xfffffffc;
  iVar10 = 5;
  do {
    local_c = (undefined4 *)0x0;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  LOCK();
  UNLOCK();
  local_8 = 0;
  uStack_5 = 0;
  local_24 = (undefined4 *)&LAB_00477036;
  local_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  *(byte *)(param_1 + 0x54) = param_5;
  uVar5 = 0;
  puVar2 = &stack0xfffffffc;
  uVar3 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar5 = FUN_00403094(*(int **)(param_1 + 4));
    puVar2 = puStack_20;
    uVar3 = uStack_5;
  }
  uStack_5 = uVar3;
  puStack_20 = puVar2;
  iVar10 = CONCAT31((int3)((uint)uVar5 >> 8),param_5);
  iVar11 = 0x476e24;
  piVar6 = FUN_00475a74((int *)&DAT_00474b58,'\x01',*(int *)(param_1 + 0x5c),(int *)(param_1 + 8),
                        *(int *)(param_1 + 0x60),param_4,param_5,uStack_5);
  *(int **)(param_1 + 4) = piVar6;
  FUN_00403e04((int *)(param_1 + 0x2c),param_2);
  puVar7 = FUN_004041f4((undefined *)param_2);
  *(undefined **)(param_1 + 0x30) = puVar7;
  FUN_00403e04((int *)(param_1 + 0x58),param_4);
  FUN_004770d8(param_1);
  pVVar12 = (VARIANTARG *)0x476e53;
  iVar8 = FUN_00477710(param_1);
  if (*(char *)(param_1 + 0x44) != '\0') {
    FUN_00406a48((undefined4 *)PTR_PTR_00572038,(int *)&local_c);
    pVVar12 = (VARIANTARG *)0x476e72;
    FUN_00466d84(local_c,0);
  }
  if (((*(byte *)(param_1 + 0x54) & 2) != 0) && (*(char *)(iVar8 + 0x2c) != '\x01')) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572614,(int *)&local_10);
    pVVar12 = (VARIANTARG *)0x476e95;
    FUN_00466d84(local_10,0);
  }
  if (((*(byte *)(param_1 + 0x54) & 2) == 0) && (*(char *)(iVar8 + 0x2c) == '\x01')) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572268,(int *)&stack0xffffffec);
    pVVar12 = (VARIANTARG *)0x476eb8;
    FUN_00466d84(unaff_EBX,0);
  }
  if ((param_5 & 4) == 0) goto LAB_00476fa8;
  FUN_004054ac((VARIANTARG *)&local_24,*(undefined4 **)(param_1 + 0x58));
  pVVar12 = (VARIANTARG *)&local_24;
  iVar10 = 0;
  iVar11 = FUN_00475d68(*(int *)(param_1 + 4),'\0',0,0,0,pVVar12);
  bVar4 = FUN_00475a6c(*(char *)(iVar11 + 0x20));
  if (((bVar4) &&
      (((cVar1 = *(char *)(iVar8 + 0x20), cVar1 == '\x01' || ((byte)(cVar1 - 0x17U) < 2)) ||
       (cVar1 == '#')))) ||
     ((*(char *)(iVar11 + 0x20) == '\x05' &&
      (((cVar1 = *(char *)(iVar8 + 0x20), cVar1 == '\x01' || ((byte)(cVar1 - 0x17U) < 2)) ||
       (cVar1 == '#')))))) {
    *(undefined1 *)(iVar8 + 0x20) = *(undefined1 *)(iVar11 + 0x20);
  }
  bVar4 = FUN_00475a6c(*(char *)(iVar11 + 0x20));
  uVar9 = extraout_var;
  if (bVar4) {
    bVar4 = FUN_00475a6c(*(char *)(iVar8 + 0x20));
    uVar9 = extraout_var_00;
    if (!bVar4) goto LAB_00476f35;
  }
  else {
LAB_00476f35:
    uVar5 = FUN_00475a50(CONCAT31(uVar9,*(undefined1 *)(iVar11 + 0x20)));
    if ((char)uVar5 != '\0') {
      uVar5 = FUN_00475a50(CONCAT31((int3)((uint)uVar5 >> 8),*(undefined1 *)(iVar8 + 0x20)));
      if ((char)uVar5 != '\0') goto LAB_00476f92;
    }
    cVar1 = *(char *)(iVar11 + 0x20);
    if (((((cVar1 != '\x01') && (1 < (byte)(cVar1 - 0x17U))) && (cVar1 != '#')) ||
        (((cVar1 = *(char *)(iVar8 + 0x20), cVar1 != '\x01' && (1 < (byte)(cVar1 - 0x17U))) &&
         (cVar1 != '#')))) &&
       ((*(char *)(iVar11 + 0x20) != '\x05' || (*(char *)(iVar8 + 0x20) != '\x05')))) {
      FUN_00406a48((undefined4 *)PTR_PTR_00572030,(int *)&local_28);
      FUN_00466d84(local_28,0);
    }
  }
LAB_00476f92:
  iVar8 = FUN_00475d68(*(int *)(param_1 + 4),'\x02',0x25,iVar11,iVar8,(VARIANTARG *)PTR_DAT_00572140
                      );
LAB_00476fa8:
  if ((((*(byte *)(param_1 + 0x54) & 2) == 0) && ((param_5 & 4) == 0)) &&
     (*(char *)(iVar8 + 0x20) != '\x05')) {
    FUN_00406a48((undefined4 *)PTR_PTR_005720b0,(int *)&stack0xffffffd4);
    FUN_00466d84((undefined4 *)pVVar12,0);
  }
  FUN_00475c34(*(int *)(param_1 + 4),iVar8,(int *)&stack0xffffffd0);
  FUN_0040649c((int *)(param_1 + 0x48),iVar10,(int)&DAT_00474ad4);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x38);
  *in_FS_OFFSET = iVar11;
  FUN_00406460((int *)&stack0xffffffd0,(int)&DAT_00474ad4);
  FUN_00403dd4((int *)&stack0xffffffd4,2);
  FUN_00405bcc((VARIANTARG *)&local_24);
  FUN_00403dd4((int *)&stack0xffffffec,3);
  return;
}

